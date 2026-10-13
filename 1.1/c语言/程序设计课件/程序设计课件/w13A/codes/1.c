#include <stdio.h>
#include <assert.h>

void twoSum(int a[], int n, int target, int idx[])
{
    for (int i=0; i<n-1; ++i)
        for (int j=i+1; j<n; ++j)
            if (a[i]+a[j]==target)
            {
                idx[0]=i;
                idx[1]=j;
                return;
            }
}

int main()
{
    int n=3, target=6;
    int a[]={3, 2, 4};

    int idx[]={0, 0};
    twoSum(a, n, target, idx);

    // assert°´´ð°¸¸Ä
    assert((idx[0]==1 && idx[1]==2) || (idx[0]==2 && idx[1]==1));
    return 0;
}