#include<stdio.h>
#include<assert.h>

void merge(int *nums1, int m, int *nums2, int n);
void merge1(int *nums1, int m, int *nums2, int n); 

int main(){
	int nums1[6]={1,2,3},nums2[3]={2,5,6};
	int expected[6]={1,2,2,3,5,6};
	
	merge1(nums1,3,nums2,3);
	for (int i=0;i<6;i++) 
	    assert(nums1[i]==expected[i]);
	    
    int nums11[6]={1,2,3};
    merge(nums11,3,nums2,3);
    for (int i=0;i<6;i++) 
	    assert(nums11[i]==expected[i]);

	return 0;
}

void merge(int *nums1, int m, int *nums2, int n) {
    int *p1 = nums1 + m - 1;
    int *p2 = nums2 + n - 1;
    int *q = nums1 + m + n - 1;
    
    while (p1<q) {
        if (*p2>=*p1) *(q--)=*(p2--);
        else *(q--)=*(p1--);
//        printf("%d\n", *(q+1));
    }
}

void merge1(int *nums1, int m, int *nums2, int n) {
    int *p1 = nums1, *p1e = nums1 + m;
    int *p2 = nums2, *p2e = nums2 + n;
    int new[m+n];
    int *q = new;
    
    while (p1<p1e || p2<p2e) {
        if (p1<p1e && p2<p2e)
            if (*p1<=*p2) *(q++)=*(p1++);
            else *(q++)=*(p2++);
        else if (p1<p1e)
            *(q++)=*(p1++);
        else if (p2<p2e)
            *(q++)=*(p2++);
//        printf("%d\n", *(q-1));
    } 
    
    for (int *p=new;p<q;p++,nums1++)
        *nums1 = *p;
}


