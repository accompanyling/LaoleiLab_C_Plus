//该程序错误理解了题目要求（题目要求是：按照首字母由小到大的顺序对字符串排序），而我是对每个字符串
//内部进行排序
/*
#include<stdio.h>
#include<string.h>
#include<windows.h>
void compareCharSize(char &a,char &b);
void swap(char &a,char &b);
void sort(char *a);
int main()
{
	char ch1[10];
	char ch2[10];
	char ch3[10];
	printf("请输入三个字符串：\n\n");
	printf("字符串1：\n");
	//gets(ch1);不用gets(),因为gets能够接受空格、制表符Tab和回车等，输入后不好排序
	scanf("%s",ch1);
	printf("字符串1从小到大排序后：\n");
	sort(ch1);
	printf("\n");
	printf("%s",ch1);
	system("pause");//为了避免运行结束后闪退，前提是要加#include<windows.h>头文件
	return 0;
}
void sort(char *a)
{
	int i;
	int j;
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<strlen(a)-1-i;j++)
		{
			compareCharSize(a[j],a[j+1]);
		}
	}
}
void compareCharSize(char &a,char &b)
{
	if(a>b)
		swap(a,b);
}
void swap(char &a,char &b)
{
	char c;
	c=a;
	a=b;
	b=c;
}
*/

#include<stdio.h>
#include<string.h>
#include<windows.h>
void sortPrintf(char Ch1[],char Ch2[],char Ch3[]);
int main()
{
	char ch1[10];
	char ch2[10];
	char ch3[10];
	printf("请输入三个字符串：\n\n");
	printf("字符串1：\n");
	scanf("%s",ch1);
	printf("字符串2：\n");
	scanf("%s",ch2);
	printf("字符串3：\n");
	scanf("%s",ch3);
	printf("\n");
	sortPrintf(ch1,ch2,ch3);
	system("pause");
}
void sortPrintf(char Ch1[],char Ch2[],char Ch3[])
{
	char connect[30];
	//我在这里出现小失误，三个数比较应该是1-2  1-3  2-3,我第一次写的是1-2 2-3 1-3就出错
	if(Ch1[0]>Ch2[0]){strcpy(connect,Ch1);strcpy(Ch1,Ch2);strcpy(Ch2,connect);}
	if(Ch1[0]>Ch3[0]){strcpy(connect,Ch1);strcpy(Ch1,Ch3);strcpy(Ch3,connect);}
	if(Ch2[0]>Ch3[0]){strcpy(connect,Ch2);strcpy(Ch2,Ch3);strcpy(Ch3,connect);}
	printf("%s %s %s",Ch1,Ch2,Ch3);
	printf("\n");
}