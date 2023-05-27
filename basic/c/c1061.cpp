/*
思路：分别定义一个容器存放分数和标答，然后一边输入答案，一边判断正确性，统计分数，
判断完一行后，输出该名学生的分数
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;    //学生人数及题目数量
    vector<int>score(m);   //每题分数
    vector<int>ans(m);  //标答
    // vector<int>sum(n);  //存放结果
    cin>>n>>m;
    for(int i=0;i<m;i++){   //输入每题分数
        cin>>score[i];
    }
    for(int i=0;i<m;i++){   //输入所有标答
        cin>>ans[i];
    }
    for(int i=0;i<n;i++){   //输入所有学生的答案
        int total=0;
        for(int j=0;j<m;j++){
            int ans1;
            cin>>ans1;
            if(ans1==ans[j]) //将学生答案与标答对比，判断
                // sum[i]+=score[j];    //这样会报错？？？为啥
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