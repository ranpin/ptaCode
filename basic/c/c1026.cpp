/*
��������������ĵ�ʱ�Ӵ����������/100����С�����һλ����������
Ȼ����ת��Ϊ��׼ʱ���ʽ��ע������ĸ�ʽ���ƣ�����cout.width()��cout.fill()

ע������������жϺ���������ʱ�䣨�������ж����������д��ʱ��ֱ�Ӹ�����
������������������ͷ�ļ�#include<time.h>����������ǰ��ȡһ��clock()��ȡc1,
�������к����һ��clock()��ȡc2
*/

#include<iostream>
// #include<time.h>
// #include<string>
using namespace std;

void turn(int second){    //��ת����ʱ�����׼��ʽ
    int hh,mm,ss;

    hh = second/3600;   //���Сʱ
    mm = (second-3600*hh)/60;   //��÷���
    ss = second-3600*hh-60*mm;     //�����

    cout.width(2);  //���ռ�����ַ���ע��ú���ֻ�Ժ�һ������Ч
    cout.fill('0'); //�����λ����0��䣬�ú����Ժ������ж�����Ч
    cout<<hh<<':';

    cout.width(2);
    cout<<mm<<':';

    cout.width(2);
    cout<<ss<<endl;
}
//��ʵ�и��򵥵������ʽ printf("%02d:%02d:%02d",hh,mm,ss);
int main(){
    int c1,c2;
    int t;
    int second;
    cin>>c1>>c2;
    t=(c2-c1)/10%10;    //��ȡС�����һλ
    if(t>=5)    //��������
        second=(c2-c1)/100+1;
    else
        second=(c2-c1)/100;

    //�������뻹�и��򵥵�д�� t=(int)((c1-c2)*1.0/100+0.5)
    turn(second);

    system("pause");
    return 0;
}