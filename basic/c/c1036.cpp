/*
˼·������߳�����ĸ����Ϊ�βΣ������������������������зֱ������һ�С��м��С����һ��
*/

#include<iostream>
#include<string>
using namespace std;

void func1(int num,string s){
    int line;
    for(int i=0;i<num;i++){ //�����һ�в�����
        cout<<s;
        if(i==num-1)
            cout<<endl;
    }

    if(num%2!=0)    //�������������������
        line=num-3;     //���м�һ����num-3�У������հ���
    else line=num-4;

    for(int i=0;i<line;i++){    //����м���
        if(i%2==0){     //�ַ���
            for(int j=0;j<num;j++){
                if(j==0)
                    cout<<s;
                else if(j==num-1){
                    cout<<s;
                    }
                    else cout<<' ';

            }
        }
        else cout<<endl;    //����հ���
    }


    for(int i=0;i<num;i++){ //������һ�в�����
        cout<<s;
    }
}

int main(){
    string s1;  //������ĸ
    int clum;   //������
    cin>>clum>>s1;
    func1(clum,s1);
    system("pause");
    return 0;
}