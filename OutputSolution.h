#pragma once
#include <vector>
#include <iostream>
#include "ListNode.h"

using namespace std;

class OutputSolution{
public:
	OutputSolution() = default;

	void setOutputData(int test, vector<int>& listData, vector<int>& expectedData);
	
	void printSolution();
private:
	int _test;
	vector<int> _listData, _expectedData;

	void setTest(int test);
	void setListData(vector<int>& listData);
	void setExpectedData(vector<int>& expectetData);
};

