#include<stdio.h>
#include<string.h>
int change2(char shu[])
{
	char x[10],y[10],z[10];
 	int m=0; 
 	x[0]=shu[0];x[1]=shu[1];x[2]='\0';
 	if(strcmp(x,"ʮ")==0)
 		{y[0]=shu[2];y[1]=shu[3];y[2]='\0';
 		 if(strcmp(y,"һ")==0) m=11;
 		 if(strcmp(y,"��")==0) m=12;
 		 if(strcmp(y,"��")==0) m=13;
 		 if(strcmp(y,"��")==0) m=14;
 		 if(strcmp(y,"��")==0) m=15;
 		 if(strcmp(y,"��")==0) m=16;
 		 if(strcmp(y,"��")==0) m=17;
 		 if(strcmp(y,"��")==0) m=18;
 		 if(strcmp(y,"��")==0) m=19;
		}
	else
		{
 		 if(strcmp(x,"��")==0) m+=20;
 		 if(strcmp(x,"��")==0) m+=30;
 		 if(strcmp(x,"��")==0) m+=40;
 		 if(strcmp(x,"��")==0) m+=50;
 		 if(strcmp(x,"��")==0) m+=60;
 		 if(strcmp(x,"��")==0) m+=70;
 		 if(strcmp(x,"��")==0) m+=80;
 		 if(strcmp(x,"��")==0) m+=90;
 		 z[0]=shu[4];z[1]=shu[5];z[2]='\0';
 		 if(strcmp(z,"һ")==0) m+=1;
 		 else if(strcmp(z,"��")==0) m+=2;
 		 else if(strcmp(z,"��")==0) m+=3;
 		 else if(strcmp(z,"��")==0) m+=4;
 		 else if(strcmp(z,"��")==0) m+=5;
 		 else if(strcmp(z,"��")==0) m+=6;
 		 else if(strcmp(z,"��")==0) m+=7;
 		 else if(strcmp(z,"��")==0) m+=8;
 		 else if(strcmp(z,"��")==0) m+=9;
 		 else m+=0;
		}
	return m;
}
int change(char shu[])
{
    if(strcmp(shu,"һ")==0) return 1;
    else if(strcmp(shu,"��")==0) return 2;
    else if(strcmp(shu,"��")==0) return 3;
    else if(strcmp(shu,"��")==0) return 4;
    else if(strcmp(shu,"��")==0) return 5;
    else if(strcmp(shu,"��")==0) return 6;
    else if(strcmp(shu,"��")==0) return 7;
    else if(strcmp(shu,"��")==0) return 8;
    else if(strcmp(shu,"��")==0) return 9;
    else if(strcmp(shu,"��")==0) return 0;
    else if(strcmp(shu,"ʮ")==0) return 10;
    else return change2(shu);
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
int cheng(int num,int x)
{int ch;
 ch=num*x;
 return ch;
}
int chu(int num,int x)
{int chu;
 chu=num/x;
 return chu;
}
void print(int num)
{if(num<0)
	{printf("��");
	 num=-num; 
	}
 if(num/10==0) 
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
{char a[10],b[10],c[10],d[10],y[10],z[10],x[10],m[10];
 int num,i;
 scanf("%s %s %s %s",a,b,c,d);
 if(strcmp(a,"����")!=0||strcmp(c,"����")!=0)
    {printf("�������\n");
     return 0;
    }
 num=change(d);
 while(1)
    {scanf("%s",y);
     if(strcmp(y,"����")==0)
     	break;
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
     else if(strcmp(z,"����")==0||strcmp(z,"��")==0)
     	num=cheng(num,change(x));
     else if(strcmp(z,"����")==0)
     	num=chu(num,change(x));
     else 
        {printf("�������\n");
         return 0;
        }
    }
 scanf("%s",m);
 print(num);
 return 0;
} 
