#include <stdio.h>

/// 常量的定义

/// 值在运行中 不能被修改的 叫做常量,有两种写法


// 1.const 常量:有类型,编译器会检查
const double PI = 3.14;

// 2.宏定义:纯文本替换,末尾没有分号
#define MAX_SIZE 100

/// 修改const常量编译器会直接报错,常量名习惯使用 全大写



int main() {
    printf("我是const常量PI:%f\n",PI);
    printf("我是宏常量MAX_SIZE:%d\n",MAX_SIZE);
    return 0;
}