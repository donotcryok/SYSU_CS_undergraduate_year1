/*text formated*/
#include<stdio.h>
#include<stdlib.h>

typedef struct STUDENT {
    int id;
    char name[32],college[32];
    double score;
} Student; 

int stReader(FILE *pf, Student *st); 
int stBinWriter(int cnt, Student *st);
//练习：完成二进制文件录入，并打印学生信息 
int stBinReader(int cnt, Student *st) 

int main() {
    FILE *pf = fopen("student.txt","r");
    if (!pf) {
        perror("Open File:");
        exit(9);
    }

    Student st[100]; 
    int cnt = stReader(pf, st);
    printf("%d steudents read.\n",cnt);
    fclose(pf);
    
    stBinWriter(cnt,st);
} 

int stReader(FILE *pf, Student *st) {
    int result = 0;
    while (!feof(pf)) {
        fscanf(pf,"%d%s%s%lf",&st->id,st->name,st->college,&st->score);
        result++;
    } 
    return result;
}

int stBinWriter(int cnt, Student *st) {
    FILE *pf = fopen("student.bin","wb");
    if (!pf) {
        perror("Open File:");
        exit(10);
    } 
    
    fwrite(&cnt, sizeof(int), 1, pf);
    int result = fwrite(st, sizeof(*st), cnt, pf);   
    fclose(pf); 
    return result;  
}


