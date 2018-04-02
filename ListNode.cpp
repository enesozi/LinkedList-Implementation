#include "ListNode.h"
#include <iostream>
using std::cout;
using std::endl;
using std::to_string;


ListNode::ListNode(int value): value(value), prev(nullptr), next(nullptr){}

ListNode::~ListNode(){

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