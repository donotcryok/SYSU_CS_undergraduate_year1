#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* getRow(int n, int** size){ 
    *size = malloc(sizeof(int)); 
    **size=n+1;
    int *ret=malloc((n+1)*sizeof(int));
    if (n==0)
    {
        ret[0]=1;
        return ret;
    }
    int a[n+1][n+1];
    memset(a, 0, sizeof(a));
    for (int i=0; i<=n; ++i)
    {
        a[i][0]=1;
        for (int j=1; j<=i; ++j) a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    for (int i=0; i<=n; ++i) ret[i]=a[n][i];
    return ret;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *size;
    int *ans=getRow(n, &size);
    for (int i=0; i<*size; ++i)
        printf("%d ", ans[i]);
    free(size);    
    free(ans);
    return 0;
}
