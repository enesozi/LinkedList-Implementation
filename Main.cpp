#include "ListNode.h"
#include "LinkedList.h"
#include <iostream>

using std::to_string;
using std::cout;
using std::endl;
using std::cin;

void displayMenu(){
	cout << "Please select one of the followings from the menu:" << endl;
	cout << "1:  Push element at front" << endl;
	cout << "2:  Push element at back" << endl;
	cout << "3:  Peek the first element" << endl;
	cout << "4:  Peek the last element" << endl;
	cout << "5:  Remove and get the last element" << endl;
	cout << "6:  Find element with the value" << endl;
	cout << "7:  Find and extract element with the value" << endl;
	cout << "8:  Get element by index" << endl;
	cout << "9:  Insert element by index" << endl;
	cout << "10: Print length" << endl;
	cout << "11: Print list content" << endl;
	cout << "12: Clear the list" << endl;
	cout << "13: Sort the list" << endl;
	cout << "0:  To exit the program" << endl;
}

int main(){
	cout << "Welcome to Simple LinkedList Implementation" << endl;
	
	LinkedList list;
	int answer;
	int value;
	int index;
	ListNode* element;
	int asc;
	while(true){
		displayMenu();
		cin >> answer;
		switch(answer){
			case 1:
			{
				cout << "Please enter value" << endl;
				cin >> value;
				list.push(value);
				break;				
			}
			case 2:
			{
				cout << "Please enter value" << endl;
				cin >> value;		
				list.pushBack(value);	
				break;									
			}
			case 3:
			{
				if(list.peekFirst() != nullptr)
					cout << "Head : " << to_string(list.peekFirst()->getValue()) << endl;
				else
					cout << "There is no element in the list" << endl;					
				break;				
			}
			case 4:
			{
				if(list.peekLast() != nullptr)
					cout << "Tail : " << to_string(list.peekLast()->getValue()) << endl;
				else
					cout << "There is no element in the list" << endl;				
				break;				
			}
			case 5:
			{
				element = list.pop();
				if(element != nullptr)
					delete element;
				else
					cout << "There is no element in the list" << endl;
				break;				
			}
			case 6:
			{
				cout << "Please enter value" << endl;
				cin >> value;
				element = list.findElement(value);
				if(element != nullptr)
					cout << "Element found" << endl;
				else
					cout << "There is no such element" << endl;
				break;				
			}
			case 7:
			{
				cout << "Please enter value" << endl;
				cin >> value;				
				element = list.findAndExtractElement(value);
				if(element != nullptr){
					cout << "Element found" << endl;
					delete element;
				}
				else{
					cout << "There is no such element" << endl;
				}
				break;			

			}
			case 8:
			{
				cout << "Please enter index" << endl;
				cin >> index;
				element = list.getElementByIndex(index);
				if(element != nullptr)
					cout << "Element found with value: " << to_string(element->getValue()) << endl;
				else
					cout << "There is no such index" << endl;
				break;
			}
			case 9:
			{
				cout << "Please enter index" << endl;
				cin >> index;
				cout << "Please enter value" << endl;
				cin >> value;
				bool result = list.insertElementByIndex(value, index);
				if(result)
					cout << "Element inserted successfuly" << endl;
				else
					cout << "There is no such index" << endl;
				break;
			}
			case 10:
			{
				cout << "List length: " << to_string(list.length()) << endl;
				break;
			}
			case 11:
			{
				cout << "List: " << list.toString() << endl;
				break;
			}
			case 12:
			{
				list.clear();
				break;
			}
			case 13:
			{
				cout << "Enter 1 for ascending. Enter 0 for descending" << endl;
				cin >> asc;
				list.sort(asc);
				cout << "List: " << list.toString() << endl;
				break;
			}
			case 0:
			{
				cout << "Bye!" << endl;
				return 0;
			}
			default:
			{
				displayMenu();
			}										
		}
	}
	return 0;
}