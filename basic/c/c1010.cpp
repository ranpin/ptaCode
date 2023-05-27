/*
原先思路：创建两个数组，第一个存放一元二次方程，第二个依照规律，存放计算出的结果
困难：数组的长度没法预先估计，也无法在使用时实时分配内存，导致遍历输出的时候无法设置边界条件 
*/ 

/*
新思路：见以下注释，以前不太常见（！！！） 
*/ 

/*
#include<stdio.h>
#define max 100;
int main(){
	int a[max],b[max];
	for(int i=0;i<max;i=i+2){
		for(int j=0;j<max;j++){
			
			b[j]=a[i]*a[i+1]
			b[++j]=a[i+1]-1;
		}
	}
	for(int j=0;j<max;j++){
		if(j)
		prinf("%d ") 
	}
}
*/


#include <stdio.h>
#include <string.h>

int main()
{
	int n, e, flag = 0;
	while (scanf("%d%d", &n, &e) != EOF)	//当输入ctrl+z并回车时跳出循环 
	{
		if( n*e )	//若该项非0 
		{
			if(flag)	//用于输出一组数据后输出空格 
				printf(" ");
			else
				flag = 1;	
			printf("%d %d", n*e, e-1);	
		}
	}
	if(!flag) printf("0 0");	//如果最终flag为0，表明n*e为0，即上述循环中if未执行，输出0 0 
	return 0;

}

