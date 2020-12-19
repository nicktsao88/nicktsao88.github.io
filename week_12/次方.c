#include <stdio.h>

// 變數名字可以亂取，但我覺得有意義會比較好理解

double pow(double base,int index);

int main(){
	int index;
	double ans=0,base;
	scanf("%lf%d",&base,&index);
	ans=pow(base,index);
	printf("%.0lf",ans);
}

double pow(double base,int index){
	if(index<0){
		index=-index;
		base=1/base;
	}
	if(index==0){
		return 1;
	}
	return base*pow(base,index-1);
}