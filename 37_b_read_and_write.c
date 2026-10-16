#include <stdio.h>

/// 二进制读写文件

// 二进制读写是把内存中的数据原样复制到文件 适合 结构体 数组 图片 等

int main(void) {
    FILE *fp = fopen("E:/CProject/Study/37_data.txt","wb");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    // 写入二进制文件
    const int arr[5] = {1,2,3,4,5};

    const size_t n = fwrite(arr,sizeof(int),5,fp); // 写入二进制文件 数据在内存中地址 每个元素占用大小 一共多少元素 文件指针

    if (n != 5) {
        printf("写入不完整\n");
        return 1;
    }

    fclose(fp); // 关闭文件
    printf("写入完成,共写入 %zu 个元素\n",n);

    // 读取二进制文件
    fp = fopen("E:/CProject/Study/37_data.txt", "rb");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    int arr_[5];

    const size_t r = fread(arr_,sizeof(int),5,fp);
    printf("成功读取 %zu 个元素\n", r);

    for (size_t index = 0;index < n;index++) {
        printf("%d ",arr_[index]); // 循环读取每个元素
    }
    printf("\n");

    fclose(fp); // 关闭文件


    return 0;
}