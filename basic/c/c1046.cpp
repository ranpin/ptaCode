/*
思路：定义4个容器（数组），分别存放甲喊 甲划 乙喊 乙划，将甲喊+乙喊 的结果分别与 甲划 乙划 比较，
若甲对乙不对，则乙喝一次，反之同理
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count_a=0;    //甲喝酒次数
    int count_b=0;
    int n;
    vector<int>a_speak(100);    //定义甲喊
    vector<int>a_draw(100);    //定义甲划
    vector<int>b_speak(100);    //定义乙喊
    vector<int>b_draw(100);    //定义乙划

    cin>>n;
    for(int i=0;i<n;i++){   //输入存放各变量到相应容器中
        cin>>a_speak[i]>>a_draw[i]>>b_speak[i]>>b_draw[i];
    }

    for(int i=0;i<n;i++){
        if(a_draw[i]==a_speak[i]+b_speak[i] && b_draw[i]!=a_speak[i]+b_speak[i] )    //甲对乙不对，则乙喝一次
            count_b++;
        else if(b_draw[i]==a_speak[i]+b_speak[i] && a_draw[i]!=a_speak[i]+b_speak[i] ) //乙对甲不对，则甲喝一次
            count_a++;    
    }

    cout<<count_a<<' '<<count_b;

    system("pause");
    return 0;
}