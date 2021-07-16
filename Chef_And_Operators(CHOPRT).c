#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d %d",&n,&m);
	    if(n>m)
	    printf(">\n");
	    else if(n<m)
	    printf("<\n");
	    else
	    printf("=\n");
	}
	return 0;
}

