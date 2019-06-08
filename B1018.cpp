#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int t,c=0,d=0;
	char a,b;
	int counta[3]={0};//JCB
	int countb[3]={0};
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		getchar();
		a=getchar();
		getchar();
		b=getchar();
		if(a=='J'&&b=='B'){
			counta[0]++;
			c++;
		}
		else if(a=='C'&&b=='J'){
			counta[1]++;
			c++;
		}
		else if(a=='B'&&b=='C'){
			counta[2]++;
			c++;
		}
		else if(b=='J'&&a=='B'){
			countb[0]++;
			d++;
		}
		else if(b=='C'&&a=='J'){
			countb[1]++;
			d++;
		}
		else if(b=='B'&&a=='C'){
			countb[2]++;
			d++;
		}
	}
	printf("%d %d %d\n",c,t-c-d,d);
	printf("%d %d %d\n",d,t-c-d,c);
	if(counta[0]==counta[1]&&counta[1]==counta[2])printf("B");
	else if(counta[0]==counta[1]&&counta[2]<counta[0])printf("C");
	else if(counta[0]==counta[2]&&counta[1]<counta[0])printf("B");
	else if(counta[1]==counta[2]&&counta[0]<counta[1])printf("B");
	else if(counta[1]<counta[0]&&counta[2]<counta[0])printf("J");
	else if(counta[1]<counta[2]&&counta[0]<counta[2])printf("B");
	else if(counta[2]<counta[1]&&counta[0]<counta[1])printf("C");

	if(countb[0]==countb[1]&&countb[1]==countb[2])printf(" B\n");
	else if(countb[0]==countb[1]&&countb[2]<countb[0])printf(" C\n");
	else if(countb[0]==countb[2]&&countb[1]<countb[0])printf(" B\n");
	else if(countb[1]==countb[2]&&countb[0]<countb[1])printf(" B\n");
	else if(countb[1]<countb[0]&&countb[2]<countb[0])printf(" J\n");
	else if(countb[1]<countb[2]&&countb[0]<countb[2])printf(" B\n");
	else if(countb[2]<countb[1]&&countb[0]<countb[1])printf(" C\n");
	return 0;
}