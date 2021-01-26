typedef struct Struct{
    int id;
    double grades;
} Student;
Student students[100];
//假设students中输入了x组值，第x+1组中id=0，grades=0。
int struct_sort(Student* students)
{
    for(int i=0;students[i].id!=0;i++)
    {
        for(int j=i+1;students[j].id!=0;j++)
        {
            if(students[i].grades<students[j].grades)
            {
                Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
}