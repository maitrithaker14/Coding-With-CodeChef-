#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,ans;
	    scanf("%d",&n);
	    ans=sqrt(n);
	    
	    printf("%d\n",ans);
	}
	return 0;
}
