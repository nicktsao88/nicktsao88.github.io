#include <stdio.h>

// 變數名字可以亂取，但我覺得有意義會比較好理解

int GCD(int num1,int num2);

int main(){
	int num1,num2,ans;
	scanf("%d%d",&num1,&num2);
	ans=GCD(num1,num2);
	printf("%d",ans);
}

int GCD(int num1,int num2){
	if(num2==0){
		return num1;
	}
	return GCD(num2,num1%num2);
}