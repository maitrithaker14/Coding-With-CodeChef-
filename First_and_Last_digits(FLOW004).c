#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a,b,ans;
	    a=n%10;
	    while(n>=10)
	    {
	    n=n/10;
	    }
	    b=n;
	    ans=a+b;
	    printf("%d\n",ans);
	}
	return 0;
}

