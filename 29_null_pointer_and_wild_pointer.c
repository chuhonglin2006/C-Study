#include <stddef.h>
#include <stdio.h>

/// 空指针与野指针




int main(void) {

    int *null_p = NULL; // 空指针 不指向任何东西

    int *wild_p; // 未初始化的指针 野指针

    // 判断指针是否为空指针
    if (null_p != NULL) {
        printf("%d\n",*null_p);
    } else {
        printf("空指针的地址是:%p\n",null_p);
    }

    printf("野指针的地址是:%p",wild_p);
    return 0;
}

// 空指针(NULL):明确表示 目前没指向任何有效内存 对它解引用 *p 会导致程序崩溃；
// 野指针:没有初始化的指针 里面是随机地址 对它解引用是严重的错误 指针一定要初始化 暂时不用就设成 NULL
// 使用指针前 先判断是否为 NULL