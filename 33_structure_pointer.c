#include <stdio.h>

/// 结构体指针

// 结构体指针就是 指向结构体变量的指针

typedef struct {
    char name[10];
    int age;
    double score;
} Student;

static Student s_1 = {.name = "Tom",.age = 18,.score = 92.5};
static Student *p_1 = &s_1; // p_1 保存的是 s_1 的地址


/// 结构体指针作函数参数

// C 是值传递 传递结构体会整体拷贝一份 结构体大时开销到 而且函数里修改的是副本 改不到原数据

// 传指针
static void print_student(const Student *s) { // 只读 加 const 表明不会修改
    printf("name:%s,age:%d,score:%.1f\n",s->name,s->age,s->score);
}

static void change_score(Student *s) { // 需要修改 不加 const
    s->score += 10;
    printf("修改后的score是:%.1f\n",s->score);
}

// 传结构体数组
static double get_average_score(const Student *arr, const int length) { // 求平均分
    double sum_score = 0; // 定义一个double 用来存所有分数总和
    for (int index = 0;index < length;index++) { // 循环所有结构体
        sum_score += arr[index].score; // 将所有人的分数加到 sum_score
    }
    return sum_score / length; // 返回平均分
}

// 返回结构体指针
static const Student *find_best(const Student *arr, const int length) { // 返回成绩最好学生的指针
    const Student *best = &arr[0]; // 假设第一个学生成绩最好
    for (int index = 0;index < length;index++) { // 冒泡排序
        if (arr[index].score > best->score) {
            best = &arr[index];
        }
    }
    return best;
}


int main(void) {
    // 访问成员 . 与 ->
    printf("%s\n",(*p_1).name); // 先解引用 在用 . 访问成员
    printf("%s\n",p_1->name); // 箭头运算符

    // 为什么要有 -> 因为 . 的优先级高于 * 所以 *p.name 会被解析成 *(p.name) 是错的 必须写成 (*p).name -> 就是为了省掉这个括号

    // 通过指针修改原变量
    p_1->age = 19;
    printf("%d\n",s_1.age);


    // 结构体数组指针
    Student cls[3] = {
        {.name = "Tom", .age = 18, .score = 92.5},
        {.name = "Amy", .age = 17, .score = 88.0},
        {.name = "Bob", .age = 18, .score = 79.5}
    };
    Student *p_cls = cls; // 等价于 &cls[0]

    // 遍历结构体
    const int cls_length = sizeof(cls) / sizeof(cls[0]); // 获取结构体数组元素个数
    for (int index = 0;index < cls_length;index++) {
        printf("name:%s,age:%d,score:%.1f\n",p_cls->name,p_cls->age,p_cls->score);
        p_cls++;
    }

    // 调用结构体指针函数
    print_student(&s_1); // 两个写法都是传入一个指针
    change_score(p_1);

    const double avg = get_average_score(cls,cls_length); // 传入结构体数组首元素指针和数组元素个数
    printf("平均分:%.2f\n",avg);

    const Student *b = find_best(cls,cls_length); // 返回一个指针
    printf("name:%s,age:%d,score:%.1f\n",b->name,b->age,b->score);

    return 0;
}





















