#include<stdio.h>
#include<stdlib.h>
#include"node.h"

int main() {
    NODE_PTR list = NULL;
    for(int i=0;i<10;i++)
        list = ListCreate(i+1,list);
        
    for (NODE_PTR p=list;p;p=p->next)
        printf("%d,",p->customerData);
    printf("\n");
    
    printf("len = %d\n", ListLength(list));
    printf("li[3] = %d\n", ListIndex(list,3)->customerData);
    
    list = ListAdd(list,11);
    printf("add = %d\n", list->customerData);
    list = ListRemove(list);
    printf("removed = %d\n", list->customerData);
    
    ListFree(list);
    return 0;
}
