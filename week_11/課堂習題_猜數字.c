#include <stdio.h>
#include <stdlib.h>
//rand()被寫在這個stdlib.h函式庫裡，要用rand()一定要include
#include <time.h>//存取時間的函數

// 變數名稱可以亂取，我只是覺得有意義比較好理解

int main(){
	srand(time(NULL));//存取電腦裡的資料庫，標籤是時間
	int ans=rand()%100+1;//隨機取1-100其中一個數字作為答案
	int guess=0;//宣告你要猜的數字
	int bottom=1,top=100;//宣告下限與上限的變數
	while(guess!=ans)/*如果猜不對，就一直跑迴圈*/
	{
		printf("輸入你要猜的數字:");
		scanf("%d",&guess);//輸入你要猜的數字
		if(guess>=bottom&&guess<=top)//條件設為猜的數字在範圍內才比較
		{
			if(guess>ans){
				//如果猜的數字>答案，把上限設為你猜的數字
				top=guess;
			}
			if(guess<ans){
				//如果猜的數字<答案，把下限設為你猜的數字
				bottom=guess;
			}
			if(guess==ans){
				//如果猜的數字==答案，列印出棒棒
				printf("猜中了，棒棒\n");
				break;//猜中了，跳出程式
			}
			printf("大於%d小於%d\n",bottom,top);
		}else//否則列印輸出錯誤
		{
			printf("請輸入正確的範圍，範圍是大於%d小於%d\n",bottom,top);
		}

			
	}
}