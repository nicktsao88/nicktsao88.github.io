## 歡迎來到文正的超前部屬網站，這裡有這幾周的所有的程式碼和講解，希望大家用的滿意
副程式
---
副程式的意義，就是把程式模組化，我知道這樣講，絕對不會有人懂我在公三小</br>
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
---
輸入</br>
   2</br>
輸出</br>
   4</br>
   
---

 不知道上面的範例，有沒有讓大家懂副程式在幹嘛勒XD</br>
 簡單的說，副程式就好像一個工具箱，等你主程式呼叫他的時候就存取裡面的工具</br>
 而要回傳的值，就好像你拿出來的工具一樣</br>
 好了，副程式大概就這樣，下面是week_09的程式碼，加油練習ㄅ
 
---
## week_09</br>
   1.[week_09_circle](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_circle.c)</br>
   2.[week_09_dimond](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_dimond.c)</br>
   3.[week_09_pow](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_pow.c)</br>
   4.[week_09_sort](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_sort.c)</br>
   5.[week_09_四邊形](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_%E5%9B%9B%E9%82%8A%E5%BD%A2.c)</br>
   
---

