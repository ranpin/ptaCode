/*2019.12.8
ԭ��˼·����n���ڵ������������浽�����У�Ȼ��������飬
��ÿһ�������һ�����Ƚϣ���ֵΪ2,������һ
�ѵ㣺�����޷���̬ȷ������������ʱ�޷���ȡ�������Ч���ȣ������ 
*/ 

/*
��˼·��������һ���ж������ĺ���������n���ڵ�����������n��n+2��Ϊ������
�������һ�������ҵ�˼·����ȷ����������Ȼ��ͳһȥ�����Ƿ������ֵΪ2��������
���������������ֵΪ2��������Ȼ���ж��Ƿ�Ϊ����������������洢���⣩ 
*/ 

/* ԭ��˼·���� 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int *a;
	scanf("%d",&n);
	int i,j;
	int k=0;
	for(i=2;i<=n;i++){	//ѭ��1-n���ж�ÿ�����Ƿ������� 
	
		for(j=2;j<=i-1;j++){	//�жϹ��̣��������������ж���һ���� 
			if(i%j==0){
				break;
			}
		}
		if(j>=i){		//��ѭ���������Ҳ�����;�˳�����i������ 
			a=(int *)malloc(sizeof(int)*1);	//ϣ����ÿ����ҪʱΪa����һ���ռ䣬Ȼ��ֵ�������У� 
			a[k]=i;
			k++;
		}

	}
	
	int num=0;
	for(k=0;k<sizeof(a)/sizeof(a[0]);k++){
		if(a[k+1]-a[k]==2)
			num++;	
	}
	printf("%d",num);

	return 0;
}
*/

//��˼·���� 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define bool int	//pta���Ա�׼c�в�����bool���ͣ����Ե��Լ������ 
#define false 0
#define true 1

bool isPrime(int n){	//�ж�n�Ƿ�Ϊ���� 
	int i=0;
	if(n==1 || n==0)	
		return 0;
	if(n==2)
		return 1;
	int m;
	m=(int)sqrt((double)n);		//��û���ʹ��ƽ������Ҳ��ʹ��n-1������ʱ�ᳬʱ 
	for(i=2;i<=m;i++){	
			if(n%i==0)
				return 0;
	}
	return 1;
}
int main() {
	int n;
	scanf("%d",&n);
	int count = 0;
	for(int i=3;i<=n-2;i++){
		if(isPrime(i) && isPrime(i+2))
			count++;
	}
	printf("%d",count);
	return 0;
}
