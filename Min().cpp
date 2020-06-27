#include <iostream>
using namespace std;
template <class T>
class CircularLinkedList {
public:struct Node {T data;
	Node* next;
	Node* prev;};
	Node* head = NULL;
	//Insert value
public: void insert(T val) {
	Node* newNode = new Node;
	(newNode->data) = val;
	newNode->next = head;
	//if the list is empty
	if (head == NULL) {
		newNode->prev = NULL;
		head = newNode;
		newNode->next = head;}
	else { Node* temp = head;
		while (temp->next != head) temp = temp->next;
		temp->next = newNode;
		newNode->next = head;
		newNode->prev = temp;}}
// A method that gets the minimum value in the list
public: T min(){	
		if (isEmpty()) return NULL;
		//	throw std::exception("Empty List!");
		T min = head->data;
		Node *it = head->next;
		while (it != head) {
			if (it->data < min) min = it->data;
			it = it->next;}
		return min;	}
// A method to check if a list is empty
public: bool isEmpty() {
	return (head->next==NULL);}};
int main(){
	CircularLinkedList<int> list;
	cout << "\n ----------------- Circular Test ----------------- \n";
	// Insert
	list.insert(5);
	list.insert(4);
	list.insert(6);
	list.insert(7);
	cout << "\n Min: "<<list.min();
	return 0;
}



