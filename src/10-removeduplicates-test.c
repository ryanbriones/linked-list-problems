#include "linked-list-problems.h"

int main() {
  struct node *sorted_list = NULL;
  SortedInsert2(&sorted_list, MakeNode(99));
  SortedInsert2(&sorted_list, MakeNode(99));
  SortedInsert2(&sorted_list, MakeNode(12));
  SortedInsert2(&sorted_list, MakeNode(10));
  SortedInsert2(&sorted_list, MakeNode(10));
  SortedInsert2(&sorted_list, MakeNode(3));
  SortedInsert2(&sorted_list, MakeNode(3));
  SortedInsert2(&sorted_list, MakeNode(5));
  
  printf("before duplicate removal: "); PrintList(sorted_list);
  RemoveDuplicates(sorted_list);
  printf("after duplicate removal: "); PrintList(sorted_list);
  
  struct node *empty_list = NULL;
  RemoveDuplicates(empty_list);
  
  return 0;
}