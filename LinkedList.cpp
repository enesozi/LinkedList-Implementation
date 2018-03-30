#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList(): head(NULL), tail(NULL){}

LinkedList::~LinkedList() {
	  this->clear();
	  cout << "LinkedList destroyed" << endl;

}

void LinkedList::push(ListNode* node)
{
 	if(head==NULL){
		 head = tail = node;

	}else{
		 tail->setNextNode(node);
		 node->setPrevNode(tail);
		 tail = node;
	}
}

ListNode* LinkedList::getHeadNode(){
	return this->head;
}

ListNode* LinkedList::getTailNode(){
	return this->tail;
}

string LinkedList::toString(){
	string content = "";
	for (ListNode* p = head; p->getNextNode() != NULL; p = p->getNextNode()) {
      content += to_string(p->getValue())+" -> ";
    }
    content += to_string(tail->getValue());
    return content;
}

void LinkedList::clear() {
	  ListNode* T = tail;
	      while(T != NULL)
	      {
	          ListNode* T2 = T;
	          T = T->getPrevNode();
	          delete T2;
	      }
}