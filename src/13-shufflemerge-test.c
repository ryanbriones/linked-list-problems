#include "linked-list-problems.h"

int test_problem() {
  struct node *a = BuildOneTwoThree();
  int b_spec[3] = {7,13,1};
  struct node *b = ListFromArray(b_spec, 3);
  
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  struct node *shuffled_list = ShuffleMerge(a, b);
  printf("shuffled_list: "); PrintList(shuffled_list);
}

int test_list_two_less() {
  struct node *a = BuildOneTwoThree();
  int b_spec[2] = {7,13};
  struct node *b = ListFromArray(b_spec, 2);
  
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  struct node *shuffled_list = ShuffleMerge(a, b);
  printf("shuffled_list: "); PrintList(shuffled_list);
}

int test_list_one_less() {
  struct node *a = BuildOneTwoThree();
  int b_spec[5] = {7,13,1,99,42};
  struct node *b = ListFromArray(b_spec, 5);
  
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  struct node *shuffled_list = ShuffleMerge(a, b);
  printf("shuffled_list: "); PrintList(shuffled_list);
}

int main() {
  test_problem();
  test_list_two_less();
  test_list_one_less();
  
  return 0;
}