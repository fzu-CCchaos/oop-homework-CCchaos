#include<stdio.h>
#include<string.h>
int change(char shu[])
{
    if(strcmp(shu,"һ")==0) return 1;
    if(strcmp(shu,"��")==0) return 2;
    if(strcmp(shu,"��")==0) return 3;
    if(strcmp(shu,"��")==0) return 4;
    if(strcmp(shu,"��")==0) return 5;
    if(strcmp(shu,"��")==0) return 6;
    if(strcmp(shu,"��")==0) return 7;
    if(strcmp(shu,"��")==0) return 8;
    if(strcmp(shu,"��")==0) return 9;
    if(strcmp(shu,"��")==0) return 0;
    if(strcmp(shu,"ʮ")==0) return 10;
}
void change1(int num)
{
    if(num==0) printf("��");
    if(num==1) printf("һ");
    if(num==2) printf("��");
    if(num==3) printf("��");
    if(num==4) printf("��");
    if(num==5) printf("��");
    if(num==6) printf("��");
    if(num==7) printf("��");
    if(num==8) printf("��");
    if(num==9) printf("��");
}
void print(int num)
{if(num/10==0) 
    change1(num);
 else if(num==10)
 	printf("ʮ");
 else if(num%10==0&&num!=10&&num/100==0) 
    {change1(num/10);
     printf("ʮ"); 
    }
 else if(num%10!=0&&num/100==0)
    {change1(num/10);
     printf("ʮ");
     change1(num%10);
    }
 else if(num%100==0)
 	{change1(num/100);
 	 printf("��");
	}
 else if(num/100!=0&&num/10%10==0)
 	{change1(num/100);
 	 printf("��");
 	 printf("��");
 	 change1(num%10); 
	}
 else
 	{change1(num/100);
 	 printf("��");
 	 change1(num/10%10);
 	 printf("ʮ");
 	 change1(num%10);
	}
}
int main()
{printf("�������ļ���\n"); 
 char s[10];
 scanf("%s",s);
 freopen(s,"r",stdin);
 char a[10],b[10],c[10],d[10],y[10],z[10],x[10],m[10];
 int num,i;
 scanf("%s %s %s %s",a,b,c,d);
 if(strcmp(a,"����")!=0||strcmp(c,"����")!=0)
    {printf("�������\n");
     return 0;
    }
 num=change(d);
 while(1)
    {scanf("%s",y);
     if(strcmp(y,"����")==0) break;
     if(strcmp(y,b)!=0)
        {printf("�������\n");
         return 0;
        }
     scanf("%s",z);
     scanf("%s",x);
     if(strcmp(z,"����")==0)
        num=num+change(x);
     else if(strcmp(z,"����")==0)
        num=num-change(x);
     else 
        {printf("�������\n");
         return 0;
        }
    }
 scanf("%s",m);
 print(num);
 return 0;
} 
