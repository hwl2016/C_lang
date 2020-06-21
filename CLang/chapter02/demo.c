#include <stdio.h>

void main() {
    int num1 = 10, num2 = 8;
    printf("%d是十, %d是八\n", num1, num2);

    float w = 12.5f;
    float h = 4.3f;
    float s = w * h;
    printf("长方形面积：%f\n", s);    // 默认保留率了6位小数
    printf("长方形面积：%.2f\n", s);    // 保留率了2位小数

    double r = 10.2;
    double pi = 3.141592653;
    double area = pi * r * r;
    printf("圆的半径：%lf, 圆的面积：%lf\n", r, area);
    printf("圆的半径：%.2lf, 圆的面积：%.2lf\n", r, area);  // 控制两位小数

    char ch1 = 'a';
    char ch2 = 'A';
    char ch3 = ' '; // 空格
    printf("字符\tASCII码\n");
    printf("%c\t%d\n", ch1, ch1);
    printf("%c\t%d\n", ch2, ch2);
    printf("%c\t%d\n", ch3, ch3);
    printf("%c\t%d\n", ch1 - ch3, ch1 - ch3);   // 小写字母比大写字母差一个空格（32）
}