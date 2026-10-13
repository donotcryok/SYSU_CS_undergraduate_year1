#pragma once
#include<stdlib.h>
#include<assert.h>

typedef struct NODE Node;
typedef Node *NODE_PTR;

struct NODE {
    int customerData;
    NODE_PTR next; 
};

NODE_PTR ListCreate(int i,NODE_PTR li);
void ListFree(NODE_PTR li);

size_t ListLength(NODE_PTR li);
NODE_PTR ListIndex(NODE_PTR li, size_t Idx);

NODE_PTR ListAdd(NODE_PTR li,int i);
NODE_PTR ListRemove(NODE_PTR li);

//--Implementations
 
NODE_PTR ListCreate(int i,NODE_PTR li) {
    NODE_PTR np = malloc(sizeof(Node));
    np->customerData = i;
    np->next = li;
    return np; 
}

void ListFree(NODE_PTR li) {
    if (li) {
        NODE_PTR p = li->next;
        free(li);
        ListFree(p);
    } 
}

size_t ListLength(NODE_PTR li) {
    if (li) return ListLength(li->next) + 1;
    else return 0;
} 

NODE_PTR ListIndex(NODE_PTR li, size_t Idx) {
    if (li && Idx) return ListIndex(li->next,--Idx);
    else return li;
}

NODE_PTR ListAdd(NODE_PTR li,int i){
    return ListCreate(i,li);
}

NODE_PTR ListRemove(NODE_PTR li){
    if (li) {
        NODE_PTR p = li->next;
        free(li);
        return p;
    }
    return NULL;
}

