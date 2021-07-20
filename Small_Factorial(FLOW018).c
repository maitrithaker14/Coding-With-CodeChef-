#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,fact=1;
	    scanf("%d",&n);
        while(n>0)
        {
            fact=fact*n;
            n--;
        }
        printf("%d\n",fact);
	}
	return 0;
}

