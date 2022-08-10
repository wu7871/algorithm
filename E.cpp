#include<iostream>
using namespace std;

int main() {
	int n,m=0;
	while(scanf("%d%d", &n, &m) != EOF){
		int l=0,r=n-1,d=0,h=m-1;
		while(r-l>=2&&h-d>=2){
			l++,r--,h--,d++;
		}
		if(h-d == 0) printf("%d %d\n",r,d);
		else if(r-l==0) printf("%d %d\n",l,h);	
		else printf("%d %d\n", l, d+1);
	}
	return 0;
}
