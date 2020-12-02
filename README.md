## 歡迎來到文正的超前部屬網站，這裡有這幾周的所有的程式碼和講解，希望大家用的滿意
副程式
---
副程式的意義，就是把程式模組化，我知道這樣講，絕對不會有人懂我在公三小<br>
不囉嗦，上範例:
```c
#include <stdio.h>
        int sum(int a);
        int main()
        {
                int num=0;//初始化
                int ans=0;
                scanf("%d",&num);//輸入num的值
                ans=sum(num);//呼叫副程式sum()，等同於num=num*2;
                printf("%d",ans);
        }
        int sum(int a/*num*/)
        {
                return a*2;//把輸進來的數字乘二之後回傳
        }
 ```
輸入<br>
   2<br>
輸出<br>
   4<br>
   
---

 不知道上面的範例，有沒有讓大家懂副程式在幹嘛勒XD<br>
 簡單的說，副程式就好像一個工具箱，等你主程式呼叫他的時候就存取裡面的工具<br>
 而要回傳的值，就好像你拿出來的工具一樣<br>
 好了，副程式大概就這樣，下面是week_09的程式碼，加油練習ㄅ
 
---
## week_09<br>
   1.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_circle.c">week_09_circle</a><br>
   2.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_dimond.c">week_09_dimond</a><br>
   3.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_pow.c">week_09_pow</a><br>
   4.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_sort.c">week_09_sort</a><br>
   5.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_%E5%9B%9B%E9%82%8A%E5%BD%A2.c">week_09_四邊形</a><br>
   
---

全域、區域變數
---
全域變數:就是寫在主程式外的變數，例如:
```c
#include <stdio.h>
        int global_num;
        int main()
        {
                scanf("%d",&golbal);
                printf("%d",golbal);
        }
```
輸入:<br>
    2<br>
輸出:<br>
    2
    
---
可以看到上面的範例，我主程式裡並沒有設立變數，<br>
但卻可以輸入與輸出變數，這就是全域變數的意義啦<br>
可以讓整隻程式都使用到那個變數，但有一個要注意的地方<br>
因為很容易忘記自己的變數意義，所以題目沒有要求還是用區域變數就好XD<br>

---
區域變數
---
區域變數就很熟悉了八，區域變數就是我們平常在主程式跟副程式裡設立的變數啦<br>
例如:
```c
#include <stdio.h>
        int add(int a,int b);
        int mulipe(int a,int b);
        int main()
        {
        
                int a=0,b=0;//初始化區域變數a,b
                
                printf("a:");
                scanf("%d",&a);//輸入a
                printf("b:");
                scanf("%d",&b);//輸入b
                printf("add:%d",add(a,b)/*呼叫add()*/);
                printf("mulipe:%d",mulipe(a,b)/*呼叫mulipe()*/);
                
        }
        int add(int a,int b)
        {
                return a+b;//回傳a+b
        }
        int mulipe(int a,int b)
        {
                return a*b;//回傳a*b
        }
```
輸入:<br>
        a:5<br>
        b:4<br>
輸出:<br>
        add:9<br>
        mulipe:20<br>
        
---
有沒有發現呢?<br>
在主程式，副程式add()跟副程式mulipe()裡都有變數叫做a,b，酷ㄅ<br>
這就是區域變數的意義啦，區域變數只會活在你設立的大括弧裡面喔XD<br>
所以我們最常用的才會是區域變數，因為不用擔心會衝突到<br>
但這裡要注意一點， <font size="24"> 區域變數不能跟全域變數同名 </font> 要牢記

---


        
     


















