//#include<vector>
//#include<cstdio>
//#include<queue>
//using namespace std;
//vector<int> v[100];
//int book[100];
//int level[100];
//int maxdepth=-1;
//void dfs(int node,int depth){
//	if(v[node].size()==0){
//		book[depth]++;
//		maxdepth=max(maxdepth,depth);
//		return;
//	}
//	for(int i=0;i<v[node].size();i++){
//		dfs(v[node].at(i),depth+1);
//	}
//}
//void bfs(){
//	queue<int> q;
//	q.push(1);
//	level[1]=0;
//	while(!q.empty()){
//		int index = q.front();
//		q.pop();
//		if(v[index].size()==0){
//			book[level[index]]++;
//			maxdepth=max(maxdepth,level[index]);
//		}
//		for(int i=0;i<v[index].size();i++){
//			q.push(v[index].at(i));
//			level[v[index].at(i)]=level[index]+1;
//		}
//	}
//}
//int main(){
//	int n,m,d;
//	int node,k,x;
//	scanf("%d%d",&n,&m);
//	for(int i=0;i<m;i++){
//		scanf("%d",&node);
//		scanf("%d",&k);
//		for(int j=0;j<k;j++){
//			scanf("%d",&x);
//			v[node].push_back(x);
//		}
//	}
//	//dfs(1,0);
//	bfs();
//	printf("%d",book[0]);
//	for(int i=1;i<=maxdepth;i++){
//		printf(" %d",book[i]);
//	}
//	printf("\n");
//	return 0;
//}