/*ex-add-learning*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
    //give two random between 0..9
    srand((unsigned)time(NULL)); //seed
    
    int i,j,sum;
    i = rand() % 10;
    j = rand() % 10;
	
    printf("%d + %d = ",i,j);
    scanf("%d",&sum);
    
    //请根据学生的回答，分别使用以下语句
    printf("恭喜你，答对了！\n");
    printf("Oooops，再努力一次。\n"); 
}
