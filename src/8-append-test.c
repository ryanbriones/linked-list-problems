#include "linked-list-problems.h"

int main() {
  struct node *a = NULL;
  struct node *b = MakeNode(3);
  b->next = MakeNode(4);
  
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  Append(&a, &b);
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  
  struct node *x = BuildOneTwoThree();
  struct node *y = MakeNode(4);
  y->next = MakeNode(5);
  
  printf("\nx: "); PrintList(x);
  printf("y: "); PrintList(y);
  Append(&x, &y);
  printf("x: "); PrintList(x);
  printf("y: "); PrintList(y);
  
  return 0;
}