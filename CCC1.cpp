#include<stdio.h>
#include<string.h>
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
    else return -1;
}
int main()
{
	char a[11][10]={"��","һ","��","��","��","��","��","��","��","��","ʮ"}; 
	char b[8][10]={"Ƥ","��","��","��","��","��","��","��"};
	int i,m;
	for(i=0;i<11;i++)
		{printf("���� %s   ",a[i]);
		 m=change(a[i]);
		 if(m!=-1)
		 	printf("pass\n");
		 else
		 	printf("error\n");
		}
	printf("�����Ǵ������\n");
	for(i=0;i<8;i++)
		{printf("���� %s   ",b[i]);
		 m=change(b[i]);
		 if(m!=-1)
		 	printf("pass\n");
		 else
		 	printf("error\n");
		}
}
