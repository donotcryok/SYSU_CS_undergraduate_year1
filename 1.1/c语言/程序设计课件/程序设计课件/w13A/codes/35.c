#include <stdio.h>
#include <assert.h>

int searchInsert_simple(int a[], int n, int target)
{
    for (int i=0; i<n; ++i)
        if (a[i]>=target) return i;
    return n;
}

int searchInsert_binary_search(int a[], int n, int target)
{
    int L=-1, R=n, mid;
    while (L+1<R)
    {
        mid=(L+R)>>1;
        if (a[mid]<target) L=mid;
        else R=mid;
    }
    return R;
}

int main()
{
    int n=4, target=5;
    int a[]={1, 3, 5, 6};

    // int idx=searchInsert_simple(a, n, target);
    int idx=searchInsert_binary_search(a, n, target);
    
    // assert不需要改
    assert(0<=idx && idx<=n);
    assert((idx==0 || a[idx-1]<target) && (idx==n || target<=a[idx]));
    return 0;
}