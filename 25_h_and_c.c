#include "lib/25.h"
#include <stdio.h> // 系统头文件用尖括号


/// 项目变大后,要把不同的函数分到不同的文件里面 h头文件放函数声明 c文件放函数定义


int main(void) {
    int arr[5] = {1,2,3,4,5};
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    int result = add_arr(arr,arr_length);
    printf("结果是:%d",result);

    return 0;
}