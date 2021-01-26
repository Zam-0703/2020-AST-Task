#include <stdio.h>
typedef struct Struct{
int id;
double grades;
} Student;
void showout(Student* students,int num);//定义一个输出数组的函数以检测struct_sort是否成功实现排序效果。
void struct_sort(Student* students,int num);

int main( int argc,char *argv[])
{

    char show;
    int n;
    printf("please input the number of students.");
    scanf("%d",&n);
    Student students[n];//根据用户输入的学生数来创建数组。
    printf("Please input the student's id & grades.");
    for ( int i = 0; i < n; i ++ )
    {
        scanf("%d%lf",&students[i].id,&students[i].grades);
    }//先将学生信息录入数组。
    struct_sort( students, n );//进行排序。
    printf("input Y to show the ranking of students,otherwise to quit.");
    getchar();
    show = getchar();
    if ( show == 'Y')
    {
        showout( students, n );
    }//由用户选择是否检测排序函数是否正常工作，将学生按分数高低进行排序。
    return 0;

}
void showout(Student* students,int num)
{
    for ( int j = 0; j < num; j ++ )
    {
        printf("NO.%d: id = %d,grades = %f;\n",j+1,students[j].id,students[j].grades);
    }
    printf("Done.");//简单地遍历并输出数组元素。
}
void struct_sort(Student* students,int num)
{
    Student temp = {0,0.0};
    int a,b;
    for ( a = 0; a < num; a ++ )
    {
        for ( b = a + 1; b < num; b ++ )
        {
            if ( students[a].grades < students[b].grades )
            {
                temp = students[b];
                students[b] = students[a];
                students[a] = temp;
            }
        }
<<<<<<< HEAD
    }//简单的冒泡排序法。
=======
    }//冒泡排序法。
>>>>>>> 712204b (task5 by ChenPeng,tiGao2001)
}