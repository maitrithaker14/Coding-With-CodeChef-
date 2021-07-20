#include <stdio.h>

int main(void) {
	// your code goes here
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,l=0;
	    
	    scanf("%d",&n);
	    while(n!=0)
	    {
	        m=n%10;
	        l=l*10+m;
	        n=n/10;
	    }
	   
	    printf("%d\n",l);
	}
	return 0;
}

