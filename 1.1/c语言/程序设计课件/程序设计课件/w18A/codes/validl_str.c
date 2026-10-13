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
	InitStack(&s,10005);
	char str[10005];
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){//从左到右扫描 
		if(str[i]=='{' || str[i]=='(' || str[i]=='['){ 
			Push(&s,str[i]);//左括号直接入栈
		}else{//遇到右括号，则匹配对应括号出栈 
			if(StackEmpty(&s)){//没有括号匹配，则字符串无效 
				printf("false\n");
				return 0;
			}
			char c=Pop(&s);
			if((str[i]=='}' && c=='{') || (str[i]==')' && c=='(') || (str[i]==']' && c=='[')){
				continue;//括号匹配了，则继续 
			}else{//括号不匹配，则字符串无效 
				printf("false\n");
				return 0;
			}
		}
	}
	if(!StackEmpty(&s)){//最后栈非空则无效 
		printf("false\n");
	}else{
		printf("true\n");
	}
} 








