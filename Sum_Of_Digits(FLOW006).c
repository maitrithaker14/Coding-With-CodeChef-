#include <stdio.h>

int main(void) {
	// your code goes here
	int t,no,m;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&no);
	    int sum=0;
	    while(no>0)
	    {
	        m=no%10;
	        sum=sum+m;
	        no=no/10;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

