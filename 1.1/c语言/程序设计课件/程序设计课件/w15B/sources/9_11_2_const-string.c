/*const - string*/
#include<stdio.h>
#include<string.h>

int main() {
    char *s = "STUDENT"; 
    // 这里等价 (char*){"STUDENT"}
    // "STUDENT" 加载到代码段，只读 
    char t[] = "STUDENT";
    // 等价 (char[]){"STUDENT"}
    // 先开辟 t[8],然后初始化,即 
    // memcpy(t,(char*){"STUDENT"},8); 
      
    *t = 'T';
    *s = 'T';   //错误：段错误 
    printf("%s,%s,%d\n", s, t, 
           (char*){"STUDENT"} == s);

    
    char *(ss[])= {"hello","hello","!"}; 
    char **pp = ss;
    pp = (char *[]){"hello","hello","!"}; 
    pp[0][0]='H';  //错误：段错误
    
    char sa[][10] = {"hello","hello","!"}; 
    sa[0][0]='H'; 
    
    printf("%s,%s,%d\n", *pp, *sa, 
           pp[0] == pp[1]);  
    
    return 0;
} 
