//#include<cstdio>
//#include<string>
//#include<stack>
//#include<cstring>
//using namespace std;
//char w[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//char str[102];
//int main(){
//	int sum=0;
//	scanf("%s",str);
//	for(int i=0;i<strlen(str);i++){
//		sum+=str[i]-'0';
//	}
//	if(sum==0){
//		printf("zero\n");
//		return 0;
//	}
//	stack<int> s;
//	while(sum){
//		s.push(sum%10);
//		sum/=10;
//	}
//	if(!s.empty()){
//		printf("%s",w[s.top()]);
//		s.pop();
//	}
//	while(!s.empty()){
//	 printf(" %s",w[s.top()]);
//	 s.pop();
//	}
//	printf("\n");
//	return 0;
//}