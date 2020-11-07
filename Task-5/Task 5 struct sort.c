#include<stdio.h> 
typedef struct Struct{
	int id;
	double grades;
}student;
void sort(student a[],int n);
int main()
{
	int i,n;
	student a[100];
	for(i=0,n=0;i<100;i++,n++)
	{
		scanf("%d %lf",&a[i].id,&a[i].grades); //输入学生学号及成绩 
		if(a[i].id==0)
		{
			break;
		}
	}
	sort(a,n);
	return 0;
}
void sort(student a[],int n)
{
	int i,j;
	student k={0,0.0};
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j].grades>a[i].grades)
			{
				k=a[j];
				a[j]=a[i];
				a[i]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d %lf\n",a[i].id,a[i].grades);
	}
	
}
