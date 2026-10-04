#include <stdio.h>

/// 键盘的输入

/* scanf用于获取键盘的输入
 * scanf("%d",&age)的意思是:按整数格式读取,存入到age变量里面
 * 前面的 & 叫 取地址运算符 用scanf读取int double char时必须加 &
 * 读取字符串(字符数组)不用加
 */

// | 类型         | scanf 读入 |
// | int         | %d       |
// | long long   | %lld     |
// | float       | %f       |
// | double      | %lf      |
// | char        | %c       |
// | 字符串(char数组) | %s    |


int main() {
    setbuf(stdout, NULL);   // 关闭输出缓冲,printf的内容立刻显示

    int age;
    printf("请输入你的年龄:");
    if (scanf("%d",&age) != 1) { // 通过if判断可以判断scanf的返回值
        printf("输入的不是整数");  // scanf返回1表示输入的是整数 返回0表示输入的不是整数
        return 1;
    };
    printf("明年你就 %d 岁了\n",age + 1);


    // 一次读取多个数据
    int a,b;
    printf("请输入a和b的值:");
    if (scanf("%d,%d",&a,&b) != 2) { // 这里读取了两个结果 两个1加起来应该是2
        printf("输入的不是整数或两个数不完整");
        return 1;
    };  // 输入时使用逗号隔开
    printf("scanf读取到的a,b分别为:%d,%d\n",a,b);



    // 读入字符的陷阱
    int n;
    char ch;
    printf("请输入n的值:");
    scanf("%d", &n);
    printf("请输入ch的值:");
    // scanf("%c", &ch);  // 会读到上次输入后残留的回车 '\n'，而不是你想要的字符
    // 解决办法:
    scanf(" %c",&ch); //   在 %c 前面加一个空格
    printf("读取到的n:%d,读取到的ch:%c",n,ch);
    return 0;
}