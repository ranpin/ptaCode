/*
˼·��������������Ϊһ���ַ���char�������ַ�����ͬʱ����һ������a[10],
���ַ���ÿһλ��0-9(i)�Աȣ��ɹ�ƥ��һ�Σ���a[i]++;������ i:a[i]
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string n;
    int a[10]={};   //�������飬�������0-9ÿ�����ֵĸ���
    cin>>n;
    for(int i=0;i<n.length();i++)   //�����ַ���
        for(int j=0;j<10;j++){      //���ַ�����ÿһλ��0-9�Ƚ�
            if(n[i]-'0'==j)     //��λ���ڼ�������Ӧ��a[j]��һ
                a[j]++;         //������ɺ�a[j]�Ĵ�С��Ϊ�ַ����и����ĸ���
        }
    for(int j=0;j<10;j++){
        if(a[j]!=0)         //���������Ϊ0�����
            cout<<j<<':'<<a[j]<<endl;
    }
	system("pause");
    return 0;
}
