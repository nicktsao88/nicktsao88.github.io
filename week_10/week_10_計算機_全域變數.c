#include <stdio.h>
//變數名稱可以亂取，我只是覺得有意義會比較好理解


int a,b;//宣告全域變數a,b
char c;//宣告全域變數c
int cp();
/*宣告副程式cp(),由於要用全域變數做計算,
  所以不用在副程式裡宣告*/

int main(){
	int ans;
	printf("請輸入運算式:");
	scanf("%d%c%d",&a,&c,&b);
	ans=cp();
	printf("答案:%d",ans);
}

int cp(){
	if(c=='+'){//如果運算符號是'+'就做加法
		return a+b;
		//回傳a+b的值
	}else if(c=='-'){//如果運算符號是'-'就做減法
		return a-b;
		//回傳a-b的值
	}else if(c=='*'){//如果運算符號是'*'就做乘法
		return a*b;
		//回傳a*b的值
	}else if(c=='/'){//如果運算符號是'/'就做除法
		return a/b;
		//回傳a/b的值
	}
	return 0;

}