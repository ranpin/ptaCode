/*
思路：将准考证号、试机座位号、考试座位号、要查询的试机座位号分别放入一个容器（数组）中，
分别输入后，然后将要查询的试机座位号与试机座位号匹配，成功则输出相应的准考证号、考试座位号
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;    

int main(){
    vector<string>s1(1000);  //准考证号
    vector<int>num_t(1000);   //试机座位号
    vector<int>num(1000);    //考试座位号
    vector<int>num_t1(1000); //要查询的试机座位号
    int m,n;
    cin>>n; //总座机号码数量
    for(int i=0;i<n;i++){
        cin>>s1[i]>>num_t[i]>>num[i];
    }
    cin>>m; //待查询的座机号码数量
    for(int i=0;i<m;i++){
        cin>>num_t1[i];
    }

    for(int i=0;i<m;i++){   //查询并输出准考准号和考试座位号
        for(int j=0;j<n;j++){
            if(num_t1[i]==num_t[j]){
                cout<<s1[j]<<' '<<num[j]<<endl;
            }
        }
    }

    system("pause");
    return 0;
}