#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,count=0;
	    scanf("%d",&n);
	    while(n>0)
	    {
	        m=n%10;
	        if(m==4)
	            count++;
	        n=n/10;
	    }
	    printf("%d\n",count);
	}
	
	return 0;
}

