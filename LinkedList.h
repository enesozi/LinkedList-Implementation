#ifndef LinkedList_H
#define LinkedList_H
#include "ListNode.h"

class LinkedList
{
  ListNode* head;
  ListNode* tail;

public:
  LinkedList();
  ~LinkedList();
  void pushBack(ListNode* node);
  void push(ListNode* node);
  ListNode* pop();
  void clear();
  ListNode* peekFirst();
  ListNode* peekLast();
  string toString();
};

#endif