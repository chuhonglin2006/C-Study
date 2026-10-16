#include <stdio.h>

/// 文件读写

// 文件读写是非常重要的一个功能 基本流程: 打开文件 -> 读/写 -> 关闭文件

int main(void) {
    // 1.打开文件                 文件路径                           模式(与Python中相同)
    FILE *fp = fopen("E:/CProject/Study/36_data.txt","w");

    if (fp == NULL) { // 判断文件是否为NULL
        perror("fopen"); // 打印具体错误
        return 1;
    }

    // 2.文本写入

    // 按字符写入
    for (int index = 0;index < 5;index++) {
        fputc('a',fp); // 循环写入 5 个 a
    }

    // 按行写入
    fputs("\nHello\n",fp);  // fupts 不会带上 \n 要自己加
    fputs("C language\n",fp);
    printf("写入完成\n");

    fclose(fp); // 写入完成后要关闭文件


    // 3.文本读取

    fp = fopen("E:/CProject/Study/36_data.txt","r"); // 以读模式打开文件
    if (fp == NULL) { // 判断文件是否为NULL
        perror("fopen");
        return 1;
    }

    // 按字符读取
    int ch; // fgetc 读取到字符时 返回字符的值
    while ((ch = fgetc(fp)) != EOF) { // 读取到文件末尾或者出错时返回 EOF
        putchar(ch); // 按字符输出 等价于 printf("%c",ch);
    }
    putchar('\n');


    rewind(fp); // 让光标回到文件开头


    // 按行读取
    char buf[256];
    while (fgets(buf,sizeof(buf),fp) != NULL) { // 参数 1.存放结果的数组 最多读多少字节 从哪个文件读
        printf("%s",buf);
    }

    fclose(fp); // 使用完成后关闭文件


    return 0;
}