#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解

void circle(float a/*r(半徑)*/);
//宣告副程式circle

int main(){
	float r;//宣告半徑
	printf("圓半徑:");
	scanf("%f",&r);//輸入半徑
	circle(r);//進入副程式circle
}
void circle(float a/*r(半徑)*/){
	printf("圓周長:%.2f\n",a*2*3.14/*圓周長公式*/);
	printf("圓面積%.2f",a*a*3.14/*圓周長面積*/);

}