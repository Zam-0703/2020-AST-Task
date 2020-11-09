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
	int flag=0;
//	n=4;
//	struct student a[4]={{1,34.5},{2,45.7},{3,38.7},{4,13.6}};
	for(i=0,n=0;i<100;i++,n++)
	{
		scanf("%d %lf",&a[i].id,&a[i].grades);
		if(a[i].id==0)
		{
			break;
		}
	}
//	student*p=a;
	sort(a,n);
//	for(i=0;i<n;i++)
//	printf("%d",a[i].id);
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
