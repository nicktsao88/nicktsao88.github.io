## 歡迎來到文正的超前部屬網站，這裡有這幾周的所有的程式碼和講解，希望大家用的滿意
---
副程式的意義，就是把程式模組化，我知道這樣講，絕對不會有人懂我在公三小</br>
不囉嗦，上範例:

    1 #include <stdio.h>
    2    int sum(int a);
    3    int main()
    4    {
    5       int num=0;//初始化
    6       int ans=0;
    7       scanf("%d",&num);//輸入num的值
    8       ans=sum(num);//等同於num=num*2;
    9       printf("%d",ans);
    10   }
    11   int sum(int a/*num*/)
    12   {
    13      return a*2;//把輸進來的數字乘二之後回傳
    14   }
---
輸入
   2
輸出
   4
---
         


## week_09</br>
   1.[week_09_circle](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_circle.c)</br>
   2.[week_09_dimond](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_dimond.c)</br>
   3.[week_09_pow](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_pow.c)</br>
   4.[week_09_sort](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_sort.c)</br>
   5.[week_09_四邊形](https://github.com/nicktsao88/nicktsao88.github.io/blob/main/week_09/week_09_%E5%9B%9B%E9%82%8A%E5%BD%A2.c)</br>
### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/nicktsao88/nicktsao88.github.io/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.
