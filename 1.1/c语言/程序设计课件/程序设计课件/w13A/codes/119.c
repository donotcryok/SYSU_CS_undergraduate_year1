#include<stdio.h>

void print_yanghui(int n);
void nextline(int prev_line[], int line_no);

int main() {
    int n = 5;
    print_yanghui(n);
    return 0;
} 

void print_yanghui(int n){
    int line[n];
    for (int i=1;i<=n;i++) {
        nextline(line,i);
        for (int j=0;j<i;j++) {
            printf("%-4d",line[j]);
        }
        printf("\n");
    }
}

void nextline(int prev_line[], int line_no) {
    if (line_no == 1) {
        prev_line[0] = 1;
    } 
    else if (line_no == 2) {
        prev_line[0] = prev_line[1] = 1;
    } 
    else {
        int a=prev_line[0];
        int b=prev_line[1];
        for (int i=1;i<line_no-1;i++) {
           prev_line[i] = a + b;
           a = b; 
           b = (i==line_no-2)? 0: prev_line[i+1];   
        }
        prev_line[line_no-1] = a + b;       
    }
}

