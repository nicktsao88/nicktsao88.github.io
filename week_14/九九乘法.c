#include <stdio.h>

int main(){
	int nine_mulipe[9][9];
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			nine_mulipe[i][j]=(i+1)*(j+1);
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			printf("%d*%d=%2d ",i+1,j+1,nine_mulipe[i][j]);
		}
		printf("\n");
	}
}