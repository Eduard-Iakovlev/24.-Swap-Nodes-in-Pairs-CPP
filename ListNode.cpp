#include "ListNode.h"
#include <iostream>

ListNode::ListNode() : val(0), next(nullptr) {}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode* next) : val(x), next(next) {}

void ListNode::createList(vector<int> data){
	if (data.empty()) {
		this->val = NULL;
		return;
	}
	this->val = data[0];
	ListNode* current = this;
	for (int i = 1; i < data.size(); ++i) {
		current->next = new ListNode(data[i]);
		current = current->next;
	}
	current->next = nullptr;
}

void ListNode::printList(){
	if (this->val == NULL) {
		cout << "[]" << endl;
		return;
	}
	ListNode* current = this;
	cout << "[ ";
	while (current != nullptr) {
		cout << current->val;
		if (current->next != nullptr) cout << " -> ";
		current = current->next;
	}
	cout << " ]";
	cout << endl;
}
