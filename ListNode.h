#ifndef ListNode_H
#define ListNode_H

class ListNode
{
  int value;
  ListNode* next;
  ListNode* prev;

public:
  ListNode(int value);
  ~ListNode(); 
  int getValue();
  void setValue(int value);
  ListNode* getNextNode();
  ListNode* getPrevNode();
  void setNextNode(ListNode* nextNode);
  void setPrevNode(ListNode* prevNode);
};

#endif