#include "linked-list-problems.h"

int main() {
  struct node *head = BuildOneTwoThree();
  
  int nth = GetNth(head, 2);
  printf("GetNth(..., 2): %d\n", nth);
  printf("GetNth(..., 1): %d\n", GetNth(head, 1));
  printf("GetNth(..., 5): %d\n", GetNth(head, 5));
  
  return 0;
}