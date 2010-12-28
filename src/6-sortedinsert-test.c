#include "linked-list-problems.h"

int main() {
  struct node *head = NULL;
  
  struct node *ten = (struct node *)malloc(sizeof(struct node));
  ten->data = 10;
  SortedInsert(&head, ten);
  
  struct node *thirteen = (struct node *)malloc(sizeof(struct node));
  thirteen->data = 13;
  SortedInsert(&head, thirteen);
  
  struct node *eleven = (struct node *)malloc(sizeof(struct node));
  eleven->data = 11;
  SortedInsert(&head, eleven);
  
  struct node *one = (struct node *)malloc(sizeof(struct node));
  one->data = 1;
  SortedInsert(&head, one);
  
  struct node *two = (struct node *)malloc(sizeof(struct node));
  two->data = 2;
  SortedInsert(&head, two);
  
  struct node *one_hundred = (struct node *)malloc(sizeof(struct node));
  one_hundred->data = 100;
  SortedInsert(&head, one_hundred);
  
  struct node *two_two = (struct node *)malloc(sizeof(struct node));
  two_two->data = 2;
  SortedInsert(&head, two_two);
  
  PrintList(head);
  
  struct node *head2 = NULL;
  struct node *head2_ten = (struct node *)malloc(sizeof(struct node));
  head2_ten->data = 10;
  SortedInsert2(&head2, head2_ten);
  struct node *head2_thirteen = (struct node *)malloc(sizeof(struct node));
  head2_thirteen->data = 13;
  SortedInsert2(&head2, head2_thirteen);
  struct node *head2_eleven = (struct node *)malloc(sizeof(struct node));
  head2_eleven->data = 11;
  SortedInsert2(&head2, head2_eleven);
  struct node *head2_one = (struct node *)malloc(sizeof(struct node));
  head2_one->data = 1;
  SortedInsert2(&head2, head2_one);
  struct node *head2_two = (struct node *)malloc(sizeof(struct node));
  head2_two->data = 2;
  SortedInsert2(&head2, head2_two);
  struct node *head2_one_hundred = (struct node *)malloc(sizeof(struct node));
  head2_one_hundred->data = 100;
  SortedInsert2(&head2, head2_one_hundred);
  struct node *head2_two_two = (struct node *)malloc(sizeof(struct node));
  head2_two_two->data = 2;
  SortedInsert2(&head2, head2_two_two);
  PrintList(head2);
  
  return 0;
}