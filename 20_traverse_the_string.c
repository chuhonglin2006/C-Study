#include <stdio.h>
#include <string.h>

/// 遍历字符串

// 遍历字符串的终止条件为遇到 \0


int main() {
    char str[] = "Hello World";
    for (int index = 0;str[index] != '\0';index++) { // 每次循环前检查是不是 \0
        printf("%c ",str[index]);
    }

    // 拓展:
    // 在UTF-8编码下,一个汉字通常占 3 个字节
    printf("\n%zu",strlen("你好"));
    // strlen数的是字节而不是字的数量

    return 0;
}