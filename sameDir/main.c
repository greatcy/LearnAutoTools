/*************************************************************************
> File Name: main.c
> Author: eli
> Mail: 1525843015@qq.com
> Created Time: 2018年08月19日 星期日 20时27分38秒
************************************************************************/
#include <stdio.h>    
#include <stdlib.h>    
#include <unistd.h>    
#include "sum.h"    
#include "get.h"    


//入口主函数    
int main() {    
    int x = 10;    
    int y = 20;    
    int z = sum(&x, &y);    
    puts("This is Main");    
    printf("Z:%d\n", z);    
    x = 20;    
    z = get(&x, &y);    
    printf("Z:%d\n", z);    
    return 1;    
}   
