#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// 动态内存申请与释放

// 动态内存分配 允许程序运行时向系统申请需要的内存 用完再归还

//            |栈 局部变量      | 堆 动态分配                  |
// | 分配方式  | 自动            | 手动 malloc 申请 free 释放   |
// | 大小     | 有限 一般几 MB   |          很大               |
// | 生命周期  | 函数结束就消失    | 一直存在 直到 free           |


int main(void) {
    setbuf(stdout,NULL);

    // malloc 与 free

    int number;
    printf("要输入几个整数?:");

    if (scanf("%d",&number) != 1) {
        printf("请输入整数");
        return 1;
    }

    if (number < 0) {
        printf("个数必须大于0");
        return 1;
    }

    int *arr = malloc(number * sizeof(int)); // 申请 n 个int大小的内存 现在里面的值是随机值 1个参数 总字节数
    // int *arr = calloc(number,sizeof(int)); // 另一种申请方式 申请时顺便清零 2个参数 元素个数 每个元素字节数


    if (arr == NULL) {  // 检查是否申请成功
        printf("内存分配失败");
        return 1;
    }

    memset(arr,0,number * sizeof(int)); // 对这块内存清零


    for (int index = 0;index < number;index++) { // 输入值并且把值存入数组中
        printf("请输入第%d个整数:",index + 1);
        scanf("%d",&arr[index]);
    }

    int sum = 0;
    for (int index = 0;index < number;index++) { // 求和
        sum += arr[index];
    }
    printf("总和 = %d\n", sum);


    free(arr); // 用完需要手动释放内存
    arr = NULL; // 释放后置空防止误用


    return 0;
}