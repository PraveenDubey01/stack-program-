#include "stack5.c"
#include "process.h"
 
void main()
{
  int choice,item;
  
  stack s;
  init(&s);
  
  while(1)
  {
    puts("1. push");
    puts("2. pop");
    puts("3. peek");
    puts("4. size");
    puts("5. exit");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
	     printf("Enter item: ");
	     scanf("%d",&item);
	     push(&s,item);
	     break;
	     
      case 2:
	     item = pop(&s);
	     if(item!=0)
	        printf("%d is popped out from a stack\n",item);
	    break;
      case 3:
	     item = peek(&s);
	     if(item!=0)
	        printf("%d is found at top\n",item);
	     break;
	     
      case 4:
	     printf("%d item found in the stack\n",size(&s));
	     break;
	  
      case 5:
	      exit(1);
	  default:
	  	  puts("Invalid Stack Operations!");
    }
    getch();
  }
}
