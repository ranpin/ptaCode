/*
˼·������4�����������飩���ֱ��ż׺� �׻� �Һ� �һ������׺�+�Һ� �Ľ���ֱ��� �׻� �һ� �Ƚϣ�
���׶��Ҳ��ԣ����Һ�һ�Σ���֮ͬ��
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count_a=0;    //�׺Ⱦƴ���
    int count_b=0;
    int n;
    vector<int>a_speak(100);    //����׺�
    vector<int>a_draw(100);    //����׻�
    vector<int>b_speak(100);    //�����Һ�
    vector<int>b_draw(100);    //�����һ�

    cin>>n;
    for(int i=0;i<n;i++){   //�����Ÿ���������Ӧ������
        cin>>a_speak[i]>>a_draw[i]>>b_speak[i]>>b_draw[i];
    }

    for(int i=0;i<n;i++){
        if(a_draw[i]==a_speak[i]+b_speak[i] && b_draw[i]!=a_speak[i]+b_speak[i] )    //�׶��Ҳ��ԣ����Һ�һ��
            count_b++;
        else if(b_draw[i]==a_speak[i]+b_speak[i] && a_draw[i]!=a_speak[i]+b_speak[i] ) //�ҶԼײ��ԣ���׺�һ��
            count_a++;    
    }

    cout<<count_a<<' '<<count_b;

    system("pause");
    return 0;
}