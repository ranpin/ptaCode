/*
˼·������һ����������ͳ�����г��ָ������ֵĴ�������ͳ�������ַ�����ʾ��
��������ÿ����һ�Σ�λ�����һ�Σ���sum=sum*10+da,�����da,���ؽ�� 
*/

#include<stdio.h>
#include<iostream>		//c++��׼��������� 
#include<string>		/*devc++�в�֧��c++11��׼��ʹ�ø�ͷ�ļ�����
						����-����ѡ��-����ʱ�����������-std=c++11��*/ 
#define ll long long
using namespace std;	//���һ�Ҫ������һ�������ռ� 

ll caulat(string a,int da){
	ll sum=0;
	for(int i=0;i<a.length();i++){
		if(a[i]-'0'==da)	//a[i]-'0'��ʾ�������ַ�����Ӧ������ 
			sum=sum*10+da;
	}
	return sum;
}

int main(){
	string a,b;	//ԭʼ����(�ַ���)
	int da,db;	//��Ҫ��������ȡ������ 
	ll pa,pb;	//ÿ���ַ����ļ�������ע��ʹ�ó������Σ��Է���� 
	//scanf("%s %d %s %d",&a,&da,&b,&db);	//ʹ�ô������뷽ʽ���л���� 
	cin >> a >> da >> b >> db;	//ʹ�������û���� 
	pa=caulat(a,da);
	pb=caulat(b,db);	
	printf("%ld",pa+pb);
	return 0;
} 
