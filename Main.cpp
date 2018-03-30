#include "ListNode.cpp"
#include "LinkedList.cpp"
using namespace std;

int main(){
	LinkedList list;
	for(int i=1;i<=5;i++){
		list.push(new ListNode(i));
	}

	cout << "List : " << list.toString() << endl;

	return 0;
}