/*
思路：将输入数定义为一个字符串char，遍历字符串，同时定义一个数组a[10],
将字符串每一位与0-9(i)对比，成功匹对一次，则a[i]++;最后输出 i:a[i]
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string n;
    int a[10]={};   //定义数组，用来存放0-9每种数字的个数
    cin>>n;
    for(int i=0;i<n.length();i++)   //遍历字符串
        for(int j=0;j<10;j++){      //将字符串的每一位和0-9比较
            if(n[i]-'0'==j)     //该位等于几，则相应的a[j]加一
                a[j]++;         //遍历完成后，a[j]的大小即为字符串中该数的个数
        }
    for(int j=0;j<10;j++){
        if(a[j]!=0)         //如果个数不为0，输出
            cout<<j<<':'<<a[j]<<endl;
    }
	system("pause");
    return 0;
}
