#include "linked-list-problems.h"

int main() {
  struct node *head = NULL;
  
  InsertNth(&head, 0, 13);
  InsertNth(&head, 1, 42);
  InsertNth(&head, 1, 5);
  
  PrintList(head);
  
  DeleteList(&head);
  
  InsertNth(&head, 5, 20);
  
  return 0;
}