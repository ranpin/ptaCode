/*
˼·���ֱ���һ��������ŷ����ͱ��Ȼ��һ������𰸣�һ���ж���ȷ�ԣ�ͳ�Ʒ�����
�ж���һ�к��������ѧ���ķ���
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;    //ѧ����������Ŀ����
    vector<int>score(m);   //ÿ�����
    vector<int>ans(m);  //���
    // vector<int>sum(n);  //��Ž��
    cin>>n>>m;
    for(int i=0;i<m;i++){   //����ÿ�����
        cin>>score[i];
    }
    for(int i=0;i<m;i++){   //�������б��
        cin>>ans[i];
    }
    for(int i=0;i<n;i++){   //��������ѧ���Ĵ�
        int total=0;
        for(int j=0;j<m;j++){
            int ans1;
            cin>>ans1;
            if(ans1==ans[j]) //��ѧ��������Աȣ��ж�
                // sum[i]+=score[j];    //�����ᱨ������Ϊɶ
                total+=score[j];
        }
        cout<<total<<endl;
    }

    // for(int i=0;i<n;i++){   
    //     cout<<sum[i]<<endl;
    // }

    system("pause");
    return 0;
}