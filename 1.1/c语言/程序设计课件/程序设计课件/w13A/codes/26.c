#include <stdio.h>
#include <assert.h>

int removeDuplicates(int a[], int n)
{
    if (n==0) return 0;
    int m=1;
    for (int i=1; i<n; ++i)
        if (a[i]!=a[m-1]) a[m++]=a[i];
    return m;
}

int main()
{
    int n=10;
    int a[]={0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int m=removeDuplicates(a, n);

    // assert°´´ð°¸¸Ä
    assert(m==5);
    for (int i=0; i<5; ++i)
        assert(a[i]==i);
    return 0;
}