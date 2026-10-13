#include<stdio.h>
#include<math.h>

int isPrime(unsigned int n);

int main() {
    //test case
    int n = 12345;//97,100,12345
    for(int i=n; n>1; i--) {
        if (isPrime(i)) {
            printf("the max prime in %d is %d.\n",n,i);
            break;
        }
    }
} 

int isPrime(unsigned int n) {
    int out = 1;
    if (n<2) return 0;
    int k = (int)sqrt(n) + 1;
    for (int i=2; i<=k; i++) {
        if (!(n%i)) {
            out = 0;
            break;
        }
    } 
    return out;
}
