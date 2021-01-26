#include<stdio.h>

typedef struct Struct{
    int id;
    double grades;
} Student;

void struct_sort(Student*p,Student a[])
{
	int i,j,k;
	Student t;
	for(i=0;i<9;i++)
	{
		j=i;
		for(k=i+1,p->grades;k<10;k++)
		{
			if(p>p-1)
			{
				j=k;
			}
			if(j!=i)
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
				
		}
	}
}
void main()
{
	int b;
}


  


