#include <stdio.h>

/// 指针能修改外部的变量

void swap(int *a,int *b) { // 声明时: * 表示 a 是一个指针
    int tmp = *a; // 使用时: * 表示 解引用 取 a 指向的值
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 1,y = 2;
    printf("修改前x = %d,y = %d\n",x,y);
    swap(&x,&y); // 这里需要传地址
    printf("修改后x = %d,y = %d",x,y);
    return 0;
}

/// 这次交换成功 是因为函数拿到的是x y 的地址 通过指针直接修改了原变量

