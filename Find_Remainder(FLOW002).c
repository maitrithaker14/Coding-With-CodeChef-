#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int ans;
        ans = a % b;
        printf("%d\n",ans);
    }
    return 0;
}
