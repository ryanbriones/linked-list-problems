#include "linked-list-problems.h"

struct node *BuildOneTwoThree() {
  struct node *head = NULL;
  Push(&head, 3);
  Push(&head, 2);
  Push(&head, 1);
  
  return head;
}

int Length(struct node *head) {
  int count = 0;
  struct node *current;
  
  for(current = head; current != NULL; current = current->next) {
    count++;
  }
  
  return count;
}

void Push(struct node **headRef, int newData) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  
  new_node->data = newData;
  new_node->next = *headRef;
  
  *headRef = new_node;
}

int Count(struct node *head, int searchFor) {
  int count = 0;
  struct node *current;
  
  for(current = head; current != NULL; current = current->next) {
    if(current->data == searchFor) {
      count++;
    }
  }
  
  return count;
}

int GetNth(struct node *head, int index) {
  int currentIndex = 0, returnValue;
  struct node *current;
  
  for(current = head; current != NULL; current = current->next) {
    if(currentIndex == index) {
      returnValue = current->data;
      break;
    }
    
    currentIndex++;
    
    assert(current->next != NULL || index <= currentIndex);
  }
}

void DeleteList(struct node **headRef) {
  struct node *current = *headRef;
  struct node *next;
  
  while(current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }
  
  *headRef = NULL;
}

int Pop(struct node **headRef) {
  int returnValue = -1;
  struct node *head = *headRef;
  
  returnValue = head->data;
  *headRef = head->next;
  free(head);
  
  return returnValue;
}

void InsertNth(struct node **headRef, int index, int data)  {
  struct node *current = *headRef;
  
  if(index == 0 && current == NULL) {
    Push(headRef, data);
    return;
  }

  int currentIndex = 1;
  while(current != NULL) {
    if(currentIndex == index) {
      Push(&(current->next), data);
      return;
    }
    
    current = current->next;
    currentIndex++;
  }
  
  assert(index <= (currentIndex - 1));
}

void SortedInsert(struct node **headRef, struct node *newNode) {
  if(*headRef == NULL) {
    *headRef = newNode;
    return;
  }
  
  struct node *current = *headRef;
  struct node *tail = current;
  struct node *last = NULL;
  
  while(current != NULL) {
    tail = current;
    int currentData = current->data;
    if(newNode->data <= currentData - 1) {
      newNode->next = current;
      
      if(last == NULL) {
        *headRef = newNode;
      } else {
        last->next = newNode;
      }
      
      return;
    }
    
    last = current;
    current = current->next;
  }
  
  tail->next = newNode;
}

void SortedInsert2(struct node **headRef, struct node *newNode) {
  if(*headRef == NULL || (*headRef)->data >= newNode->data) {
    newNode->next = *headRef;
    *headRef = newNode;
    return;
  }
  
  struct node *max = *headRef;
  while(max->next != NULL && max->next->data < newNode->data) {
    max = max->next;
  }
  
  newNode->next = max->next;
  max->next = newNode;
}

void InsertSort(struct node **headRef) {
  struct node *returnVal = NULL;
  struct node *current = *headRef;
  struct node *next;
  
  while(current != NULL) {
    next = current->next;
    SortedInsert2(&returnVal, current);
    current = next;
  }
  
  *headRef = returnVal;
}

void Append(struct node **aRef, struct node **bRef) {
  if(*aRef == NULL) {
    *aRef = *bRef;
  } else {
    struct node *tail_a = *aRef;
    
    while(tail_a->next != NULL) {
      tail_a = tail_a->next;
    }
    
    assert(tail_a != NULL);
    
    tail_a->next = *bRef;
  }
  
  *bRef = NULL;
}

void FrontBackSplit(struct node **sourceRef, struct node **frontRef, struct node **backRef) {
  int length = Length(*sourceRef);
  
  if(length == 1) {
    *frontRef = *sourceRef;
    *sourceRef = NULL;
  } else if(length == 2) {
    *backRef = (*sourceRef)->next;
    *frontRef = *sourceRef;
    (*frontRef)->next = NULL;
    *sourceRef = NULL;
  } else if(length < 5) {
    struct node *source = *sourceRef;
    *backRef = source->next->next;
    source->next->next = NULL;
    *frontRef = source;
    *sourceRef = NULL;
  } else {
    struct node *slow = *sourceRef;
    struct node *fast = *sourceRef;
    struct node *tail = NULL;
    
    while(fast != NULL) { 
      tail = slow;
           
      if(fast->next == NULL) {
        fast = NULL;
      } else {
        fast = fast->next->next;
      }
      
      slow = slow->next;
    }
    
    *frontRef = *sourceRef;
    tail->next = NULL;
    *backRef = slow;
    *sourceRef = NULL;
  }
}

