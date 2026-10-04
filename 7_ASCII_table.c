#include <stdio.h>

/// ASCII 码表

// 在计算机内部 char 就是一个小整数,每个字符对应一个编号

int main() {
    // 定义一个字符
    char a = 'A';
    // 打印a的编码
    printf("%c的编码是:%d\n",a,a);
    // 打印‘A’的下一个字符
    printf("%c的下一个字符是:%c\n",a,a + 1);
    // 小写字母到大写字母的转换 -32
    printf("a的大写字母是:%c\n",'a' - 32);
    // 大写字母到小写字母的转换 +32
    printf("A的小写字母是:%c\n",'A' + 32);
    return 0;
}