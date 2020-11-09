#include<stdio.h>
int main(){
	int l,m,i,k,j;
//	k=0;
	int a[10000];
//	int b[200];
	scanf("%d %d",&l,&m);
	for(i=0;i<=l;i++){
		a[i]=1;
	}
	for(i=1;i<=m;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		for(k=x;k<=y;k++){
			a[k]=0;
		}
	} 

//	for(k=0;k<=2*(m-1);k+=2){
//		for(i=b[k];i<=b[k+1];i++){
//				a[i]=0;
//			}
//		}
	j=0;
	for(i=0;i<=l;i++){
		if(a[i]==1){
			j++;
		}
	}
	printf("%d",j);
	return 0;
} 
