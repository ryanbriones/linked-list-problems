#include "linked-list-problems.h"

int main() {
  struct node *head = BuildOneTwoThree();
  
  int one = Pop(&head);
  int two = Pop(&head);
  int three = Pop(&head);
  int length = Length(head);
  
  printf("one: %d\n", one);
  printf("two: %d\n", two);
  printf("three: %d\n", three);
  printf("length: %d\n", length);
  
  return 0;
}