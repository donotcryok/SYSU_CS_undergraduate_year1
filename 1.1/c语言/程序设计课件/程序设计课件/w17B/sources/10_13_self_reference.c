/*self reference*/
#include<stdio.h>

typedef struct NODE Node;
typedef Node *NODE_PTR;

struct NODE {
    int customerData;
    NODE_PTR next; 
};

int main() {
    Node list1 = {1,NULL};
    Node list2 = {2,&list1};
    Node list3 = {3,&list2};
    
    NODE_PTR list = &list3;
    for (;list;list = list->next) {
        printf("%d,",list->customerData);
    }
    printf("\n");
    
    list1.next = &list3;
    NODE_PTR circle = &list3;
    for (int i=0;i<10;i++,circle=circle->next) {
        printf("%d,",circle->customerData);
    }
    printf("\n");
    
    return 0;
}
