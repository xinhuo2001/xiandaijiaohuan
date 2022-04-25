#include<stdio.h>

/*实验1*/
#define SchTabLen 20    //调度表20行
#define SchTabWdh 3     //三个周期性调度任务 摘机-脉冲-位间隔
void intiSchTable(int ScheduleTable[SchTabLen][SchTabWdh]);


/*实验2*/
#define LINEMAX 6 //最大线路数；
int linestate200[LINEMAX],linestate[LINEMAX]; //线路从0开始编号；状态：1：有电流，0无电流；
enum UporOn {ehandup,ehandon}; //摘挂机区别符：ehandup表示摘机，ehandon表示挂机；
typedef struct UpOnnode             //摘挂机队列节点结构
{
    enum UporOn phonestate;      //摘挂机区别符；
    int linenum;            //线路号（从0开始）；
    struct UpOnnode* next;  //指向下一节点的指针；
} UpOnnode;






