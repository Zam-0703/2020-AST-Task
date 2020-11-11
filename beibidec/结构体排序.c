#include <stdio.h>
	typedef struct Struct
	{
    int id;
    double grades;
	} Student;
int main()
{ 	int i,b,k,l;
	printf("输入结构体数:") ;
	scanf("%d",&b) ;
	Student a[b+1];
	for(i=0;i<b;i++)
	{
	scanf("%d%lf",&a[i].id,&a[i].grades);
	}
	sort(a,b);
	printf("排序完成"); 
	return 0;
}
void sort(Student*a,int b)
{int k,l;

		for(k=0;k<b;k++)
	{
		for(l=k+1;l<b;l++)
		{if(a[k].grades<a[l].grades)
		a[b+1]=a[k];
		a[k]=a[l];
		a[l]=a[b+1];
		}
	}
}
