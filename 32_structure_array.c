#include <stdio.h>

/// 结构体数组

// 结构体把不同类型是数据打包成一个整体,数组把相同类型的元素连续排列

typedef struct {
    char name[10];
    int age;
    double score;
} Student;  // 定义一个结构体


int main() {
    // 使用结构体数组
    static Student cls[3] = { // 外层大括号初始化整个数组,内层每个大括号初始化一个元素 可以省略数组长度
        {.name = "Tom",.age = 18,.score = 93.5}, // 内层的值按成员声明顺序对应:name → age → score
        {.name = "Alice",.age = 19,.score = 92.5},
        {.name = "Bob",.age = 20,.score = 90.5}
    };

    // 遍历结构体数组
    int cls_length = sizeof(cls) / sizeof(cls[0]); // 计算元素个数
    for (int index = 0;index < cls_length;index++) {
        printf("name:%s,age:%d,score:%.1f\n",cls[index].name,cls[index].age,cls[index].score);
    }

    // 通过指针访问
    Student *p = cls; // 数组名退化 为首元素指针
    printf("name:%s,age:%d,score:%.1f\n",p->name,p->age,p->score); // 等价于 (*p).name
    p++; // 移动到下一个结构体   指针 +1 移动的是整个结构体大小 不是 1 字节
    printf("name:%s,age:%d,score:%.1f\n",p->name,p->age,p->score); // -> 用于指针访问成员 . 用于变量访问成员


    return 0;
}



