/*2019.12.8
原先思路：将n以内的所有素数保存到数组中，然后遍历数组，
将每一个数与后一个数比较，差值为2,计数加一
难点：数组无法动态确定，遍历数组时无法获取数组的有效长度，遂放弃 
*/ 

/*
新思路：设置了一个判定素数的函数，遍历n以内的所有数，若n及n+2均为素数，
则计数加一（区别：我的思路是先确认是素数，然后统一去查验是否满足差值为2的条件，
而这里是先满足差值为2的条件，然后判断是否为素数。避免了数组存储问题） 
*/ 

/* 原先思路代码 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int *a;
	scanf("%d",&n);
	int i,j;
	int k=0;
	for(i=2;i<=n;i++){	//循环1-n，判断每个数是否是素数 
	
		for(j=2;j<=i-1;j++){	//判断过程，若不是跳出，判断下一个数 
			if(i%j==0){
				break;
			}
		}
		if(j>=i){		//若循环结束，且不是中途退出，则i是素数 
			a=(int *)malloc(sizeof(int)*1);	//希望在每次需要时为a分配一个空间，然后赋值，但不行！ 
			a[k]=i;
			k++;
		}

	}
	
	int num=0;
	for(k=0;k<sizeof(a)/sizeof(a[0]);k++){
		if(a[k+1]-a[k]==2)
			num++;	
	}
	printf("%d",num);

	return 0;
}
*/

//新思路代码 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define bool int	//pta测试标准c中不包含bool类型，所以得自己定义宏 
#define false 0
#define true 1

bool isPrime(int n){	//判断n是否为素数 
	int i=0;
	if(n==1 || n==0)	
		return 0;
	if(n==2)
		return 1;
	int m;
	m=(int)sqrt((double)n);		//最好还是使用平方根，也可使用n-1，但有时会超时 
	for(i=2;i<=m;i++){	
			if(n%i==0)
				return 0;
	}
	return 1;
}
int main() {
	int n;
	scanf("%d",&n);
	int count = 0;
	for(int i=3;i<=n-2;i++){
		if(isPrime(i) && isPrime(i+2))
			count++;
	}
	printf("%d",count);
	return 0;
}
