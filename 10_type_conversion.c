#include <stdio.h>

/// 类型转换

int main() {
    int a = 17;
    int b = 5;

    // 强制类型转换 (double)a 将a的值临时当作double,变成17.0
    printf("(double)%d / %d = %.2f\n",a,b,(double)a / b);

    // (double)a 只是临时把a当作double使用,变量a本身仍然是int值还是17

    // 自动类型转换
    int x = 3.9;
    printf("x自动类型转换后的结果为:%d",x);

    // 3.9是double,x是int,类型不一致 编译器会自动把3.9转成int,规则是直接丢掉小数部分,不会四舍五入

    return 0;
}