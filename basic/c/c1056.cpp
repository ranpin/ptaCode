/*
思路：定义一个容器存放数字，在容器中将所有数字利用循环进行组合，同时统计相加，最后输出统计结果
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int sum;
    vector<int>num(10); //存放所有数字
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){   //遍历组合所有数字
        for(int j=0;j<n;j++){
            if(num[j]!=num[i]){ //不包含自己
                sum+=num[i]*10+num[j];
            }
        }
    }
    cout<<sum;
     system("pause");
     return 0;
}