#include "linked-list-problems.h"

int main() {
  struct node *head = BuildOneTwoThree();
  
  printf("length: %d\n", Length(head));
  DeleteList(&head);
  printf("length: %d\n", Length(head));
  
  return 0;
}