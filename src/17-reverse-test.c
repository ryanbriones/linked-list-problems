#include "linked-list-problems.h"

int main() {
  struct node *head = BuildOneTwoThree();
  
  PrintList(head);
  Reverse(&head);
  PrintList(head);
  
  int longer_list_spec[10] = {1,2,3,4,5,6,7,8,9,10};
  struct node *longer_list = ListFromArray(longer_list_spec, 10);
  PrintList(longer_list);
  Reverse(&longer_list);
  PrintList(longer_list);
  
  return 0;
}