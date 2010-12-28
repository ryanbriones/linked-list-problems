#include "linked-list-problems.h"

int main() {
  struct node *three = BuildOneTwoThree();
  struct node *three_front = NULL, *three_back = NULL;
  
  printf("three: "); PrintList(three);
  printf("three_front: "); PrintList(three_front);
  printf("three_back: "); PrintList(three_back);
  FrontBackSplit(&three, &three_front, &three_back);
  printf("three: "); PrintList(three);
  printf("three_front: "); PrintList(three_front);
  printf("three_back: "); PrintList(three_back);
  
  struct node *four = BuildOneTwoThree();
  struct node *forth = MakeNode(4);
  Append(&four, &forth);
  struct node *four_front = NULL, *four_back = NULL;
  
  printf("\nfour: "); PrintList(four);
  printf("four_front: "); PrintList(four_front);
  printf("four_back: "); PrintList(four_back);
  FrontBackSplit(&four, &four_front, &four_back);
  printf("four: "); PrintList(four);
  printf("four_front: "); PrintList(four_front);
  printf("four_back: "); PrintList(four_back);
  
  struct node *five = BuildOneTwoThree();
  struct node *five_forth = MakeNode(4);
  five_forth->next = MakeNode(5);
  Append(&five, &five_forth);
  struct node *five_front = NULL, *five_back = NULL;
  
  printf("\nfive: "); PrintList(five);
  printf("five_front: "); PrintList(five_front);
  printf("five_back: "); PrintList(five_back);
  FrontBackSplit(&five, &five_front, &five_back);
  printf("five: "); PrintList(five);
  printf("five_front: "); PrintList(five_front);
  printf("five_back: "); PrintList(five_back);
  
  struct node *one = MakeNode(1);
  struct node *one_front = NULL, *one_back = NULL;
  
  printf("\none: "); PrintList(one);
  printf("one_front: "); PrintList(one_front);
  printf("one_back: "); PrintList(one_back);
  FrontBackSplit(&one, &one_front, &one_back);
  printf("one: "); PrintList(one);
  printf("one_front: "); PrintList(one_front);
  printf("one_back: "); PrintList(one_back);
  
  struct node *two = MakeNode(1);
  two->next = MakeNode(2);
  struct node *two_front = NULL, *two_back = NULL;
  
  printf("\ntwo: "); PrintList(two);
  printf("two_front: "); PrintList(two_front);
  printf("two_back: "); PrintList(two_back);
  FrontBackSplit(&two, &two_front, &two_back);
  printf("two: "); PrintList(two);
  printf("two_front: "); PrintList(two_front);
  printf("two_back: "); PrintList(two_back);
  
  struct node *twenty = MakeNode(1);
  struct node *tail = twenty;
  int i;
  for(i = 2; i <= 20; i++) {
    struct node *newNode = MakeNode(i);
    tail->next = newNode;
    tail = newNode;
  }
  struct node *twenty_front = NULL, *twenty_back = NULL;
  
  printf("\ntwenty: "); PrintList(twenty);
  printf("twenty_front: "); PrintList(twenty_front);
  printf("twenty_back: "); PrintList(twenty_back);
  FrontBackSplit(&twenty, &twenty_front, &twenty_back);
  printf("twenty: "); PrintList(twenty);
  printf("twenty_front: "); PrintList(twenty_front);
  printf("twenty_back: "); PrintList(twenty_back);
  
  return 0;
}