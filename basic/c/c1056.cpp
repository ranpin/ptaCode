/*
˼·������һ������������֣��������н�������������ѭ��������ϣ�ͬʱͳ����ӣ�������ͳ�ƽ��
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int sum;
    vector<int>num(10); //�����������
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){   //���������������
        for(int j=0;j<n;j++){
            if(num[j]!=num[i]){ //�������Լ�
                sum+=num[i]*10+num[j];
            }
        }
    }
    cout<<sum;
     system("pause");
     return 0;
}