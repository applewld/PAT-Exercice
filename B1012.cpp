//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main(){
//	int n,x,max=-1,a=0,b=0,c=0,d=0,e=0,f=0,q=0;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&x);
//		if(x%5==0&&x%2==0)a+=x;
//		if(x%5==1){
//			f++;
//			if(f%2==1)
//				b+=x;
//			else
//				b-=x;
//		}
//		if(x%5==2)c++;
//		if(x%5==3){
//			d+=x;
//			q++;
//		}
//		if(x%5==4){
//			if(max<x)max=x;
//		}
//	}
//	if(a==0) printf("N");
//	else printf("%d",a);
//	if(f==0) printf(" N");
//	else printf(" %d",b);
//	if(c==0) printf(" N");
//	else printf(" %d",c);
//	if(q==0) printf(" N");
//	else printf(" %.1f",d*1.0/q);
//	if(max==-1) printf(" N\n");
//	else printf(" %d\n",max);
//	return 0;
//}