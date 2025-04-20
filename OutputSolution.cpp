#include "OutputSolution.h"
#include "Solution.h"
#include "Check.h"

void OutputSolution::setOutputData(int test, vector<int>& listData, vector<int>& expectedData) {
	setTest(test);
	setListData(listData);
	setExpectedData(expectedData);
}

void OutputSolution::printSolution(){
	Solution solution;
	Check check;
	ListNode* head = new ListNode();
	ListNode* expected = new ListNode();
	
	head->createList(_listData);
	expected->createList(_expectedData);

	cout << "============ Тест " << _test << " ============" << endl;
	cout << " Входной список: ";
	head->printList();
	cout << " Ожидаемый список: ";
	expected->printList();
	cout << " Результат: ";
	head = solution.swapPairs(head);
	head->printList();
	cout << "============ Проверка ============" << endl;
	if(check.chekList(head, expected)){
		cout << " Результат совпадает с ожидаемым" << endl;
	} else {
		cout << " Результат не совпадает с ожидаемым" << endl;
	}
	cout << "===================================\n" << endl;

}

void OutputSolution::setTest(int test){
	_test = test;
}

void OutputSolution::setListData(vector<int>& listData) {
	_listData = listData;
}

void OutputSolution::setExpectedData(vector<int>& expectedData) {
	_expectedData = expectedData;
}
