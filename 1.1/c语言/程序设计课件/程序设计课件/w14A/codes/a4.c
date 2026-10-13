#include <stdio.h>

char repeatedCharacter(char * s){
    int i;
    char alphabet[26]={0};

    for(i=0;i<strlen(s);i++){
        
        alphabet[s[i]-97]++;

        if(alphabet[s[i]-97]==2){
            break;
        }
    }
    
    return s[i];
}
