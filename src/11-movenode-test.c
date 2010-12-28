#include "linked-list-problems.h"

int main() {
  struct node *a = BuildOneTwoThree();
  struct node *b = BuildOneTwoThree();
  
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  MoveNode(&a, &b);
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  
  struct node *empty_dest = NULL;
  struct node *non_empty_source = MakeNode(2);
  printf("\nempty_dest: "); PrintList(empty_dest);
  printf("non_empty_source: "); PrintList(non_empty_source);
  MoveNode(&empty_dest, &non_empty_source);
  printf("empty_dest: "); PrintList(empty_dest);
  printf("non_empty_source: "); PrintList(non_empty_source);
  
  struct node *non_empty_dest = MakeNode(4);
  struct node *empty_source = NULL;
  printf("\nnon_empty_dest: "); PrintList(non_empty_dest);
  printf("empty_source: "); PrintList(empty_source);
  MoveNode(&non_empty_dest, &empty_source);
  printf("non_empty_dest: "); PrintList(non_empty_dest);
  printf("empty_source: "); PrintList(empty_source);
  
  return 0;
}