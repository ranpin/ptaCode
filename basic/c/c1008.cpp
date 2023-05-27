/*
迭代法： 
简单低效思路：每次移动一个数，将最后一位数提出来存入一个临时变量，
然后将前面所有数依次往后移一位，将取出的最后一位的值赋给第一位，重复操作m次 
*/

/*
分治法 ： 
复杂高效思路：将每个待处理数组分成两部分，例如将1 2 3 4 5 6 ，移动2位，则分为
1 2 3 4和5 6 两部分利用双指针，一个从头遍历，一个从尾遍历。将前后两部分分别位置交换处理
分别得到4 3 2 1和 6 5，最后再将整个数组再次位置交换得 5 6 1 2 3 4
需要设计一个swap函数，一个双指针遍历处理函数aPart(apart1,begin,end)调用 swap()
*/ 


#include<stdio.h>
#include<stdlib.h>

int main() {
	int n,m;
	int *a;
	scanf("%d %d",&n,&m);
	a=(int *)malloc(sizeof(int *)*n);
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}

	for(int i=0;i<m;i++){
		int t=a[n-1];		//取出最后一位 
		for(int j=n-2;j>=0;j--){		//将前面所有数依次往后移一位 
			a[j+1]=a[j];
		}
		a[0]=t;		//将取出的最后一位的值赋给第一位 
	}
	
	for(int i=0;i<n;i++){
		if(i==n-1)
			printf("%d",*(a+i));
		else printf("%d ",*(a+i));
			
	}
	return 0; 
}
