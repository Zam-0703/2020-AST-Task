#include <stdio.h>
#include <stdlib.h>

int n;

struct Struct
{
    int id;
    double grades;
};

void struct_sort(struct Struct *student)
{
    double a;
    int b;
    for(int j = 0; j < n - 1; j++)
    {
        for(int i = j + 1; i < n; i++)
        {
            if(student[j].grades < student[i].grades)
            {
                a = student[j].grades;
                student[j].grades = student[i].grades;
                student[i].grades = a;
                b = student[j].id;
                student[j].id = student[i].id;
                student[i].id = b;
            }
        }
    }
}

int main(void)
{
    printf("请输入学生个数：");
    scanf("%d", &n);
    struct Struct student[n];

    printf("请输入学号：");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &student[i].id);
    }

    printf("请输入成绩：");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &student[i].grades);
    }

    struct_sort(student);

    printf("排序结果：\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d %lf\n", student[i].id, student[i].grades);
    }

    system("pause");
    return 0;
}
