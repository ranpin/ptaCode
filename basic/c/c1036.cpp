/*
思路：输入边长，字母，作为形参，传到函数中输出。输出函数中分别输出第一行、中间行、最后一行
*/

#include<iostream>
#include<string>
using namespace std;

void func1(int num,string s){
    int line;
    for(int i=0;i<num;i++){ //输出第一行并换行
        cout<<s;
        if(i==num-1)
            cout<<endl;
    }

    if(num%2!=0)    //如果传过来的数是奇数
        line=num-3;     //这中间一共是num-3行，包括空白行
    else line=num-4;

    for(int i=0;i<line;i++){    //输出中间行
        if(i%2==0){     //字符行
            for(int j=0;j<num;j++){
                if(j==0)
                    cout<<s;
                else if(j==num-1){
                    cout<<s;
                    }
                    else cout<<' ';

            }
        }
        else cout<<endl;    //输出空白行
    }


    for(int i=0;i<num;i++){ //输出最后一行并换行
        cout<<s;
    }
}

int main(){
    string s1;  //定义字母
    int clum;   //定义列
    cin>>clum>>s1;
    func1(clum,s1);
    system("pause");
    return 0;
}