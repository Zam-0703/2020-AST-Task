#include <stdio.h>
#include <stdlib.h>
#define LEN 20

struct info{
    int id;
    double grades;
    };

void struct_sort(struct info stu[LEN]);

int main()
{
    struct info student[LEN];
    int i;
    for(i = 0; i < LEN; i++)
    {
        scanf("%d", &(student[i].id));
    }
    for(i = 0; i < LEN; i++)
    {
        scanf("%lf", &(student[i].grades));
    }
    struct_sort(student);
    return 0;
}

void struct_sort(struct info stu[LEN])
{
    int i, j, temp1;
    double temp2;
    for(i = 0; i < LEN - 1; i++)
    {
        for(j = 0; j < LEN - 1 - i; j++)
        {
            if(stu[j].grades < stu[j + 1].grades)
            {
                temp2 = stu[j].grades;
                stu[j].grades = stu[j + 1].grades;
                stu[j + 1].grades = temp2;
                temp1 = stu[j].id;
                stu[j].id = stu[j + 1].id;
                stu[j + 1].id = temp1;
            }
            else continue;
        }
    }
    for(i = 0; i < LEN; i++)
    {
        printf("%5d", stu[i].id);
    }
    printf("\n");
    for(i = 0; i < LEN; i++)
    {
        printf("%5.1lf", stu[i].grades);
    }
}
