//#include<cstring>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int maxv=501;
//const int INF=100000000;
//int n,m,st,ed,num[maxv],weight[maxv],d[maxv],w[maxv],g[maxv][maxv];
//bool vis[maxv]={false};
//void dijkstra(int s){
//	memset(num,0,sizeof(num));
//	num[s]=1;
//	fill(d,d+maxv,INF);
//	d[s]=0;
//	memset(w,0,sizeof(w));
//	w[s]=weight[s];
//	for(int i=0;i<n;i++){
//		int u=-1,MIN=INF;
//		for(int j=0;j<n;j++){
//			if(!vis[j]&&d[j]<MIN){
//				MIN=d[j];
//				u=j;
//			}
//		}
//		if(u==-1)
//			return;
//		vis[u]=true;
//		for(int j=0;j<n;j++){
//			if(!vis[j]&&g[u][j]!=INF){
//				if(g[u][j]+d[u]<d[j]){
//					d[j]=g[u][j]+d[u];
//					w[j]=w[u]+weight[j];
//					num[j]=num[u];
//				}
//				else if(g[u][j]+d[u]==d[j]){
//					if(w[j]<w[u]+weight[j]){
//						w[j]=w[u]+weight[j];
//					}
//					num[j]=num[u]+num[j];
//				}
//			}
//		}
//	}
//}
//int main(){
//	scanf("%d%d%d%d",&n,&m,&st,&ed);
//	for(int i=0;i<n;i++){
//		scanf("%d",&weight[i]);
//	}
//	fill(g[0],g[0]+maxv*maxv,INF);
//	for(int i=0;i<m;i++){
//		int u,v;
//		scanf("%d%d",&u,&v);
//		scanf("%d",&g[u][v]);
//		g[v][u]=g[u][v];
//	}
//	dijkstra(st);
//	printf("%d %d\n",num[ed],w[ed]);
//	return 0;
//}