#include "ListNode.h"
#include "LinkedList.h"
#include <iostream>

using std::to_string;
using std::cout;
using std::endl;

int main(){
	LinkedList list;
	
	cout << "List length: " << to_string(list.length()) << endl;

	for(int i=1;i<=5;i++){
		list.push(i);
	}

	cout << "List : " << list.toString() << endl;
	cout << "Head : " << to_string(list.peekFirst()->getValue()) << endl;
	cout << "Tail : " << to_string(list.peekLast()->getValue()) << endl;
	
	ListNode* element = list.pop();
	delete element;
	
	list.pushBack(6);
	list.push(7);
	
	cout << "List length: " << to_string(list.length()) << endl;

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

	ListNode* elm = list.getElementByIndex(3);
	
	cout << "Elem found with value: " << elm->getValue() << endl;
	cout << "List : " << list.toString() << endl;

	cout << "List length: " << to_string(list.length()) << endl;

	list.insertElementByIndex(11, 0);
	list.insertElementByIndex(78, 4);
	list.insertElementByIndex(44, 2);

	cout << "List length: " << to_string(list.length()) << endl;
	cout << "List : " << list.toString() << endl;


	return 0;
}