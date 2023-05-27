/*
思路：见代码注释 
*/

#include<stdio.h>
#include<math.h>

int isPrime(int n){	//判断是否为素数 
	if(n==1 || n<=0)
		return 0;
	if(n==2){
		return 2;
	} 
		
	int i;
	int m=(int)sqrt(n);
	for(i=2;i<=m;i++){
		if(n%i==0)
			return 0;	//原先这里使用的是continue,然后最后加上else return 0;但是不行
						//一直运行不出来结果，也是因为这个原因 
	}
	if(i>=n){
		return n;
	}
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int num=0;	//用来判断素数在m,n之间 
	for(int i=2;num<=n;i++){	
	 
		if(isPrime(i)){		//如果i为素数 
			num++;			//计数加1 
			if(num>=m && num<=n){	//并且该素数在输入的范围之内 
			
				if((num-m+1)%10==0)		//按要求的格式输出 
					printf("%d\n",i);
				else if(num!=n)
					printf("%d ",i);
					else printf("%d",i);
			}
			
		}	
		//如果i不为素数，无所谓，啥都不做，继续判断下一个i 
		//直到num大于n，即输出的个数满足要求 
	}
	system("pause");
	return 0;
}
