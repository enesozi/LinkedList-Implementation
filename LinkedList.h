#ifndef LinkedList_H
#define LinkedList_H
#include "ListNode.h"
#include <iostream>
using std::string;


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
  ListNode* findElement(int value);
  ListNode* findAndExtractElement(int value);
  ListNode getElementByIndex(int index);
  string toString();
};

#endif