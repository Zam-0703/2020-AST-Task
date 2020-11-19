#include <stdio.h>
#include <stdlib.h>
typedef struct Struct{
    int id;
    double grades;
} Student;
struct Struct example[6]={{1,1.0},{2,2.0},{3,3.0},{4,4.0},{5,5.0},{6,6.0}};
//学生结构体，id为学号，grades为分数，要求struct_sort()函数可以把所有学生按分数从大到小排序。
void struct_sort(Student* students1,Student* students2){
    int i=0,j;
    struct Struct use={0,0.0};
	for(;i<6;++i){
	for(j=i+1;j<6;++j){
		students1=&example[i];
		students2=&example[j];
		if(students1->grades<students2->grades){
			use=*students1;
			*students1=*students2;
			*students2=use;
		}
	}
	}
	for(i=0;i<6;++i){
		students1=&example[i];
		printf("{id:%d,grades:%lf} ",students1->id,students1->grades);
	}
	return;}
int main(){
	Student* students1;
	Student* students2;
	struct_sort(students1,students2);
	return 0;
}
