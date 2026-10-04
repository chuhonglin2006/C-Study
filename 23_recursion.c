#include <stdio.h>

/// 递归

// 递归就是让函数调用自己,必须具备终止条件和向终止条件逼近的递推关系

int factorial(int number) {
    printf("进入 factorial(%d)\n", number);
    if (number <= 1) { // 终止条件 number <= 1
        printf("factorial(1) 返回 1\n");
        return 1;
    }
    int result = number * factorial(number - 1); // 函数调用自己
    printf("factorial(%d) 返回 %d\n", number, result);
    return result;
}

int main() {
    printf("%d",factorial(5));
    return 0;
}
// 每次函数调用,系统都会在栈上创建一个独立的"栈帧",保存这一层自己的 number。
//         ┌──────────────────┐
// 栈顶 →   │ factorial(1)     │  number = 1   ← 最先返回
//         ├──────────────────┤
//         │ factorial(2)     │  number = 2
//         ├──────────────────┤
//         │ factorial(3)     │  number = 3
//         ├──────────────────┤
// 栈底 →   │ factorial(4)     │  number = 4   ← 最后返回
//         ├──────────────────┤
//         │ main             │
//         └──────────────────┘
// 要点:
// 每一层的 number 互相独立,互不影响。
// 上层必须等下层返回,才能完成自己的乘法。
// 栈帧数量 = 递归深度。深度太大(比如 factorial(1000000))会栈溢出。