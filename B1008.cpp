//#include<iostream>
//using namespace std;
//int main(){
//	int n,m,w[102];
//	scanf("%d %d",&n,&m);
//	for(int i=0;i<n;i++){
//		scanf("%d",&w[i]);
//	}
//	if(n==1){
//		printf("%d\n",w[0]);
//		return 0;
//	}
//	int f=1;
//	for(int i=n-m%n;i<n;i++){
//		if(f==1)
//			printf("%d",w[i]);
//		else
//			printf(" %d",w[i]);
//		f=0;
//	}
//	for(int i=0;i<n-m%n;i++){
//		if(f==1)
//			printf("%d",w[i]);
//		else
//			printf(" %d",w[i]);
//		f=0;
//	}
//	printf("\n");
//	return 0;
//}