/*
˼·��������ע�� 
*/

#include<stdio.h>
#include<math.h>

int isPrime(int n){	//�ж��Ƿ�Ϊ���� 
	if(n==1 || n<=0)
		return 0;
	if(n==2){
		return 2;
	} 
		
	int i;
	int m=(int)sqrt(n);
	for(i=2;i<=m;i++){
		if(n%i==0)
			return 0;	//ԭ������ʹ�õ���continue,Ȼ��������else return 0;���ǲ���
						//һֱ���в����������Ҳ����Ϊ���ԭ�� 
	}
	if(i>=n){
		return n;
	}
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int num=0;	//�����ж�������m,n֮�� 
	for(int i=2;num<=n;i++){	
	 
		if(isPrime(i)){		//���iΪ���� 
			num++;			//������1 
			if(num>=m && num<=n){	//���Ҹ�����������ķ�Χ֮�� 
			
				if((num-m+1)%10==0)		//��Ҫ��ĸ�ʽ��� 
					printf("%d\n",i);
				else if(num!=n)
					printf("%d ",i);
					else printf("%d",i);
			}
			
		}	
		//���i��Ϊ����������ν��ɶ�������������ж���һ��i 
		//ֱ��num����n��������ĸ�������Ҫ�� 
	}
	system("pause");
	return 0;
}
