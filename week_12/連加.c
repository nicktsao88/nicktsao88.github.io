#include <stdio.h>

// 變數名字可以亂取，但我覺得有意義會比較好理解

int add_plus(int n);


int main(){
	int num,ans;
	scanf("%d",&num);
	ans=add_plus(num);
	/*如果沒打*/
	printf("ans:%d",ans);
}

int add_plus(int n){
	if(n==1){
		return 1;
	}
	return n+add_plus(n-1);
	
}