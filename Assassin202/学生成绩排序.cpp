#include <stdio.h>

typedef struct Struct{
	int id;
	double grades;
};

void struct_sort(Struct *student, int n);//根据学生成绩对学生排序 

int main()
{
	int n;
	struct Struct stu[50];
    struct Struct *Stu = stu;
	scanf("%d",&n);                //  输入学生个数 
	int i=0;
	for(;i<n;i++)
	scanf("%d %lf",&(stu[i]).id,&(stu[i]).grades);
	
	struct_sort(Stu,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d %f\n",(stu[i]).id,(stu[i]).grades);
	}
	return 0;
}
void struct_sort(Struct *student,int n)
{
	int x, y, t;
	double k;
	for(x=0;x<n;x++)
	{
		for(y=0;y<n-1;y++)
		{
			if((*(student+x)).grades>(*(student+y+1)).grades)
			{
				t = (*(student+x)).id;
				(*(student+x)).id = (*(student+y+1)).id;
				(*(student+y+1)).id = t;
				k = (*(student+x)).grades;
				(*(student+x)).grades = (*(student+y+1)).grades;
				(*(student+y+1)).grades = k;
			}
		}
	}
	
}
