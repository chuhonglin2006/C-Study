#include <stdio.h>

/// 冒泡排序

// 原理:反复比较相邻的两个数,把大的往后排

int main() {
    int arr[10] = {6,4,3,9,8,5,1,2,10,54}; // 定义一个数组
    int arr_length = sizeof(arr) / sizeof(arr[0]); // 获取数组长度
    for (int index = 0;index < arr_length - 1;index++) { // 一共需要 n-1 次
        int swapped = 0; // 标记本次是否发生交换
        for (int j = 0;j < arr_length - 1 - index;j++) { // 每趟把最大的元素向后排
            // -1:需要比较arr[j]和arr[j+1],j最大只能到 n-2 不然 j+1 会越界
            // -index:每趟结束后,末尾已经有index个排好的大数了,不用再次比较
            if (arr[j] > arr[j + 1]) { // 交换
                int tmp = arr[j]; // 交换前先把大的值保存,否则会丢失
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swapped = 1;
            }
            if (!swapped) break; // 没有交换说明已经完成
        }
    }
    for (int i = 0;i < arr_length;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}