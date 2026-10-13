#include<stdio.h>
#include<assert.h>

int leap(int year);
const char* weekday(int year,int month, int day);

int main() {
    int year=2022,month=11,day=29;
    printf("%s\n",weekday(year,month,day));
    //以下是指针相等，不是字符串相等。 
    assert(weekday(year,month,day) == "Tuesday");
    return 0;
}

const char* weekday(int year,int month, int day) {
    const char *weekdays[] = {"Sunday", 
        "Monday", "Tuesday", "Wednesday", 
        "Thursday", "Friday", "Saturday", };
    static int m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    m[1] = leap(year)? 29 : 28;
    int sum_days = day;
    for (int i=0,*p=m;i<month-1;i++) 
        sum_days += *(p++);
//    printf("%d\n",sum_days);
    for (int i=1;i<year;i++)
        sum_days += leap(i)? 366 : 365;
//    printf("%d\n",sum_days);    
    return weekdays[sum_days % 7];
}

int leap(int year) {
    if ((year%4==0 && year%100!=0) || year%400==0)
        return 1;
    return 0;
}
