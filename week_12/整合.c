#include <stdio.h>

// 變數名字可以亂取，但我覺得有意義會比較好理解

int add_plus(int n);
int GCD(int num1,int num2);
double pow(double base,int index);
int mulipe_plus(int n);

int main(){
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	printf("The number %d add_plus is %d\n",num1,add_plus(num1));
	printf("The number %d add_plus is %d\n",num2,add_plus(num2));
	printf("The number %d mulipe_plus is %d\n",num1,mulipe_plus(num1));
	printf("The number %d mulipe_plus is %d\n",num2,mulipe_plus(num2));
	printf("The base is %d index is %d answer is %lf\n",num1,num2,pow(num1,num2));
	printf("The base is %d index is %d answer is %lf\n",num2,num1,pow(num2,num1));
	printf("The GCD is %d\n",GCD(num1,num2));

}

int add_plus(int n){
	if(n==1){
		return 1;
	}
	return n+add_plus(n-1);
	
}

int GCD(int num1,int num2){
	if(num2==0){
		return num1;
	}
	return GCD(num2,num1%num2);
}

double pow(double base,int index){
	if(index<0){
		index=-index;
		base=1/base;
	}
	if(index==0){
		return 1;
	}
	return base*pow(base,index-1);
}

int mulipe_plus(int n){
	if(n==1){
		return 1;
	}
	return n*mulipe_plus(n-1);
	
}