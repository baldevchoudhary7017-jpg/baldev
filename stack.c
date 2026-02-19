#include <stdio.h>

  int stack[5];
  int top=-1;
  
  void push(int item)
  {
      if(top==4)
      {
          printf("stack overflow\n");
      }
      else{
          top=top+1;
          stack[top]=item;
          printf("element inserted\n");
      }
  }
  
  void pop()
  {
      if(top==-1)
      {
          printf("stack underflow\n");
      }
      else
      {
          printf("deleted element:%d\n",stack[top]);
          top-=1;
      }
  }

void peak()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("top element:%d\n",stack[top]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    peak();
    push(40);
    push(50);
    peak();
    pop(); 
    pop(); 
    pop(); 
    pop(); 
    pop(); 
    peak();
    push(70);
    peak();
    
    return 0;
}