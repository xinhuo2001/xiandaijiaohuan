#include<stdio.h>

#define SchTabLen 20    //调度表20行
#define SchTabWdh 3     //三个周期性调度任务 摘机-脉冲-位间隔

void intiSchTable(int ScheduleTable[SchTabLen][SchTabWdh]);