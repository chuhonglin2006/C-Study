#include <stdio.h>
#include <string.h>

/// 一些常用的字符串函数


int main() {
    char a[10] = "Hello";
    char b[10] = "World";
    char c[10];

    // 1.strlen(str):获取字符串长度,不含 \0
    size_t char_a_length = strlen(a);
    printf("a的长度是:%zu\n",char_a_length);
    size_t char_b_length = strlen(b);
    printf("b的长度是:%zu\n",char_b_length);

    // 2.strcpy(dst,str):将str复制到dst
    strcpy(c,a);
    printf("c的结果为:%s\n",c);

    // 3.strcat(dst,str):将str拼接到dst末尾
    strcat(a," ");
    strcat(a,b);
    printf("拼接后的a是:%s\n",a);

    // 4.strcmp(a,b):比较；两个字符串,相等返回0,a大返回正数,a小返回负数
    char d[10] = "hello";
    char e[10] = "world";

    if (strcmp(d,e) == 0) { // 从左到右遇到第一个不同的字符来比较ASCII大小
        printf("d,e相同");
    } else if (strcmp(d,e) > 0) {
        printf("d大");
    } else if (strcmp(d,e) < 0) {
        printf("e大");
    }
    return 0;
}