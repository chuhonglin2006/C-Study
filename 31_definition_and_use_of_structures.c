#include <stdio.h>

/// 结构体的定于与使用

// 数组只能存 类型相同 的数据 需要存不同的类型数据 就需要打包成一个整体 这就是 结构体

/// 结构体的定义
typedef struct {
    char name[20]; // 里面放定于的数据类型
    int age;
    double score;
} Student; // 最后是结构体名称

int main(void) {
    Student s_1 = {.name = "Tom",.age = 18,.score = 84.5}; // 创建一个结构 并且赋值
    Student s_2 = {.name = "Mike",.age = 19,.score = 79.5};

    printf("name:%s,age:%d,score:%.1f\n",s_1.name,s_1.age,s_1.score); // 使用结构体
    printf("name:%s,age:%d,score:%.1f\n",s_2.name,s_2.age,s_2.score);

    s_1.age = 20;  // 修改结构体中的数据
    s_1.score += 10;
    snprintf(s_1.name,sizeof(s_1.name),"Alice");

    printf("name:%s,age:%d,score:%.1f\n",s_1.name,s_1.age,s_1.score);

    // 使用 . 访问结构体变量的成员
    // 字符数组成员不能直接使用 = 赋值 要使用 snprintf




    return 0;
}