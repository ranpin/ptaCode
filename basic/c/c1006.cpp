/*2019.12.8
思路：利用取余将所输入数字的每一位单独提取出来，然后判断每一位的数字， 
并利用循环输出与该位对应个数的要求字母。（注意对应关系与顺序。） 
*/
#include<stdio.h>

int main(){
	int m=1,n;
	scanf("%d",&n);
	int a[3];
	for(int i=0;i<3;i++){	//提取每一位并保存到a[]数组中 
		a[i]=n/m%10;
		m=m*10;
	}
	for(int i=2;i>=0;i--){	//遍历a[]中每一位数字 
		if(i==0)		//匹配并循环输出要求字母 
		for(int j=1;j<=a[i];j++){
			printf("%d",j);
		}
		else if(i==1)
			for(int j=0;j<a[i];j++){
				printf("S");
			}
		else if(i==2)
			for(int j=0;j<a[i];j++){
				printf("B");
			}
	}
	return 0;
} 
