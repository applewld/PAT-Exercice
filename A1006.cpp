//#include<cstdio>
//#include<string>
//#include<cstring>
//#include<iostream>
//using namespace std;
//int main(){
//	int t;
//	scanf("%d",&t);
//	char id[20],tmp_in[20],tmp_out[20],tmp[20],t_in[20]="24:00:00",t_out[20]="00:00:00";
//	char id_in[20],id_out[20];
//	while(t--){
//		scanf("%s%s%s",id,tmp_in,tmp_out);
//		if(strcmp(t_in,tmp_in)>0){
//			strcpy(t_in,tmp_in);
//			strcpy(id_in,id);
//		}
//		if(strcmp(t_out,tmp_out)<0){
//			strcpy(t_out,tmp_out);
//			strcpy(id_out,id);
//		}
//	}
//	printf("%s %s\n",id_in,id_out);
//}
////string name,name1,name2;
////int main(){
////	int t;
////	scanf("%d",&t);
////	int minx=100000000,maxx=-1;
////	while(t--){
////		int h1,m1,s1;
////		int h2,m2,s2;
////		cin>>name;
////		scanf("%d:%d:%d",&h1,&m1,&s1);
////		scanf("%d:%d:%d",&h2,&m2,&s2);
////		if(h1*3600+m1*60+s1<minx){
////			minx=h1*3600+m1*60+s1;
////			name1=name;
////		}
////		if(h2*3600+m2*60+s2>maxx){
////			maxx=h2*3600+m2*60+s2;
////			name2=name;
////		}
////	}
////	cout<<name1<<" "<<name2<<endl;
////	return 0;
////}