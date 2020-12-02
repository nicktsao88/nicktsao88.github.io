#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解

int mulipe(int a,int b);
//宣告副程式mulipe

int main(){
	int a,b,ans;//宣告主程式裡的a,b,ans
	printf("a:");
	scanf("%d",&a);//輸入a
	printf("b:");
	scanf("%d",&b);//輸入b
	ans=mulipe(a,b);
	//把a,b丟進副程式裡,並把答案(ans)設為回傳的值
	printf("%d",ans);//列印出答案

}

int mulipe(int a,int b){
	return a*b;//回傳a*b的值
}