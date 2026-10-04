#include <stdio.h>

/// 无返回值函数

// 无返回值函数的定义和使用

// 定义一个无返回值函数
void try_swap(int a,int b) { // 将 a 和 b 两个值互相交换
    int temp = a;
    a = b;
    b = temp;
    printf("函数内部:a = %d,b = %d\n",a,b);
}

int main() {
    int x = 1,y = 2;
    try_swap(x,y);
    printf("函数外部:x = %d,y = %d\n",x,y);
    return 0;
}

// 函数不能修改传进去的变量的值 这里修改的是副本的值 外面的值未改变

/// 拓展:函数的作用域
/// 1.局部变量:定义在函数内部,只在这个范围内有效,函数结束就消失
/// 2.全局变量:定义在所有函数外面,整个文件都能访问