//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int a[10002],dp[10002],s[10002];
//int main(){
//	int n;
//	scanf("%d",&n);
//	bool f=false;
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		if(a[i]>=0)f=true;
//	}
//	if(!f){
//		printf("0 %d %d\n",a[0],a[n-1]);
//		return 0;
//	}
//	dp[0]=a[0];
//	for(int i=1;i<n;i++){
//		if(dp[i-1]+a[i]>a[i]){
//			dp[i]=dp[i-1]+a[i];
//			s[i]=s[i-1];
//		}
//		else{
//			dp[i]=a[i];
//			s[i]=i;
//		}
//	}
//	int maxx=-1,u=0;
//	for(int i=0;i<n;i++){
//		if(dp[i]>maxx){
//			maxx=dp[i];
//			u=i;
//		}
//	}
//	printf("%d %d %d\n",dp[u],a[s[u]],a[u]);
//	return 0;
//}