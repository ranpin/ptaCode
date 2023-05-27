/*
思路：创建一个函数用以统计数中出现给定数字的次数，被统计数用字符串表示，
给定数字每出现一次，位数变大一次，即sum=sum*10+da,计算出da,返回结果 
*/

#include<stdio.h>
#include<iostream>		//c++标准输入输出流 
#include<string>		/*devc++中不支持c++11标准，使用该头文件需在
						工具-编译选项-编译时加入以下命令（-std=c++11）*/ 
#define ll long long
using namespace std;	//并且还要加上这一行命名空间 

ll caulat(string a,int da){
	ll sum=0;
	for(int i=0;i<a.length();i++){
		if(a[i]-'0'==da)	//a[i]-'0'表示该数字字符所对应的数字 
			sum=sum*10+da;
	}
	return sum;
}

int main(){
	string a,b;	//原始数字(字符串)
	int da,db;	//需要被查找提取的数字 
	ll pa,pb;	//每个字符串的计算结果，注意使用长长整形，以防溢出 
	//scanf("%s %d %s %d",&a,&da,&b,&db);	//使用此种输入方式运行会崩溃 
	cin >> a >> da >> b >> db;	//使用这个就没问题 
	pa=caulat(a,da);
	pb=caulat(b,db);	
	printf("%ld",pa+pb);
	return 0;
} 
