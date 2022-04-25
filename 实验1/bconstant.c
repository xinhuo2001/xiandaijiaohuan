#include "bconstant.h"

void intiSchTable(int ScheduleTable[SchTabLen][SchTabWdh])
{
    for(int i = 0; i < SchTabLen; i++) {

        // 摘机
        if(i % 20 == 0) {
            ScheduleTable[i][0] = 1;
        } else {
            ScheduleTable[i][0] = 0;
        }

        // 脉冲
        ScheduleTable[i][1] = 1;

        // 位间隔
        if(i % 10 == 0) {
            ScheduleTable[i][2] == 1;
        } else {
            ScheduleTable[i][2] = 0;
        }
    }
    return;
}