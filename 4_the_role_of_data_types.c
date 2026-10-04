#include <stdio.h>

/// 变量的类型与占用

/// 数据类型的作用
/// 1.确认变量中能存储什么类型的数据
/// 2.存储空间的大小


int main() {
    // 整数类型:

    //  short:短整数 占用两个字节,赋值不能超出范围
    short a = 1;
    printf("%d\n",a);
    printf("short占用:%zu字节\n",sizeof(a));

    //  int:整数 占用4个字节
    int b = 100;
    printf("%d\n",b);
    printf("int占用:%zu字节\n",sizeof(b));

    //  long:长整数 占用4个字节,给long 类型赋值要在末尾加上L来结尾
    long c = 1000L;
    printf("%ld\n",c);
    printf("long占用:%zu字节\n",sizeof(c));

    //  long long:超长整形 占8个字节,给long long类型赋值要在末尾加上LL来结尾
    long long d = 10000LL;
    printf("%lld\n",d);
    printf("long long占用:%zu字节\n",sizeof(d));

    // 拓展:
    // 1.定义short long long 的完整格式应该是 xxx int = 10;
    short int a_1 = 10;
    long int c_1 = 1000L;
    long long int d_1 = 10000LL;
    printf("%d,%ld,%lld\n",a_1,c_1,d_1);

    // 有符号整数:正数,负数:signed
    // 无符号整数:正数unsigned
    // 定义变量时默认有符号
    signed int e = -100;
    unsigned int f = 100; // 强行赋值有符号的数会出错
    printf("%d,%u\n",e,f);


    // 小数类型:

    // double:双精度小数 占用8字节,可以精确到小数点后15位 默认类型
    double g = 1.210;
    printf("%lf\n",g);
    printf("double占用:%zu\n",sizeof(g));

    // float:单精度小数 占用4字节,一般在小数点后6位,后缀要加F结尾
    float h = 3.14159F;
    printf("%.2f\n",h); // 如果想要限制位数 可以在%后面加上.数字 来限制
    printf("float占用:%zu\n",sizeof(h));

    // long double:高精度小数 占用8字节,后缀结尾要加上L
    long double i = 1.32142532652L;
    printf("%Lf\n",i);
    printf("long double占用:%zu\n",sizeof(i));


    // 字符类型:

    // char:ASCII码表中所有字符,不能写中文
    char j = 'A';
    printf("%c\n",j);
    printf("char占用:%zu\n",sizeof(j));


    return 0;
}






























