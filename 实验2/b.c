#include "bconstant.h"
#include<stdlib.h>


/**
 * linestate200[LINEMAX]:已保存的200ms前线路状态
 * int linestate[LINEMAX]:当前的线路状态
 * head1,end1:摘挂机队列的首尾指针
 * */
void scanfor200(int linestate200[LINEMAX], int linestate[LINEMAX], UpOnnode * head1, UpOnnode* end1)
{
    // 摘机 + 挂机
    int up, down;

    for (int i = 0; i <= LINEMAX; i++) {
    
        struct UpOnnode *now = NULL;
        now = (UpOnnode*)malloc(sizeof(UpOnnode));
        if(now == NULL) return; //分配内存失败

        up = (!linestate200[i]) && linestate[i];    // 1为摘机
        down = (!linestate[i]) && linestate200[i];  // 1为挂机

        if (up || down) {    
            if (up) {   
                now->phonestate = ehandup;  //摘机
            } else {    
                now->phonestate = ehandon;  //挂机
            }
            now->linenum = i;
            now->next = NULL;
            //添加节点
            end1->next = now;
            //更新尾节点
            end1 = now;
        }
    }
    return;
}
