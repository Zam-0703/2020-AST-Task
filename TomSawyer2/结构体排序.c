#include <stdio.h>
typedef struct Struct{
    int id;
    double grades;
} Student;
void struct_sort(Student* data,int* n);
int main() {
    //printf("Hello, World!\n");
    int n;//n个学生
    scanf("%d",&n);
    Student data[1000];
    for(int i=0;i<n;i++){
        scanf("%d %lf",&data[i].id,&data[i].grades);
    }
    struct_sort(data,&n);
    for(int cnt=0;cnt<n;cnt++){
        printf("%d %f\n",data[cnt].id,data[cnt].grades);
    }
    return 0;
}
void struct_sort(Student* data,int* n){
    int tempid;
    double tempgrades;
    for(int k=0;k<*n;k++){
        for(int j=0;j<*n-k+1;j++){
            if(data[j].grades<data[j+1].grades){
                tempgrades=data[j].grades;
                data[j].grades=data[j+1].grades;
                data[j+1].grades=tempgrades;

                tempid=data[j].id;
                data[j].id=data[j+1].id;
                data[j+1].id=tempid;
            }
        }
    }
}
