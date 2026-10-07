#include <stdio.h>

/// 指针与数组

// 数组名在大多情况下会被当作 元素首地址

int main(void) {
    int arr[5] = {1,2,3,4,5};
    int *p = arr; // 获取数组首元素地址 等价于 int *p = &arr[0]
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    printf("%d ",*(p));
    printf("%d ",*(p + 1));
    printf("%d ",*(p + 2));
    printf("%d ",*(p + 3));
    printf("%d\n",*(p + 4)); // 一个数字是一字节


    for (int index = 0;index < arr_length;index++) {
        printf("%d ",*(p + index)); // 等价于 arr[index] p[index]
    }
    // p + 1 表示指向下一个元素 地址实际增加 sizeof(int) 字节 由编译器自动计算

    return 0;
}