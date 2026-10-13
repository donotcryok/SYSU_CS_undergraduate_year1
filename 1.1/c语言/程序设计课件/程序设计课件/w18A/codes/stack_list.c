#include"node.h"
#include<stdio.h>
typedef struct StackList{
	NODE_PTR head;
}StackList;

void InitStack(StackList* s){//初始化栈 
	s->head=NULL;
}
int StackEmpty(const StackList* s){//判断栈是否为空 
	if(s->head==NULL){
		return 1;
	}else{
		return 0;
	}
}
void Push(StackList* s,const int x){//入栈一个元素 
	s->head=ListAdd(s->head,x);
}
int Pop(StackList* s){//出栈一个元素 
	assert(s->head);
	int t=s->head->customerData;
	s->head=ListRemove(s->head);
	return t;
}
void DestroyStack(StackList* s){//释放栈 
	//ListRemove(s->head);
	ListFree(s->head);
}

int main(){
	int i;
	StackList s;
	InitStack(&s);
	for(i=0;i<5;i++){
		printf("Push:%d\n",i); 
		Push(&s,i);
	}
	for(int i=0;i<5;i++){
		printf("Pop:%d\n",Pop(&s));
	}
	DestroyStack(&s);
} 
