#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
  int data;
  struct node *next;
};

int Length(struct node *head);
struct node *BuildOneTwoThree();
void Push(struct node **headRef, int newData);

int Count(struct node *head, int searchFor);
int GetNth(struct node *head, int index);
void DeleteList(struct node **headRef);
int Pop(struct node **headRef);
void InsertNth(struct node **headRef, int index, int data);
void SortedInsert(struct node **headRef, struct node *newNode);
void InsertSort(struct node **headRef);
void Append(struct node **a, struct node **b);
void FrontBackSplit(struct node **sourceRef, struct node **frontRef, struct node **backRef);
void RemoveDuplicates(struct node *head);
void MoveNode(struct node **destRef, struct node **sourceRef);
void AlternatingSplit(struct node *source, struct node **aRef, struct node **bRef);
struct node *ShuffleMerge(struct node *a, struct node *b);
struct node *SortedMerge(struct node *a, struct node *b);
void MergeSort(struct node **headRef);
struct node *SortedIntersect(struct node *a, struct node *b);
struct node *SortedIntersect2(struct node *a, struct node *b);
void Reverse(struct node **headRef);
void RecursiveReverse(struct node **headRef);

void PrintList(struct node *head);
struct node *MakeNode(int data);
struct node *ListFromArray(int *spec, int size);