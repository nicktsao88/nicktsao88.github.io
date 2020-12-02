#include <stdio.h>
#include <stdlib.h>
//rand()被寫在這個stdlib.h函式庫裡，要用rand()一定要include
#include <time.h>//存取時間的函數

// 變數名稱可以亂取，我只是覺得有意義比較好理解

int main(){
	srand(time(NULL));//存取電腦裡的資料庫，標籤是時間
	for(int i=0;i<10;i++){
		printf("%d\n",rand()%100+1);
		//從1-100裡隨機，並列印出來
	}
}