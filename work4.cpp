#include <iostream> //add library (input/output)
using namespace std;//add namespace 

void Proc_30();//create variables
bool requestcheck_values();
bool Palindrome();
void output();

void Boolean_2();//create variables
bool request_check_values();
bool pairing_check();
void Output_Results();

void Integer_19();//create variables
bool InputSeconds();
int Calculateminutes();
void OutputResult();

int main() {
	int menu;//create variables
	cout << "enter task number:" << endl; //request task number
	cout << ">>> ";
	cin >> menu;
	switch (menu) { // create case menu
	case 1:Proc_30(); break;
	case 2:Boolean_2(); break;
	case 3:Integer_19(); break;
	default:cout << "Wrong number" << endl; //output wrong number
	}
	return 0;// return to OS
}
//tasks menu



// PROC 30 //
bool requestcheck_values(int &K){
	cout << "enter value^ !(0-1000)!" << endl;//request value
	cout << ">>> ";
	cin >> K;
	if (1000 > K && K > 0) {//check value
		return true;
	}
	else {
		return false;
	}
}
//request and check value

bool Palindrome(int K) {
	int k1, k2; //create variables
	k2 = K % 10; //calculate
	k1 = K / 100;

	if (k1 == k2) {
		return true;
	}
	else {
		return false;	
	}
}
//check palindrome 

void output(int pal) {
	cout << "Is palindrome" << endl;// output result
}
//output result

void Proc_30() {
	int n, pal;// create variables
	if (requestcheck_values(n)) {
		if (Palindrome(n)) {
			pal = Palindrome(n);
			output(pal);//output
		}
		else {
			cout << "is not Palindrome" << endl;//output value is not palindrome
		}
	}
	else {
		cout << "incorrect value..." << endl;//output incorrect value
	}
}
// main function



// BOOLEAN 2 //

bool request_check_values(int &A) {
	cout << "enter value:" << endl; // request valuse
	cout << ">>> ";
	cin >> A;
	if (cin && A >= 0) { //check values 
		return true;
	}
	else {  // output if values incorrect 
		return false;
	}
}
// request values and check for correct 

bool pairing_check(int A) {
	if (A % 2 == 0) { //test for pair
		return true;
	}
	else {
		return false;
	}
}
// check for pairing

void Output_Results(int check) {
	cout << "Value pair" << endl; //output results
}
//Output result

void Boolean_2() {
	int B, check; //create variables
	if (request_check_values(B)) {
		if (pairing_check(B)) {
			check = pairing_check(B);
			Output_Results(check);
		 }
		else {
			cout << "values not pair";// output not pair value
		}
	}
	else {
		cout << "values incorrect" << endl;// output incorrect value
	}
}
//main function



// INTEGER 19 //

bool InputSeconds(int &seconds) {
	cout << "enter the number of seconds:" << endl; // request valuse
	cout << ">>> ";
	cin >> seconds;
	if (cin && seconds >= 0) { //check values 
		return true; 
	}
	else {  // output if values incorrect 
		return false; 
	}
}
// request values and correctness test

int Calculateminutes(int seconds) {
	const int secondsPerminutes = 60; // 60 sec = 1 min 
	return seconds / secondsPerminutes; // calculate
}
// Calculated minutes

void OutputResult(int minutes){
	cout << "a minutes has passed since the beggining of the day: " << minutes << endl; //output
}
//Output result

void Integer_19() {
	int n, minutes; //create variables

	if (InputSeconds(n)) {
		minutes = Calculateminutes(n); //substitution with output
		OutputResult(minutes);
	}
	else {
		cout << "Incorrect value... " << endl;//output if values incorrect
	}
}
// main function