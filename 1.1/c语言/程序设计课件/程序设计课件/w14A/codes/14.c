#include <stdio.h>
#include<assert.h>

#define N 201

void longestCommonPrefix(char strs[][N], size_t sz, char pref[]);
 
int main () {
    char strs[][N] = {"flower","flow","flight"};  
    char CommonPref[N];
    
    longestCommonPrefix(strs,sizeof(strs)/sizeof(strs[0]),CommonPref);
    
    for(int i=0; i<2; i++) {
        assert(strs[0][i]==CommonPref[i]);
    }
    assert(!CommonPref[2]);
    
    return 0;
} 

void longestCommonPrefix(char strs[][N], size_t sz, char pref[]){
    int p = 0;
    pref[p] = 0;    //Ä¬ÈÏÇ°×ºÎª¿Õ 
    for (int i=0;i<N;i++) {
        char c = strs[0][i];
        if (!c) return;
        for (int j=1;j<sz;j++) {
            if (c!=strs[j][i]) return;
        }
        pref[p++] = c;
        pref[p] = 0;
    }    
}
