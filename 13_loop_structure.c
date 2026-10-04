#include <stdio.h>

/// 循环结构

// 需要重复做一件事就要使用 循环

int main() {
    setbuf(stdout,NULL);

    /* while循环:
     * while (条件) {
     *     条件为真时,反复执行
     * }
     */

    int index = 1;
    int sum = 0;
    while (index <= 100) {
        sum += index;
        index++;
    }
    printf("1到100的和是:%d\n",sum);



    /* for循环:
     * for (初始化;条件;更新) {
     *     条件为真时,反复执行
     * }
     */

    for (int i = 1;i <= 5;i++) {
        printf("第%d次循环\n",i);
    }



    /* do-while循环:先执行一次循环体,在判断条件,至少 执行一次
     * do {
     *     循环体
     * } while (条件);
     */

    int n;
    do {
        printf("请输入一个整数:");
        if (scanf("%d",&n) != 1) { // 输入数字以外的会陷入死循环
            printf("请勿输入字母");
            return 1;
        };
    } while (n < 1 || n > 10); // 检查输入 条件为真回到 do 条件为假 退出循环
    printf("你输入了:%d\n",n);



    // break与continue
    // break:结束整个循环 continue:跳过本次循环
    for (int a = 1;a <= 10;a++) {
        if (a == 5) {
            continue;
        }
        if (a == 8) {
            break;
        }
        printf("%d\n",a);
    }


    return 0;
}