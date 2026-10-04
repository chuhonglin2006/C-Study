#include <stdio.h>
#include <string.h>

/// 字符串

// C语言中没有字符串类型的数据,C中的字符串就是 以 \n 结尾的 char数组


int main() {
    setbuf(stdout,NULL);

    // 字符串的定义
    char str[] = "Hello World";

    // 获取字符串的占用字节和长度
    printf("字符串占用字节:%zu,字符串长度:%zu\n",sizeof(str),strlen(str));
    // 占用12字节原因:结尾是 \0 占用一字节

    // 输出字符串
    printf("%s\n", str);


    // 字符串的输入
    // 语法:fgets(变量名,缓冲区总大小,stdin);

    char name[10]; // 先定义一个字符串
    printf("请输入你的名字:");
    fgets(name,sizeof(name),stdin); // 输入一整行 含空格
    // scanf 与 fgets 区别:
    // scanf:遇到空格,回车就停止,只能读一个 单词 不加长度限制有越界风险
    // fgets:读一整行,最多读 sizeof(name)-1 个字符,更安全,但会把末尾的 \n 也读进来,需要手动去掉
    name[strcspn(name,"\n")] = '\0'; // 去掉末尾的换行符 字符串能使用下标定位
    // strcspn(字符串,字符集合):从字符串开头数起,返回第一个出现字符集合任意字符下标的地方
    printf("%s,名字共 %zu 个字节\n",name,strlen(name));

    return 0;
}