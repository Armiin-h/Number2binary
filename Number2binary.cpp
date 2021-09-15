#include <stdio.h>
int main() {
	int a,b,i,m,r,n,k;
	i=0;
	b=0;
	printf ("adad vared kon landehor\n");
	scanf("%d",&a);
	while (a>0){
		m=a/2;
		r=a-(m*2);
		k=1;
		n=1;
		while (k<=i){
			n=n*10;
			k=k+1;
		}
		b=b+r*n;
		i=i+1;
		a=m;
	}
	printf ("%d",b);
	return 0;
}
