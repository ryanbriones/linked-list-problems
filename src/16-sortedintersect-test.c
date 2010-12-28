#include "linked-list-problems.h"

void test_first_impl() {
  struct node *a = BuildOneTwoThree();
  int b_spec[3] = {3,4,5};
  struct node *b = ListFromArray(b_spec, 3);
  
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  struct node *intersect = SortedIntersect(a, b);
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  printf("intersect: "); PrintList(intersect);
  
  int x_spec[10] = {1,2,3,4,5,6,7,8,9,10};
  int y_spec[5] =      {3,4,5,6,7};
  struct node *x = ListFromArray(x_spec, 10);
  struct node *y = ListFromArray(y_spec, 5);
  printf("x: "); PrintList(x);
  printf("y: "); PrintList(y);
  struct node *intersect_xy = SortedIntersect(x, y);
  printf("x: "); PrintList(x);
  printf("y: "); PrintList(y);
  printf("intersect_xy: "); PrintList(intersect_xy);
}

void test_sec_impl() {
  struct node *a = BuildOneTwoThree();
  int b_spec[3] = {3,4,5};
  struct node *b = ListFromArray(b_spec, 3);
  
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  struct node *intersect = SortedIntersect2(a, b);
  printf("a: "); PrintList(a);
  printf("b: "); PrintList(b);
  printf("intersect: "); PrintList(intersect);
  
  int x_spec[10] = {1,2,3,4,5,6,7,8,9,10};
  int y_spec[5] =      {3,4,5,6,7};
  struct node *x = ListFromArray(x_spec, 10);
  struct node *y = ListFromArray(y_spec, 5);
  printf("x: "); PrintList(x);
  printf("y: "); PrintList(y);
  struct node *intersect_xy = SortedIntersect2(x, y);
  printf("x: "); PrintList(x);
  printf("y: "); PrintList(y);
  printf("intersect_xy: "); PrintList(intersect_xy);
}

int main() {
  test_first_impl();
  test_sec_impl();
  
  return 0;
}