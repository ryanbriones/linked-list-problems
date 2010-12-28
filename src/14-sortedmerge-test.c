#include "linked-list-problems.h"

int main() {
  struct node *a = NULL;
  SortedInsert2(&a, MakeNode(1));
  SortedInsert2(&a, MakeNode(4));
  SortedInsert2(&a, MakeNode(10));
  struct node *b = NULL;
  SortedInsert2(&b, MakeNode(3));
  SortedInsert2(&b, MakeNode(9));
  SortedInsert2(&b, MakeNode(21));
  
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  struct node *merged_and_sorted = SortedMerge(a, b);
  printf("merged_and_sorted: "); PrintList(merged_and_sorted);
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  
  return 0;
}