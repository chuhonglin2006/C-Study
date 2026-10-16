#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// 动态内存调整大小

// 已经申请的内存发现不够用或用不完时 直接改变它的大小 同时保留里面已有的数据

int main(void) {
    int capacity = 2; // 当前数组的容量
    int size = 0; // 数组中已经存的个数
    int *data = malloc(capacity * sizeof(int)); // 申请一块内存
    if (data == NULL) { // 判断是否申请成功
        printf("内存分配失败");
        return 1;
    }
    memset(data,0,capacity * sizeof(int)); // 对这块内存清零

    for (int index = 1;index <= 10;index++) { // 每一轮先判断 满了没有 满了先扩容 然后再存入数据
        if (size == capacity) { // 判断数组是否装满了
            capacity *= 2; // 扩容为原来的两倍
            int *tmp = realloc(data,capacity * sizeof(int)); // 把内存调整为新的大小 并保留原数据 返回的地址可能和原来不同
            if (tmp == NULL) { // 判断是否扩容成功
                printf("扩容失败"); // 一旦扩容失败 返回NULL data就会被覆盖成NULL 不能访问和释放
                free(data); // 扩容失败后要释放原来的内存
                return 1;               // 所以先使用tmp来接收结果 如果失败 data还指着旧内存地址 可以释放 扩容成功在把tmp赋值给data
            }
            data = tmp;
            printf("扩容到:%d大小\n",capacity);
        }
        data[size++] = index * index; // 循环存入 1~10 的平方
    }

    for (int index = 0;index < size;index++) {
        printf("%d ",data[index]);  // 循环打印数组中的元素
    }

    free(data); // 释放内存
    data = NULL;
    return 0;
}

/// 动态内存四大经典错误
/// 1.内存泄露 : malloc后忘记free
/// 2.重复释放 : 对同一块内存free两次 程序会崩溃 free后要立即把指针设置为NULL
/// 3.释放后继续使用 : free后再访问 是未定义行为
/// 4.越界访问 : 申请了n个元素 却访问了 arr[n]
















