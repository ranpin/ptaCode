/*
˼·������3�����飬�ֱ���3�������ں����бȽ�������
ע��㣺1.��Ҫʹ�þ�̬���飬������������ʱ���ÿ��� 
		2.��ĿҪ��2^-31 - 2^31 ,˵�����ݵ�ռ4���ֽڣ���c��intֻռ2�������Եøĳ�long�� 
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