void RemoveDuplicates(struct node *head) {
  struct node *current = head;
  while(current != NULL) {
    if(current->data == current->next->data) {
      struct node *to_remove = current->next;
      current->next = to_remove->next;
      free(to_remove);
    }
    
    current = current->next;
  }
}

void MoveNode(struct node **destRef, struct node **sourceRef) {
  if(*sourceRef == NULL) return;
  
  struct node *sourceHead = *sourceRef;
  struct node *newSourcehead = sourceHead->next;
  struct node *oldDestHead = *destRef;
  
  sourceHead->next = oldDestHead;
  *destRef = sourceHead;
  *sourceRef = newSourcehead;
}

void AlternatingSplit(struct node *source, struct node **aRef, struct node **bRef) {
  struct node *current = source;
  while(current != NULL) {
    MoveNode(aRef, &current);
    
    if(current != NULL) {
      MoveNode(bRef, &current);
    }
  }
}

struct node *ShuffleMerge(struct node *a, struct node *b) {
  struct node *revNewList = NULL, *newList = NULL;
  
  while(a && b) {
    MoveNode(&revNewList, &a);
    if(a == NULL && b != NULL) {
      while(b != NULL) {
        MoveNode(&revNewList, &b);
      }
    }
    
    MoveNode(&revNewList, &b);
    if(b == NULL && a != NULL) {
      while(a != NULL) {
        MoveNode(&revNewList, &a);
      }
    }
  }
  
  while(revNewList != NULL) {
    MoveNode(&newList, &revNewList);
  }
  free(revNewList);
  
  return newList;
}

struct node *SortedMerge(struct node *a, struct node *b) {
  struct node *newList = a;
  struct node *next = NULL;
  
  while(b != NULL) {
    next = b->next;
    SortedInsert2(&newList, b);
    b = next;
  }
  
  return newList;
}

void MergeSort(struct node **headRef) {
  struct node *front = NULL, *back = NULL;
  if(*headRef == NULL || (*headRef)->next == NULL) return;
  
  FrontBackSplit(headRef, &front, &back);
  MergeSort(&front);
  MergeSort(&back);
  *headRef = SortedMerge(front, back);
}

struct node *SortedIntersect(struct node *a, struct node *b) {
  struct node *temp = NULL, *newList = NULL, *next = NULL;
  
  while(a != NULL || b != NULL) {
    if(a != NULL) {
      struct node *a_nodeCopy = MakeNode(a->data);
      SortedInsert2(&temp, a_nodeCopy);
      a = a->next;
    }
    
    if(b != NULL) {
      struct node *b_nodeCopy = MakeNode(b->data);
      SortedInsert2(&temp, b_nodeCopy);
      b = b->next;
    }
  }
  
  while(temp->next != NULL) {
    next = temp->next;
    if(temp->data == next->data) {
      SortedInsert2(&newList, temp);
      temp = next->next;
    } else {
      temp = next;
    }
  }
  
  return newList;
}

struct node *SortedIntersect2(struct node *a, struct node *b) {
  struct node *newList = NULL;
  while(a != NULL && b != NULL) {
    if(a->data == b->data) {
      SortedInsert2(&newList, MakeNode(a->data));
    }
    
    if(a->data < b->data) {
      a = a->next;
    } else {
      b = b->next;
    }
  }
  
  return newList;
}

void Reverse(struct node **headRef) {
  struct node *current = *headRef;
  struct node *next = current->next;
  struct node *pivot = current;
  
  while(current != NULL) {
    if(*headRef == current) current = current->next;
      
    next = current->next;
    pivot->next = next;
    current->next = *headRef;
    *headRef = current;
    current = next;
  }
}

void RecursiveReverse(struct node **headRef) {
  struct node *first, *rest;
  
  first = *headRef;
  rest = first->next;
  if(rest == NULL) return;
  
  RecursiveReverse(&rest);

  // 2->3->NULL
  // 1->2->NULL
  first->next->next = first;
  // 3->2->3
  // 2->1->2
  first->next = NULL;
  // 3->2->NULL
  // 2->1->NULL
  *headRef = rest;
  // *headRef->3->2->NULL
  // *headRef->3->2->1->NULL
}

void PrintList(struct node *head) {
  struct node *current;
  printf("{");
  for(current = head; current != NULL; current = current->next) {
    printf("%d", current->data);
    
    if(current->next != NULL) {
      printf(", ");
    }
  }
  printf("}\n");
}

struct node *MakeNode(int data) {
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = data;
  return newNode;
}

struct node *ListFromArray(int *spec, int size) {
  struct node *newList = NULL;
  int i;
  for(i = 0; i < size; i++) {
    struct node *newNode = MakeNode(*(spec + i));
    Append(&newList, &newNode);
  }
  return newList;
}