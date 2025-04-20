#include "Check.h"

bool Check::chekList(ListNode* head, ListNode* expected){
	ListNode* curHead = head;
	ListNode* curExpected = expected;

	while(curHead != nullptr && curExpected != nullptr){
		if(curHead->val != curExpected->val){
			return false;
		}
		curHead = curHead->next;
		curExpected = curExpected->next;
	}

	if(curExpected != nullptr || curHead != nullptr) return false;
	return true;
}
