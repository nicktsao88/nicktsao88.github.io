#include <stdio.h>
#include <stdlib.h>
//rand()被寫在這個stdlib.h函式庫裡，要用rand()一定要include
#include <time.h>//存取時間的函數

// 變數名稱可以亂取，我只是覺得有意義比較好理解

int main(){
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