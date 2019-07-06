//#include<iostream>
//using namespace std;
//const int maxn=1002;
//
//int main(){
//	double a[maxn]={};
//	int n,e;
//	double c;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d %lf",&e,&c);
//		a[e]=c;
//	}
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d %lf",&e,&c);
//		a[e]+=c;
//	}
//	int num=0;
//	for(int i=0;i<maxn;i++){
//		if(a[i]!=0.0)
//			num++;
//	}
//	printf("%d",num);
//	for(int i=maxn-1;i>=0;i--){
//		if(a[i]!=0.0)
//			printf(" %d %.1f",i,a[i]);
//	}
//	printf("\n");
//	return 0;
//}