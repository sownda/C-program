// Online C compiler to run C program online
#include <stdio.h>

main()
{
  printf("pick an item: /n1. pizza/n2. burger/n3. pasta/n4. french fries/n5. sandwich");
  int choice=0;
  scanf("%d",&choice);
  
  switch(choice)
  {
      case1:
      printf("pizza");
      printf("price=239");
      break;
      
      case2:
      printf("burger");
      printf("price=129");
      break;
      
      case3:
      printf("pasta");
      printf("price=179");
      break;
      
      case4:
      printf("french fries");
      printf("price=99");
      break;
      
      case5:
      printf("sandwich");
      printf("price=149");
      break;
      
      default:printf("invalid");
      
      
      
  }
}
