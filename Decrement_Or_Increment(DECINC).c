#include <stdio.h>

int main(void) {
	// your code goes here
	int n,m,l;
	scanf("%d",&n);
	//m=n%10;
	l=n%100;
	if(l%4==0)
	{
	        n++;
	}
	else
	    n--;
	printf("%d",n);
	return 0;
}

