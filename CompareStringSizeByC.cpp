//�ó�������������ĿҪ����ĿҪ���ǣ���������ĸ��С�����˳����ַ������򣩣������Ƕ�ÿ���ַ���
//�ڲ���������
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
	printf("�����������ַ�����\n\n");
	printf("�ַ���1��\n");
	//gets(ch1);����gets(),��Ϊgets�ܹ����ܿո��Ʊ��Tab�ͻس��ȣ�����󲻺�����
	scanf("%s",ch1);
	printf("�ַ���1��С���������\n");
	sort(ch1);
	printf("\n");
	printf("%s",ch1);
	system("pause");//Ϊ�˱������н��������ˣ�ǰ����Ҫ��#include<windows.h>ͷ�ļ�
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
	printf("�����������ַ�����\n\n");
	printf("�ַ���1��\n");
	scanf("%s",ch1);
	printf("�ַ���2��\n");
	scanf("%s",ch2);
	printf("�ַ���3��\n");
	scanf("%s",ch3);
	printf("\n");
	sortPrintf(ch1,ch2,ch3);
	system("pause");
}
void sortPrintf(char Ch1[],char Ch2[],char Ch3[])
{
	char connect[30];
	//�����������Сʧ���������Ƚ�Ӧ����1-2  1-3  2-3,�ҵ�һ��д����1-2 2-3 1-3�ͳ���
	if(Ch1[0]>Ch2[0]){strcpy(connect,Ch1);strcpy(Ch1,Ch2);strcpy(Ch2,connect);}
	if(Ch1[0]>Ch3[0]){strcpy(connect,Ch1);strcpy(Ch1,Ch3);strcpy(Ch3,connect);}
	if(Ch2[0]>Ch3[0]){strcpy(connect,Ch2);strcpy(Ch2,Ch3);strcpy(Ch3,connect);}
	printf("%s %s %s",Ch1,Ch2,Ch3);
	printf("\n");
}