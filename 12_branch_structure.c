#include <stdio.h>

/// 分支结构

// 程序不可能永远从上向下运行 经常要根据 条件 做不同的事

/* 分支结构语法:
 * if (条件) {
 *     条件为真 (非0) 时执行
 * } else {
 *     条件为假 (0) 时执行
 * }
 */

int main() {
    // 简单的分支结构
    setbuf(stdout,NULL);

    int score;
    printf("请输入成绩:");
    scanf("%d",&score);
    if (score >= 60) {
        printf("及格\n");
    } else {
        printf("不及格\n");
    }

    // 多分枝结构 else if
    int score_a;
    printf("请输入成绩:");
    scanf("%d",&score);
    if (score > 100 || score < 0) {
        printf("成绩不合法\n");
    } else if (score >= 90) {
        printf("优秀\n");
    } else if (score >= 80) {
        printf("良好\n");
    } else if (score >= 70) {
        printf("中等\n");
    } else if (score >= 60) {
        printf("及格\n");
    } else if (score < 60) {
        printf("不及格\n");
    }

    // switch case 分支结构
    // 当要对同一个整数/字符变量的多个固定取值分别处理时 switch分支比if分支更好用
    int mouth;
    printf("请输入月份:");
    scanf("%d",&mouth);

    switch (mouth) {
        case 3: case 4: case 5:
            printf("春季\n");
            break;
        case 6: case 7: case 8:
            printf("夏季\n");
            break;
        case 9: case 10: case 11:
            printf("秋季\n");
            break;
        case 12: case 1: case 2:
            printf("冬季\n");
            break;
        default: // 处理所有都不是的情况
            printf("输入有误\n");
    }

    // switch 后面的表达式必须是 整数或者字符类型 不能为其他类型
    // case 后面必须是 常量
    // 每个 case 后面必须 break 否则会一直向下执行下去


    // 拓展

    // 三目运算符 条件 ? 值1 : 值2  (条件为真取值1,否则取值2)
    int a = 7,b = 3;

    int max = (a > b) ? a : b;
    printf("max:%d",max);

    return 0;
}

