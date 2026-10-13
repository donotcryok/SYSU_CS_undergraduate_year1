/*dowhile guess number*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
    //give a number between 0 .. 99
    srand((unsigned)time(NULL)); //seed
    int target = rand() % 100;
    
    int guess = -1;
    do {
        printf("Guess a magic number between 0 and 99:");
        scanf("%d",&guess);
        
        if (guess > target) 
            printf("Your guess is too high\n");
        else if (guess < target)
            printf("Your guess is too low\n");
        else
            printf("Yes! game over\n");
    } while (guess != target);
}
