//#include<iostream>
//#include<stack>
//using namespace std;
//int main(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	int res=a+b;
//	if(res<0){
//		printf("-");
//		res=-res;
//	}
//	else if(res==0){
//		printf("0\n");
//		return 0;
//	}
//	stack<int> s;
//	while(res){
//		s.push(res%10);
//		res/=10;
//	}
//	int i=s.size();
//	while(!s.empty()){
//		printf("%d",s.top());
//		s.pop();
//		i--;
//		if(i%3==0&&i!=0){
//			printf(",");
//		}
//	}
//	printf("\n");
//	return 0;
//}