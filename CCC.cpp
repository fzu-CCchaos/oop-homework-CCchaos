#include<stdio.h>
#include<string.h>
int change(char shu[])
{
    if(strcmp(shu,"一")==0) return 1;
    if(strcmp(shu,"二")==0) return 2;
    if(strcmp(shu,"三")==0) return 3;
    if(strcmp(shu,"四")==0) return 4;
    if(strcmp(shu,"五")==0) return 5;
    if(strcmp(shu,"六")==0) return 6;
    if(strcmp(shu,"七")==0) return 7;
    if(strcmp(shu,"八")==0) return 8;
    if(strcmp(shu,"九")==0) return 9;
    if(strcmp(shu,"零")==0) return 0;
    if(strcmp(shu,"十")==0) return 10;
}
void change1(int num)
{
    if(num==0) printf("零");
    if(num==1) printf("一");
    if(num==2) printf("二");
    if(num==3) printf("三");
    if(num==4) printf("四");
    if(num==5) printf("五");
    if(num==6) printf("六");
    if(num==7) printf("七");
    if(num==8) printf("八");
    if(num==9) printf("九");
}
void print(int num)
{if(num/10==0) 
    change1(num);
 else if(num==10)
 	printf("十");
 else if(num%10==0&&num!=10&&num/100==0) 
    {change1(num/10);
     printf("十"); 
    }
 else if(num%10!=0&&num/100==0)
    {change1(num/10);
     printf("十");
     change1(num%10);
    }
 else if(num%100==0)
 	{change1(num/100);
 	 printf("百");
	}
 else if(num/100!=0&&num/10%10==0)
 	{change1(num/100);
 	 printf("百");
 	 printf("零");
 	 change1(num%10); 
	}
 else
 	{change1(num/100);
 	 printf("百");
 	 change1(num/10%10);
 	 printf("十");
 	 change1(num%10);
	}
}
int main()
{printf("请输入文件名\n"); 
 char s[10];
 scanf("%s",s);
 freopen(s,"r",stdin);
 char a[10],b[10],c[10],d[10],y[10],z[10],x[10],m[10];
 int num,i;
 scanf("%s %s %s %s",a,b,c,d);
 if(strcmp(a,"整数")!=0||strcmp(c,"等于")!=0)
    {printf("输入错误\n");
     return 0;
    }
 num=change(d);
 while(1)
    {scanf("%s",y);
     if(strcmp(y,"看看")==0) break;
     if(strcmp(y,b)!=0)
        {printf("输入错误\n");
         return 0;
        }
     scanf("%s",z);
     scanf("%s",x);
     if(strcmp(z,"增加")==0)
        num=num+change(x);
     else if(strcmp(z,"减少")==0)
        num=num-change(x);
     else 
        {printf("输入错误\n");
         return 0;
        }
    }
 scanf("%s",m);
 print(num);
 return 0;
} 
