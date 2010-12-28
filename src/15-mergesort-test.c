#include "linked-list-problems.h"

int main() {
  struct node *only_one = MakeNode(1);
  MergeSort(&only_one);
  
  struct node *two = MakeNode(2);
  two->next = MakeNode(1);
  printf("two: "); PrintList(two);
  MergeSort(&two);
  printf("two: "); PrintList(two);
  
  int spec[8] = {19, 3, 99, 1, 22, 44, 12, 2};
  struct node *head = ListFromArray(spec, 8);
  
  printf("head: "); PrintList(head);
  MergeSort(&head);
  printf("head: "); PrintList(head);
  
  return 0;
}