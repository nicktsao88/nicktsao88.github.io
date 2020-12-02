#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解

void add(int a,int b);//宣告副程式add(加法)
void subtract(int a,int b);//宣告副程式subtract(減法)
void mulipe(int a,int b);//宣告副程式mulipe(乘法)
void division(int a,int b);//宣告副程式division(除法)

int main(){
	int num1,num2;

	printf("num1:");
	scanf("%d",&num1);//輸入數字1
	printf("num2:");
	scanf("%d",&num2);//輸入數字2

	add(num1,num2);//呼叫副程式add()
	subtract(num1,num2);//呼叫副程式subtract()
	mulipe(num1,num2);//呼叫副程式mulipe()
	division(num1,num2);//呼叫副程式division()

}

void add(int a,int b){
	printf("num1+num2=%d\n",a+b);
	//印出加法的結果
}
void subtract(int a,int b){
	printf("num1-num2=%d\n",a-b);
	//印出減法的結果
}
void mulipe(int a,int b){
	printf("num1*num2=%d\n",a*b);
	//印出乘法的結果
}
void division(int a,int b){
	printf("num1/num2=%d\n",a/b);
	//印出除法的結果
}