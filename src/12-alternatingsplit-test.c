#include "linked-list-problems.h"

int main() {
  int spec[5] = {1,2,1,2,1};
  struct node *source = ListFromArray(spec, 5);
  struct node *a = NULL, *b = NULL;
  
  PrintList(source);
  AlternatingSplit(source, &a, &b);
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  
  return 0;
}