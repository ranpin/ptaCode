/*
ԭ��˼·�������������飬��һ�����һԪ���η��̣��ڶ������չ��ɣ���ż�����Ľ��
���ѣ�����ĳ���û��Ԥ�ȹ��ƣ�Ҳ�޷���ʹ��ʱʵʱ�����ڴ棬���±��������ʱ���޷����ñ߽����� 
*/ 

/*
��˼·��������ע�ͣ���ǰ��̫�������������� 
*/ 

/*
#include<stdio.h>
#define max 100;
int main(){
	int a[max],b[max];
	for(int i=0;i<max;i=i+2){
		for(int j=0;j<max;j++){
			
			b[j]=a[i]*a[i+1]
			b[++j]=a[i+1]-1;
		}
	}
	for(int j=0;j<max;j++){
		if(j)
		prinf("%d ") 
	}
}
*/


#include <stdio.h>
#include <string.h>

int main()
{
	int n, e, flag = 0;
	while (scanf("%d%d", &n, &e) != EOF)	//������ctrl+z���س�ʱ����ѭ�� 
	{
		if( n*e )	//�������0 
		{
			if(flag)	//�������һ�����ݺ�����ո� 
				printf(" ");
			else
				flag = 1;	
			printf("%d %d", n*e, e-1);	
		}
	}
	if(!flag) printf("0 0");	//�������flagΪ0������n*eΪ0��������ѭ����ifδִ�У����0 0 
	return 0;

}

