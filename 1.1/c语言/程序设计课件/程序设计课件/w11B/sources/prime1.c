#include<stdio.h>
#include<math.h>

int isPrime(unsigned int n);

int main() {
    //test case
    int n = 2; //3,5,8,11,15
    printf("%d",isPrime(n));
} 

int isPrime(unsigned int n) {
    int out = 1;
    if (n<2) return 0;
    int k = (int)sqrt(n) + 1;
    for (int i=2; i<=k; i++) {
        if (!(n/i)) {
            out = 0;
            break;
        }
    } 
    return out;
}
