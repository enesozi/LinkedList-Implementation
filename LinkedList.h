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
  void push(ListNode* node);
  void pop();
  void clear();
  ListNode* getHeadNode();
  ListNode* getTailNode();
  string toString();
};

#endif