/* 
思路：将输入的身份证存入容器1（字符串型）中，在此之前指定容器大小，然后遍历容器中数据，
计算每一组，将所得值与该容器作为实参传入函数isRight中，如果返回结果是true,则存入容器2（string型）中，
遍历容器2，如果长度等于容器1，输出all passed,否则遍历输出容器内数据
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool comp(vector<string>&v3,int i){
    string s1[10]={
        '1','0',x,'9','8','7','6','5','4','3','2'
    }
    float num1=
    for(int j=0;j<v3[i].length();j++){
        sum+=(v3[i][j]-'0')*
        v3[i][j]
    }
}

int main(){
	vector<string>v1;
    vector<string>v2;
    int num;
    int count;
    for(int i=0;i<num;i++){
        cin>>v1[i];
    }
    for(int i=0;i<num;i++){
        if(comp(v1[i]))
            cout++;
    }
    if(count==num)
        cout<<"all passed"<<endl;
    else{
        for(int i=0;i<num;i++){
            cout<<v1[i])<<endl;
        }
    }

    return 0;
} 
