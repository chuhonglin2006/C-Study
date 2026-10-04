#include <stdio.h>

/// 算数运算符

int main() {
    int a = 100;
    int b = 200;

    // 算数运算符

    // 加法:
    int c = a + b;
    printf("a + b的结果是:%d\n",c);

    // 减法:
    int d = b - a;
    printf("b - a的结果是:%d\n",d);

    // 乘法:
    int e = a * b;
    printf("a * b的结果是:%d\n",e);

    // 除法:(两个整数相除,结果依然是整数,想要得到小数,必须让 其中一个至少是小数)
    int f = b / a;
    printf("b / a的结果是:%d\n",f);

    // 取余:
    int g = a % b;
    printf("a %% b的结果是:%d\n",g);

    /// 赋值与复合赋值

    int h = a+=1;  // a+=1 等价于 a = a + 1
    int i = a-=1; // a-=1 等价于 a = a - 1
    printf("a+=1的结果:%d\n",h);
    printf("a-=1的结果:%d\n",i);
    // a *= 1 等价于 a = a * 1
    // a /= 1 等价于 a = a / 1
    // a % = 1 等价于 a = a % 1

    int j = a++; // 后置: j = a++ 把a的值给j 再让a加一
    printf("j经过a++后的结果:%d\n",j);
    printf("a经过a++后的结果:%d\n",a);
    int k = ++a; // 前置: k = ++a 把a先加一 再把a的值给k
    printf("k经过a++后的结果:%d\n",k);
    printf("a经过a++后的结果:%d\n",a);

    /// 关系运算符

    // == 等于
    printf("a等于1的结果为:%d\n",a == 1);
    // != 不等于
    printf("a不等于1的结果为:%d\n",a != 1);
    // > 大于
    printf("a大于1的结果为:%d\n",a > 1);
    // < 小于
    printf("a小于1的结果为:%d\n",a < 1);
    //   >= 大于等于   <= 小于等于
    //  所有关系运算符结果只有两种 1表示真 0表示假

    /// 逻辑运算符

    // && 与 只有两边都为真 结果才为真
    printf("a等于1与a!=的结果是:%d\n",a == 1 && a!= 1);
    // || 或 有一边为真 结果就为真
    printf("a等于1或a!=的结果是:%d\n",a == 1 || a!= 1);
    // ! 非 真的结果为假 假的结果为真
    printf("a等于1的非结果是:%d\n",!(a == 1));
    return 0;
}


