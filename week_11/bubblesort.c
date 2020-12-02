#include <stdio.h>
#include <stdlib.h>
// rand()定義在stdlib.h，所以要用一定要include
#include <time.h>//存取時間的函式庫

// 變數名字可以亂取，但我覺得有意義會比較好理解

int main(){
	srand(time(NULL));
	//存取電腦裡的資料庫，標籤是時間
	int input[10];//宣告陣列input，儲存亂數
	for(int i=0;i<10;i++){
		input[i]=rand()%100+1;
		//每一格都用亂數儲存，亂數範圍是1-100
	}
	printf("排序前:");
	for(int i=0;i<10;i++){
		printf("%d ",input[i]);
		//列印排序前的陣列
	}
	printf("\n");//換行
	for(int i=9;i>0;i--){
		for(int j=0;j<i;j++){
			if(input[j]>input[j+1]){
				//如果(j項)>(j的下一項)就交換
				int temp=input[j+1];
				//設定占存器=j的下一項
				input[j+1]=input[j];
				// j的下一項=j
				input[j]=temp;
				/* 
				j=暫存器，即j=j的下一項
				但不能寫成:
				   input[j]=input[j+1];
		           input[j+1]=input[j];
		           因為input[j]已經被覆寫成下一項了
		           這樣第二行會變成  j的下一項=j的下一項(沒意義)
				*/

			}
		}
	}
	printf("排序後:");
	for(int i=0;i<10;i++){
		printf("%d ",input[i]);
		// 印出排序後陣列的值
	}
}