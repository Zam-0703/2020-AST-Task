### 科协第五周Task

##### ||陈奥威的代码||



###### 代码如下



	#include <stdio.h>
	#include <string.h>
	#define N 3
	struct stru{
		char id[20];
		double grades;
	};
	struct stru struct_sort(struct stru *pd,int n);
	int main()
	{
		int n,i;
		struct stru student[N];
		for(n=0;n<N;n++)
		{
			printf("请输入学生的学号:\n");
			printf("请输入学生的加权成绩：\n");
			scanf("%s%lf",&student[n].id,&student[n].grades);
		}
		printf("\n\n");
		struct_sort(student,N);
		printf("\n");
		for(i=0;i<N;i++){
		printf("%s\t%lf\n",student[i].id,student[i].grades);}	 
	 } 
	struct stru struct_sort(struct stru *pd,int n)
	{
	int i,j;
	struct stru k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pd[i].grades<pd[j].grades)
			{
				k=pd[i];
				pd[i]=pd[j];
				pd[j]=k;
			}	
		}
	}
	return *pd;
	}
