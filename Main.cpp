#include "ListNode.cpp"
#include "LinkedList.cpp"
using namespace std;

int main(){
	LinkedList list;
	for(int i=1;i<=5;i++){
		list.push(new ListNode(i));
	}

	cout << "List : " << list.toString() << endl;
	cout << "Head : " << to_string(list.peekFirst()->getValue()) << endl;
	cout << "Tail : " << to_string(list.peekLast()->getValue()) << endl;
	
	ListNode* tail = list.pop();
	delete tail;
	list.pushBack(new ListNode(6));
	list.push(new ListNode(7));
	
	cout << "Head : " << to_string(list.peekFirst()->getValue()) << endl;
	cout << "Tail : " << to_string(list.peekLast()->getValue()) << endl;
	cout << "List : " << list.toString() << endl;

	return 0;
}