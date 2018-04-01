#include "LinkedList.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::to_string;

LinkedList::LinkedList(): head(nullptr), tail(nullptr){}

LinkedList::~LinkedList() {
	  this->clear();
	  cout << "LinkedList destroyed" << endl;

}

void LinkedList::push(ListNode* node){
 	if(head == nullptr){
		 head = tail = node;
	}else{
		 head->setPrevNode(node);
		 node->setNextNode(head);
		 head = node;
	}
}

void LinkedList::pushBack(ListNode* node){
 	if(head == nullptr){
		 head = tail = node;

	}else{
		 tail->setNextNode(node);
		 node->setPrevNode(tail);
		 tail = node;
	}
}

ListNode* LinkedList::peekFirst(){
	return this->head;
}

ListNode* LinkedList::peekLast(){
	return this->tail;
}

string LinkedList::toString(){
	string content = "";
	for (ListNode* p = head; p != nullptr; p = p->getNextNode()) {
      content += to_string(p->getValue());
      
      if(p->getNextNode() != nullptr) content += " <-> ";    

    }
    
    return content;
}

void LinkedList::clear() {
	  ListNode* T = tail;
	      while(T != nullptr)
	      {
	          ListNode* T2 = T;
	          T = T->getPrevNode();
	          delete T2;
	      }
}

ListNode* LinkedList::pop(){
 	if(tail == nullptr){
		 return nullptr;
	}else{
		 ListNode* T = tail;		 
		 if(tail->getPrevNode() != nullptr){
		 	tail = tail->getPrevNode();
		 	tail->setNextNode(nullptr);	
		 }else{
		 	head = tail = nullptr;	
		 }
		 return T;
	}
}

ListNode* LinkedList::findElement(int value){
	  if(head == nullptr) return nullptr;
	  ListNode* p = head;
	  while(p != nullptr && p->getValue() != value) p = p->getNextNode();
	  return p;
}

ListNode* LinkedList::findAndExtractElement(int value){
	ListNode* p = findElement(value);
	if(p == nullptr) return nullptr;
	else{
		if(p == head){
			head = head->getNextNode();
			head->setPrevNode(nullptr);	
		}else if(p == tail){
			tail = tail->getPrevNode();
			tail->setNextNode(nullptr);	
		}else{
		    ListNode* prevNode = p->getPrevNode();
		    ListNode* nextNode = p->getNextNode();
		    prevNode->setNextNode(nextNode);
		    nextNode->setPrevNode(prevNode);
		}
	}
	return p;
}