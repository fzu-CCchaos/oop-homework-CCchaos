#include<stdio.h>
#include<string.h>
int change(char shu[])
{
    if(strcmp(shu,"一")==0) return 1;
    else if(strcmp(shu,"二")==0) return 2;
    else if(strcmp(shu,"三")==0) return 3;
    else if(strcmp(shu,"四")==0) return 4;
    else if(strcmp(shu,"五")==0) return 5;
    else if(strcmp(shu,"六")==0) return 6;
    else if(strcmp(shu,"七")==0) return 7;
    else if(strcmp(shu,"八")==0) return 8;
    else if(strcmp(shu,"九")==0) return 9;
    else if(strcmp(shu,"零")==0) return 0;
    else if(strcmp(shu,"十")==0) return 10;
    else return -1;
}
int main()
{
	char a[11][10]={"零","一","二","三","四","五","六","七","八","九","十"}; 
	char b[8][10]={"皮","卡","丘","与","天","线","宝","宝"};
	int i,m;
	for(i=0;i<11;i++)
		{printf("输入 %s   ",a[i]);
		 m=change(a[i]);
		 if(m!=-1)
		 	printf("pass\n");
		 else
		 	printf("error\n");
		}
	printf("下面是错误测试\n");
	for(i=0;i<8;i++)
		{printf("输入 %s   ",b[i]);
		 m=change(b[i]);
		 if(m!=-1)
		 	printf("pass\n");
		 else
		 	printf("error\n");
		}
}
