#include "linked-list-problems.h"

int main() {
  struct node *head;
  int len;
  
  head = BuildOneTwoThree();
  
  Push(&head, 13);
  
  Push(&(head->next), 42);
  
  len = Length(head);
  printf("len: %d\n", len);
  
  PrintList(head);
  
  return 0;
}