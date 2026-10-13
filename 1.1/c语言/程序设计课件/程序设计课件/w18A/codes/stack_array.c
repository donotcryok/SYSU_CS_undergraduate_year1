#include<stdio.h>
#include<malloc.h>
#include<assert.h>
typedef struct StackArray{
	int* data;
	int cnt;//记录目前栈内有多少元素 
	size_t max_size;//记录栈最多可以容纳多少元素 
}StackArray;

void InitStack(StackArray* s,size_t size){//初始化栈 
	s->data=(int*)malloc(size*sizeof(int));
	s->max_size=size;
	s->cnt=0;
}
int StackEmpty(const StackArray* s){//判断栈是否为空 
	if(s->cnt==0){
		return 1;
	}else{
		return 0;
	}
}
void Push(StackArray* s,const int x){//入栈一个元素 
	assert(s->cnt<s->max_size);
	s->data[s->cnt]=x;
	s->cnt+=1;
}

int Pop(StackArray* s){//出栈一个元素 
	assert(s->cnt);
	int t=s->data[s->cnt-1];
	s->cnt-=1;
	return t;
}

void DestroyStack(StackArray* s){//释放栈 
	free(s->data);
}

int main(){
	int i;
	StackArray s;
	InitStack(&s,10);
	for(i=0;i<9;i++){
		printf("Push:%d\n",i); 
		Push(&s,i);
	}
	for(int i=0;i<5;i++){
		printf("Pop:%d\n",Pop(&s));
	}
	DestroyStack(&s);
} 
