/*
˼·����׼��֤�š��Ի���λ�š�������λ�š�Ҫ��ѯ���Ի���λ�ŷֱ����һ�����������飩�У�
�ֱ������Ȼ��Ҫ��ѯ���Ի���λ�����Ի���λ��ƥ�䣬�ɹ��������Ӧ��׼��֤�š�������λ��
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;    

int main(){
    vector<string>s1(1000);  //׼��֤��
    vector<int>num_t(1000);   //�Ի���λ��
    vector<int>num(1000);    //������λ��
    vector<int>num_t1(1000); //Ҫ��ѯ���Ի���λ��
    int m,n;
    cin>>n; //��������������
    for(int i=0;i<n;i++){
        cin>>s1[i]>>num_t[i]>>num[i];
    }
    cin>>m; //����ѯ��������������
    for(int i=0;i<m;i++){
        cin>>num_t1[i];
    }

    for(int i=0;i<m;i++){   //��ѯ�����׼��׼�źͿ�����λ��
        for(int j=0;j<n;j++){
            if(num_t1[i]==num_t[j]){
                cout<<s1[j]<<' '<<num[j]<<endl;
            }
        }
    }

    system("pause");
    return 0;
}