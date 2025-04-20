#include <iostream>
#include <vector>
#include "Outputsolution.h"


using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int test = 0;
	vector<int> headData, expectedData;

	OutputSolution outputSolution;

	test++;
	headData = { 1, 2, 3, 4 };
	expectedData = { 2, 1, 4, 3 };
	outputSolution.setOutputData(test, headData, expectedData);
	outputSolution.printSolution();

	test++;
	headData = { };
	expectedData = { };
	outputSolution.setOutputData(test, headData, expectedData);
	outputSolution.printSolution();

	test++;
	headData = { 1 };
	expectedData = { 1 };
	outputSolution.setOutputData(test, headData, expectedData);
	outputSolution.printSolution();

	test++;
	headData = { 1, 2, 3 };
	expectedData = { 2, 1, 3 };
	outputSolution.setOutputData(test, headData, expectedData);
	outputSolution.printSolution();
}
