## 歡迎來到文正的超前部屬網站，這裡有這幾周的所有的程式碼和講解，希望大家用的滿意

副程式
---
副程式的意義，就是把程式模組化，我知道這樣講，絕對不會有人懂我在公三小??<br>
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
 副程式也有好幾個型態:int、float、void。<br>
 int跟float都能懂吧XD<br>
 至於void就是沒有回傳值的副程式<br>
 舉例:<br>
```c
#include <stdio.h>
        void sum(int a);
        int main()
        {
                int num=0;//初始化
                scanf("%d",&num);
                sum(num);
        }
        void sum(int a)
        {
                printf("%d",a*2);
        }
```
輸入<br>
   2<br>
輸出<br>
   4<br>
   
---
有沒有發現這個舉例跟上面舉例的差別呢??XD<br>
int裡的副程式裡有<font size="4" color="blue">return </font><br>
而void裡沒有喔XD，區別就是這樣，恩恩<br>
好了，副程式大概就這樣，下面是week_09的程式碼，加油練習ㄅ
 
---
## week_09<br>
   1.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_circle.c">circle</a><br>
   2.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_dimond.c">dimond</a><br>
   3.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_pow.c">pow</a><br>
   4.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_sort.c">sort</a><br>
   5.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_%E5%9B%9B%E9%82%8A%E5%BD%A2.c">四邊形</a><br>
   
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
但這裡要注意一點， <font size="4"><font color="red"> 區域變數不能跟全域變數同名 </font></font> 要牢記<br>
好了全域變數跟區域變數到這就結束啦，是不是很簡單呢?XD<br>
接下來就是第十周的所有程式碼啦，加油!!!!<br>

week_10<br>
---
1.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_10/week_10_%E4%B8%8A%E9%80%B1%E8%A4%87%E7%BF%92_%E5%B7%A6%E9%82%8A.c">上週複習_左邊</a><br>
2.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_10/week_10_%E8%A8%88%E7%AE%97%E6%A9%9F.c">計算機</a><br>
3.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_10/week_10_%E8%A8%88%E7%AE%97%E6%A9%9F_%E5%85%A8%E5%9F%9F%E8%AE%8A%E6%95%B8.c">計算機_全域變數</a><br>
4.<a href="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_10/week_10_%E9%80%B2%E9%9A%8E%E9%A1%8C.c">進階題</a><br>

---

隨機rand()與泡沫排序法
---

<h3>rand()</h3>

---

rand()被寫在stdlib.h裡面<br>
rand()就是亂數，會從電腦的資料庫選擇，不同的資料庫有不同數字<br>
舉例:
```c
#include <stdio.h>
#include <stdlib.h>
        int main()
        {
                printf("%d\n",rand());
                printf("%d\n",rand());
                printf("%d\n",rand());
                printf("%d\n",rand());
                printf("%d",rand());
        }
```
輸出:(有可能因為個人電腦資料庫不同而有不同)<br>
        41<br>
        18467<br>
        6334<br>
        26500<br>
        19169<br>
        
---

同學可以多執行範例幾次看看XD<br>
不知道有沒有發現呢??每次亂數都一樣ㄟ<br>
這是因為每次程式執行的時候，都是存取一樣的資料庫喔<br>
如果想要每次都是不一樣的變數，就必須<font size="4" color="blue"> #include time.h </font>喔

```c
#include <time.h>
```
那我們修改上面的範例:

```c
        #include <stdio.h>
        #include <stdlib.h>
        #include <time.h>
        int main()
        {
                srand(time(NULL));
                printf("%d\n",rand());
                printf("%d\n",rand());
                printf("%d\n",rand());
                printf("%d\n",rand());
                printf("%d",rand());
        }

```
有沒有發現每次都不一樣了呢XD<br>
srand(time(NULL))的意思是存取現在的時間點資料庫的編號<br>
如果還是不懂的話，恩~就背下來吧!!XD<br>

---

接下來就會發現，亂數的範圍不固定ㄟ，怎麼辦??<br>
沒關係，我們就用<font size="4"> 餘數(%) </font>去固定範圍就好<br>
因為假如我們 每個數字都%100 的話 範圍是不是就是0-99呢<br>
那如果我們想要1-100呢???<br>
就 %100+1就好啦<br>
舉例:

```c

        #include <stdio.h>
        #include <stdlib.h>
        #include <time.h>
        int main()
        {
                srand(time(NULL));
                printf("%d\n",rand()%100+1);
                printf("%d\n",rand()%100+1);
                printf("%d\n",rand()%100+1);
                printf("%d\n",rand()%100+1);
                printf("%d",rand()%100+1);
        }

```

有沒有發現範圍被限縮到1-100了呢?神奇ㄅ<br>
好了，亂數就到這了，接下來就是萬惡的bubble_sort(泡沫排序法)了<br>

bubble_sort(泡沫排序法)
---
泡沫排序法，就是一種排序的方法(幹話)<br>
泡沫排序法的規則就是，每次都跟下一個比較<br>
把最大或最小的數字丟到最後面，恩，就是這樣<br>
是不是有點抽象有看沒有懂呢XD<br>
沒關係，我們直接從程式碼理解吧XD<br>
```c
01#include <stdio.h>
02    int main()
03    {
04        int a[5]={5,4,3,2,1};//宣告a陣列裡面的各元素是5,4,3,2,1
05                
06            for(int i=0;i<5;i++)
07            {
08                printf("%d",a[i]);
09            }
10              printf("\n");
11            //列印出還沒排的陣列
12            for(int i=4;i>0;i--)
13            {
14                for(int j=0;j<i;j++)
15                {
16                    if(a[j]>a[j+1])
17                    {
18                        int temp=a[j+1];
19                        a[j+1]=a[j];
20                        a[j]=temp;
21                            
22                    }
23                }
24            }//泡沫排序法
25                
26            for(int i=0;i<5;i++)
27            {
28                printf("%d",a[i]);
29            }
30            //列印出排序完的的陣列
31    }
```
輸出:<br>
        5 4 3 2 1<br>
        1 2 3 4 5<br>
好，我知道看完上面的程式碼，你還是霧煞煞啦XD<br>
下面用圖解說明吧!!!<br>
初始化的陣列樣貌:<br>
<img src="https://nicktsao88.blogspot.com" width="150" height="75">

在第一層迴圈i=4<br>
接著進入第二層迴圈j=0<br>
<img src="https://github.com/nicktsao88/nicktsao88.github.io/blob/main/picture/SmartSelect_20201203-125601_Samsung%20Notes.jpg" width="150" height="75">

繼續跑第二層迴圈<br>
i一樣為4，但j要加一<br>
所以i:4，j:1<br>







        






        
     


















