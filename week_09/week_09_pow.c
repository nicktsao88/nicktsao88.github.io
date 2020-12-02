#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解

float pow(float a/*base*/,float b/*index*/);
//宣告副程式pow

int main(){
	float base,index;//宣告底數與指數
	float ans;//宣告主程式裡的ans
	printf("Base:");
	scanf("%f",&base);//輸入底數
	printf("Index:");
	scanf("%f",&index);//輸入指數
	ans=pow(base,index);//進入副程式算出答案，並存到ans中
	printf("answer:%f",ans);//印出答案
}

float pow(float a,float b){
	float ans=1;//宣告區域變數的ans
	if(b>0){//判斷b(指數)是否為正，是正的就照乘，是負的要倒數
		for(int i=1;i<=b;i++){
			ans=ans*a;//正常乘法
		}
	}else{
		b=-b;//先把b(指數)弄為正數，下面迴圈才能動
		for(int i=1;i<=b;i++){
			ans=ans*a;//先乘完
			ans=1/ans;//由於b(指數)是負的，所以倒數
		}
	}
	if(b==0){
		ans=1;
	}
	return ans;
}