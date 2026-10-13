/*short circuit*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 

int main() {
    bool var;
    int a=100, b=90, c=100, d=90;

    var = true;

    if( (c < d) && ( var = ( a < b ) ) )
        return 0;
    else
    {
        printf("the value of var is: %d\n" ,var);
        return 0;
    }

}
