#include <stdio.h>

int  main(){
	int a[5]={1,4,2,6,8};
	int i,j;
	int minid=0;
	int temp=0;
	for(i=0;i<5;i++){
		minid=i;
		for(j=i;j<5;j++){
			if(a[j]<a[minid]){
				minid=j;
			}
		}
		temp=a[i];
		a[i]=a[minid];
		a[minid]=temp;

	}
	for(i=0;i<5;i++){
		printf("%d", a[i]);
	}
}