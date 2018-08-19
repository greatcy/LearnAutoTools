/*************************************************************************
	> File Name: sum.c
	> Author: eli
	> Mail: 1525843015@qq.com
	> Created Time: 2018年08月19日 星期日 20时31分49秒
 ************************************************************************/

#include <stdio.h>
#include "sum.h"  
#include "val.h"  
  
int sum(int *x, int *y) {  
    val(x);  
    puts("This is SUM Method!=========HDH");  
    return *x + *y;  
}  
