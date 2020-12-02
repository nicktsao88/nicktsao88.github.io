#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解

void draw(char a/*picture*/,int b/*lengh*/,int c/*weight*/);
//宣告副程式draw

int main(){
	int lengh,weight;//宣告變數長寬
	char picture;//宣告字元圖形
	printf("圖形:");
	scanf("%c",&picture);//輸入圖案
	printf("長:");
	scanf("%d",&lengh);//輸入長
	printf("寬:");
	scanf("%d",&weight);//輸入寬

	draw(picture,lengh,weight);//畫出圖形;
}

void draw(char a/*picture*/,int b/*lengh*/,int c/*weight*/){
	for(int i=0;i<b;i++){
		for(int j=0;j<c;j++){
			printf("%c",a);//印出圖案
		}
		printf("\n");//換行
	}
}