/*
依照题意求出消耗的时钟打点数，将其/100，看小数点后一位，四舍五入
然后将秒转化为标准时间格式，注意输出的格式控制，利用cout.width()和cout.fill()

注：该题可用来判断函数的运行时间（例如做判定机），题中打点时间直接给出，
正常情况下需调用引用头文件#include<time.h>，函数运行前获取一次clock()获取c1,
函数运行后调用一次clock()获取c2
*/

#include<iostream>
// #include<time.h>
// #include<string>
using namespace std;

void turn(int second){    //秒转换成时分秒标准格式
    int hh,mm,ss;

    hh = second/3600;   //获得小时
    mm = (second-3600*hh)/60;   //获得分钟
    ss = second-3600*hh-60*mm;     //获得秒

    cout.width(2);  //输出占两个字符，注意该函数只对后一对象有效
    cout.fill('0'); //不足的位置用0填充，该函数对后面所有对象有效
    cout<<hh<<':';

    cout.width(2);
    cout<<mm<<':';

    cout.width(2);
    cout<<ss<<endl;
}
//其实有更简单的输出方式 printf("%02d:%02d:%02d",hh,mm,ss);
int main(){
    int c1,c2;
    int t;
    int second;
    cin>>c1>>c2;
    t=(c2-c1)/10%10;    //获取小数点后一位
    if(t>=5)    //四舍五入
        second=(c2-c1)/100+1;
    else
        second=(c2-c1)/100;

    //四舍五入还有更简单的写法 t=(int)((c1-c2)*1.0/100+0.5)
    turn(second);

    system("pause");
    return 0;
}