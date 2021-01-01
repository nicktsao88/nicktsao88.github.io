#include <stdio.h>
#include <stdlib.h>
// rand()定義在stdlib.h，所以要用一定要include
#include <time.h>//存取時間的函式庫

// 變數名字可以亂取，但我覺得有意義會比較好理解

int main(){
	int arr[10];
	srand(time(NULL));
	for(int i=0;i<10;i++){
		arr[i]=rand()%100+1;
		printf("%d ",arr[i]);
	}
	printf("\n");
	int temp;
	for(int i=9;i>0;i--){
		for(int j=0;j<i;j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
}