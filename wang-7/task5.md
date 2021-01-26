# 排序代码 
## 冒泡排序 
```c
typedef struct Struct{
    int id;
    double grades;
} Student;

//学生结构体，id为学号，grades为分数，要求struct_sort()函数可以把所有学生按分数从大到小排序。

void struct_sort(Student* students);//可根据自己的需求随意更改原型，怎么方便怎么写。
{
    int i, j;
    for( i = 0; i < num - 1; i++ )
    {
        int ischange = 0;
        for( j = 0; j < num - 1; j++ )
        {
            if( students[j].grades < students[j + 1].grades )
            {
                int temp;
                temp = students[j].grades;
                students[j].grades = students[j +1].grades;
                students[j + 1].grades = temp;
                ischange = 1;
            }
        }
        if (!ischange)
        {
            break;
        }
    }
}

 ``` 
# 命令行参数  
当程序在命令行中运行时可以同时传入其他参数  
其中argc记录参数总个数  
而argv是一个指针数组，argv[0]指向程序的全局路径。其他参数依次存储。  
用途：可以用来指定传入的文件名以及打开方式等。
