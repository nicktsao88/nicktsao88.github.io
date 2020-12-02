#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解

void draw();
//宣告副程式draw

int main(){
	draw();//使用副程式draw,畫出菱形
}

void draw(){
	//恩,畫菱形,沒難度ㄅ
	for(int i=1;i<=5;i++){
		for(int j=i;j<5;j++){
			printf(" ");
		}
		for(int j=1;j<i*2;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=4;i>=1;i--){
		for(int j=i;j<5;j++){
			printf(" ");
		}
		for(int j=1;j<i*2;j++){
			printf("*");
		}
		printf("\n");
	}
}

//進階:自定義菱形高度