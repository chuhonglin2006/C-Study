#include <stdio.h>

/// 数组传递给函数

// 数组作为参数时,传递的是 首元素的地址 同时需要额外传入 数组长度


int add_arr(const int arr[],int arr_length) { // 在函数内使用sizeof(arr)得到的是指针的大小,而不是数组大小
    int sum = 0;
    for (int index = 0;index < arr_length;index++) {
        sum += arr[index];
    }
    return sum;
}

int main(void) {
    int a[5] = {1,2,3,4,5};
    int a_length = sizeof(a) / sizeof(a[0]);
    int result = add_arr(a,a_length); // 这里传的a是首元素的地址 &a[0]
    // 数组名在大多表达式里面会自动转换为 指向首元素的指针 这叫 数组退化
    printf("数组所有元素的和是:%d",result);
    return 0;
}