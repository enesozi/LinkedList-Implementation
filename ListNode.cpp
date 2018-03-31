#include "ListNode.h"
#include <iostream>
using namespace std;

ListNode::ListNode(int value = 0): value(value), prev(nullptr), next(nullptr){}

ListNode::~ListNode(){
	this->next = this->prev = nullptr;
	cout << "Node with value "+to_string(this->value)+" deleted" << endl;
}

int ListNode::getValue(){
  return this->value;
}

void ListNode::setValue(int value){
  this->value = value;
}

ListNode* ListNode::getNextNode(){
	return this->next;
}

ListNode* ListNode::getPrevNode(){
	return this->prev;
}

void ListNode::setNextNode(ListNode* nextNode){
	this->next = nextNode;
}

void ListNode::setPrevNode(ListNode* prevNode){
	this->prev = prevNode;
}