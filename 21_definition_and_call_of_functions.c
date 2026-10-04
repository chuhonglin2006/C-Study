#include <stdio.h>

/// 函数的定义与调用

// 把一段会重复使用,或者功能独立的代码打包并且起个名字,需要时直接调用 这就是函数

/* 语法:
 * 返回值类型 函数名(参数列表) {
 *     函数体
 *     return 返回值;
 * }
 */

// 定义一个函数
int add(int x,int y) {
    return x + y;
}

// 声明一个函数
int max(int a,int b);


int main() {
    int result = add(3,4);        // 函数的调用
    printf("3 + 4 = %d\n",result);
    int max_result = max(1,2);
    printf("max函数的结果:%d\n",max_result);
    return 0;
}

// 函数的声明: 函数必须先声明或先定义才能使用 如果把main放前面 后面定义的函数需要声明才能使用
int max(int a,int b) {
    return a > b ? a : b;
}