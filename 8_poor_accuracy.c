#include <stdio.h>

/// 浮点数的精度差

// 小数在计算机里面是 近似存储 的,不能直接使用 == 直接比较两个小数

int main() {
    double x = 0.1 + 0.2;
    printf("0.1 + 0.2的值是:%.20f\n",x);
    printf("x == 0.3是:%d",x == 0.3); // 0是False 1是True
    return 0;
}