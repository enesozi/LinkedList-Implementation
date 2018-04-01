#include "ListNode.h"
#include "LinkedList.h"
#include <iostream>

using std::to_string;
using std::cout;
using std::endl;

int main(){
	LinkedList list;
	for(int i=1;i<=5;i++){
		list.push(new ListNode(i));
	}

	cout << "List : " << list.toString() << endl;
	cout << "Head : " << to_string(list.peekFirst()->getValue()) << endl;
	cout << "Tail : " << to_string(list.peekLast()->getValue()) << endl;
	
	ListNode* element = list.pop();
	delete element;
	
	list.pushBack(new ListNode(6));
	list.push(new ListNode(7));
	
	element = list.findElement(6);
	cout << "Elem found : " << std::boolalpha << (element == nullptr ? false:true)  << endl;
	cout << "Head : " << to_string(list.peekFirst()->getValue()) << endl;
	cout << "Tail : " << to_string(list.peekLast()->getValue()) << endl;
	cout << "List : " << list.toString() << endl;

	element = list.findAndExtractElement(7);
	delete element;
	cout << "Head : " << to_string(list.peekFirst()->getValue()) << endl;
	cout << "Tail : " << to_string(list.peekLast()->getValue()) << endl;
	cout << "List : " << list.toString() << endl;

	element = list.findAndExtractElement(3);
	delete element;
	cout << "Head : " << to_string(list.peekFirst()->getValue()) << endl;
	cout << "Tail : " << to_string(list.peekLast()->getValue()) << endl;
	cout << "List : " << list.toString() << endl;

	// Result returned by value
	ListNode elm = list.getElementByIndex(3);
	
	cout << "Elem found with value: " << elm.getValue() << endl;
	cout << "List : " << list.toString() << endl;

	return 0;
}