#include <stdio.h>

/// 字符串指针


// 字符串常量存放在只读区域 不能修改 所以建议使用 const 来修饰 如果想修改 使用字符数组

int main(void) {
    const char *str_p = "Hello"; // 指针保存的是第一个字符的地址
    printf("%s\n",str_p); // printf 的 %s 会从地址开始 一个字符一个字符的向后读 直到遇到 \0


    // 常见操作

    // 1.遍历字符串
    while (*str_p != '\0') {
        printf("%c ",*str_p);
        str_p++; // 指针向后移一位
    }

    // 2.字符串指针数组
    const char *names[] = {"Tom","Bob","Alice","Mike"}; // * 让每个元素都变成 指向字符串的指针
    int names_length = sizeof(names) / sizeof(names[0]);
    for (int index = 0;index < names_length;index++) {
        printf("%s ",names[index]);
    }

    return 0;
}