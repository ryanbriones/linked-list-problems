#include "linked-list-problems.h"

int main() {
  struct node *head = BuildOneTwoThree();
  
  int count = Count(head, 2);
  
  // for my gratification
  printf("Count(2): %d\n", Count(head, 2));
  printf("Count(5): %d\n", Count(head, 5));
  Push(&(head->next), 2);
  printf("Count(2): %d # after Push(..., 2)\n", Count(head, 2));
  
  return 0;
}

