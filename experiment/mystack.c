#include <stdio.h>
#include <stdlib.h>
#include "mystack.h"

STACK init_stack(void){
  //栈顶指针指向的元素
  position np;
  //栈顶指针
  STACK sk;
  //为栈顶元素分配空间
  np = (position)malloc(sizeof(struct node));
  np->next = NULL;
  //栈顶指针指向的第一个元素为NULL,这时
  //栈中没有数据
  sk = np;
  return sk;
}

void delete_stack(STACK sk){
  while(!is_null(sk)){
    pop(sk);
  }
  //释放栈顶指针元素空间
  free(sk);
}

ElementTP top(STACK sk){
  //栈顶指针指向的元素的值
  return sk->next->element;
}

void push(STACK sk,ElementTP element){
  position np,old_top;
  //缓存栈中第一个元素
  old_top = sk->next;
  //为新元素分配空间
  np = (position)malloc(sizeof(struct node));
  //为新元素赋值
  np->element = element;
  //新元素压入栈顶的下一个位置
  np->next = old_top;
  //栈顶指针指向新栈元素
  sk->next = np;
}

ElementTP pop(STACK sk){
  //如果还有元素
  if(is_null(sk)){
    printf("no more element!");
    exit(1);
  }else{
    //待返回的元素定义
    position np;
    ElementTP value;
    np = sk->next;
    //栈顶指针指向待返回元素指向的元素
    sk->next = np->next;
    //返回元素值
    value = np->element;
    //释放待出栈元素空间
    free(np);
    return value;
  }

}

int is_null(STACK sk){
  return sk->next==NULL;
}
