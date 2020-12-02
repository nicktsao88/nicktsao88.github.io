#include <stdio.h>
#include <stdlib.h>
// rand()定義在stdlib.h，所以要用一定要include
#include <time.h>//存取時間的函式庫

// 變數名字可以亂取，但我覺得有意義會比較好理解

int main(){
	srand(time(NULL));
	//存取電腦裡的資料庫，標籤是時間
	int player1[2];
	//設定player1的陣列用來儲存骰子的點數
	int player2[2];
	//設定player2的陣列用來儲存骰子的點數
	int ans1=0,ans2=0;
	//ans1儲存player1的點數總和
	//ans2儲存player2的點數總和
	for(int i=0;i<2;i++){
		player1[i]=rand()%6+1;
		//從1-6中隨機選一個，並存到player1的陣列中
		player2[i]=rand()%6+1;
		//從1-6中隨機選一個，並存到player2的陣列中
		ans1=ans1+player1[i];
		//把每顆骰子的點數存到ans1中，也就是說ans1是player1骰子點數的總合
		ans2=ans2+player2[i];
		//把每顆骰子的點數存到ans2中，也就是說ans2是player2骰子點數的總合
	}

	printf("player1: ");
	for(int i=0;i<2;i++){
		printf("%d ",player1[i]);
		// 把player1的所有點數列印出來
	}
	printf("\n");

	printf("player2: ");
	for(int i=0;i<2;i++){
		printf("%d ",player2[i]);
		// 把player2的所有點數列印出來		
	}
	printf("\n");

	if(ans1>ans2){
		/* 如果player1的骰子總和>player2的骰子總和就印出Player1 Win*/
		printf("Player1 Win\n");

	}else if(ans1<ans2){
		/* 如果player2的骰子總和>player1的骰子總和就印出Player2 Win*/ 
		printf("Player2 Win\n");
	}else if(ans1==ans2){
		/* 如果player1的骰子總和==player2的骰子總和就印出NO One!!!*/
		printf("No One!!!\n");
	}



}






