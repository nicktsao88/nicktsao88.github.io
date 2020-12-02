#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解

int sort(int a/*num1*/,int b/*num2*/,int c/*num3*/);
//宣告副程式sort

int main(){
	int num1,num2,num3;//宣告數字1,2,3
	int max;//宣告主程式裡的最大值
	printf("num1:");
	scanf("%d",&num1);//輸入數字1
	printf("num2:");
	scanf("%d",&num2);//輸入數字2
	printf("num3:");
	scanf("%d",&num3);//輸入數字3

	max=sort(num1,num2,num3);//去找出最大值並放入max裡
	printf("max:%d",max);//列印出最大值
}

int sort(int a,int b,int c){
	int max=0;//宣告副程式裡的max
	if(a>max){
		max=a;//如果a大於max,最大值換成a
	}
	if(b>max){
		max=b;//如果b大於max,最大值換成b
	}
	if(c>max){
		max=c;//如果c大於max,最大值換成c
	}
	return max;//回傳最大值
}

//進階:使用陣列寫出