/*2019.12.8
˼·������ȡ�ཫ���������ֵ�ÿһλ������ȡ������Ȼ���ж�ÿһλ�����֣� 
������ѭ��������λ��Ӧ������Ҫ����ĸ����ע���Ӧ��ϵ��˳�򡣣� 
*/
#include<stdio.h>

int main(){
	int m=1,n;
	scanf("%d",&n);
	int a[3];
	for(int i=0;i<3;i++){	//��ȡÿһλ�����浽a[]������ 
		a[i]=n/m%10;
		m=m*10;
	}
	for(int i=2;i>=0;i--){	//����a[]��ÿһλ���� 
		if(i==0)		//ƥ�䲢ѭ�����Ҫ����ĸ 
		for(int j=1;j<=a[i];j++){
			printf("%d",j);
		}
		else if(i==1)
			for(int j=0;j<a[i];j++){
				printf("S");
			}
		else if(i==2)
			for(int j=0;j<a[i];j++){
				printf("B");
			}
	}
	return 0;
} 
