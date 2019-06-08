#include<iostream>
using namespace std;
int main(){
	int t,x,tmp[54]={0},init[54]={0},input[54]={0};
	for(int i=0;i<54;i++){
		init[i]=i;
		tmp[i]=i;
	}
	scanf("%d",&t);
	for(int i=0;i<54;i++){
		scanf("%d",&x);
		input[i]=x-1;
	}
	while(t--){
		for(int i=0;i<54;i++){
			tmp[input[i]]=init[i];
		}
		for(int i=0;i<54;i++){
			init[i]=tmp[i];
		}
	}
	switch(tmp[0]/13)
		{
			case 0:printf("S");printf("%d",tmp[0]%13+1);break;
				case 1:printf("H");printf("%d",tmp[0]%13+1);break;
					case 2:printf("C");printf("%d",tmp[0]%13+1);break;
						case 3:printf("D");printf("%d",tmp[0]%13+1);break;
							case 4:printf("J");printf("%d",tmp[0]%13+1);break;
		}
	for(int i=1;i<54;i++){
		switch(tmp[i]/13)
		{
		case 0:printf(" S");printf("%d",tmp[i]%13+1);break;
				case 1:printf(" H");printf("%d",tmp[i]%13+1);break;
					case 2:printf(" C");printf("%d",tmp[i]%13+1);break;
						case 3:printf(" D");printf("%d",tmp[i]%13+1);break;
							case 4:printf(" J");printf("%d",tmp[i]%13+1);break;
		}
	}
	printf("\n");
	return 0;
}