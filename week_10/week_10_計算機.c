#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解

int cp(int a/*num1*/,char c/*c*/,int b/*num2*/);
//宣告副程式cp
int main(){
	int num1,num2,ans;//宣告數字1(num1),數字2(num2)和答案(ans)
	char c;//宣告字元c
	printf("請輸入運算式:");
	scanf("%d%c%d",&num1,&c,&num2);//輸入數字1,運算符號,數字2
	ans=cp(num1,c,num2);
	//把數字1,運算符號和數字2帶入副程式計算,並把答案存入ans
	printf("答案:%d",ans);//列印出答案

	return 0;
}

int cp(int a,char c,int b){
	if(c=='+'){//如果運算符號是'+'就做加法
		return a+b;
		//回傳a(num1)+b(num2)的值
	}else if(c=='-'){//如果運算符號是'-'就做減法
		return a-b;
		//回傳a(num1)-b(num2)的值
	}else if(c=='*'){//如果運算符號是'*'就做乘法
		return a*b;
		//回傳a(num1)*b(num2)的值
	}else if(c=='/'){//如果運算符號是'/'就做除法
		return a/b;
		//回傳a(num1)/b(num2)的值
	}
	return 0;

}
