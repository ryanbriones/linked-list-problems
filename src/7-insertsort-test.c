#include "linked-list-problems.h"

int main() {
  struct node *head = BuildOneTwoThree();
  Push(&head, 10);
  Push(&head, 12);
  Push(&head, 13);
  Push(&head, 100);
  
  printf("unsorted: ");
  PrintList(head);
  InsertSort(&head);
  printf("sorted:   ");
  PrintList(head);

  return 0;
}