/*text formated*/
#include<stdio.h>
#include<stdlib.h>

void stReader(FILE *pf); 
void stReader1(FILE *pf);
void stReader2(FILE *pf);

int main() {
    FILE *pf = fopen("student.txt","r");
    if (!pf) {
        perror("Open File:");
        exit(9);
    }
    //练习1：这里有三个版本的 stReader，它们都对吗？
    //练习2：将参数改为 stdin 会发生什么？ 
    stReader(pf);
    fclose(pf);
} 

void stReader(FILE *pf) {
    printf("学生信息：\n");
    int id;
    char name[32],college[32];
    double score;
    while (!feof(pf)) {
        fscanf(pf,"%d%s%s%lf",&id,name,college,&score);
        printf("学号:%d 姓名:%s 学院:%s 成绩:%6.2lf\n",
            id,name,college,score);
    } 
}

void stReader1(FILE *pf) {
    printf("学生信息：\n");
    int id;
    char name[32],college[32];
    double score;
    while (1) {
        if (EOF == fscanf(pf,"%d%s%s%lf",&id,name,college,&score))
           return;
        printf("学号:%d 姓名:%s 学院:%s 成绩:%6.2lf\n",
            id,name,college,score);
    } 
}

void stReader2(FILE *pf) {
    printf("学生信息：\n");
    int id;
    char name[32],college[32];
    double score;
    while (!feof(pf)) {
        if (4 > fscanf(pf,"%d%s%s%lf",&id,name,college,&score))
           return;
        printf("学号:%d 姓名:%s 学院:%s 成绩:%6.2lf\n",
            id,name,college,score);
    } 
}






 
