/*
思路：创建3个数组，分别存放3个数，在函数中比较输出结果
注意点：1.不要使用静态数组，否则输入数据时不好控制 
		2.题目要求2^-31 - 2^31 ,说明数据得占4个字节，但c中int只占2个，所以得改成long型 
*/ 

#include<stdio.h>
#include<stdlib.h>

void comp(long x,long y,long z,long i){
	if(x+y>z?1:0)
		printf("Case #%d: true\n",i+1);
	else printf("Case #%d: false\n",i+1);
} 

int main(){
	int n;
	scanf("%d",&n);
	int *x, *y, *z;
	x=(long *)malloc(sizeof(long)*n);
	y=(long *)malloc(sizeof(long)*n);
	z=(long *)malloc(sizeof(long)*n);
	
	for(long i=0;i<n;i++){
		scanf("%d%d%d",x+i,y+i,z+i);
	}
	
	for(long i=0;i<n;i++){
		comp(*(x+i),*(y+i),*(z+i),i);
	}
	
	return 0;
}
