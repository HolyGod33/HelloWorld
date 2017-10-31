#include<stdio.h>
struct h
{
	char a[20];
};
void main()
{
	printf("hello world");//1
	int i;
	i=0;
	char z;
	char h[20]="\nhello world";
	printf("%s",h);//2
	struct h m={"\nhello world"};
	printf("%s",m.a);//3
	if(1)
		printf("%s",h);//4
	for(i=0;i<1;i++)
		printf("%s",h);//5
	do{
		printf("%s",h);
	}while(0);//6
	while(i==0)
	{
		printf("%s",h);
	    i++;
	
	}//7
	puts(h);//8
	FILE *fp;
	fp=fopen("mytext.txt","w");
	fprintf(fp,"%s",h);
	while ((z=getc(fp))!=EOF)
		scanf("%s",z);//10
	char *f;
	f=&h;
	printf("%s",f);	//这段代码有一些小错误，还请各位指正，来自一位C语言小萌新
 } 
