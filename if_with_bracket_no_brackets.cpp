#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

#see the file in the other folder
#include "std_lib_facilities.h"

//Compare out_number_db_almost and out_number_db_almost2
//You would find that with {} the if statements can be nested in CPP
//otherwise an if statement can follow only arguement (end with semicolon)
//The alternative way is not use {} and just directly follow the arguement. 

//Drill-5
void out_number_db_almost() {
	double num1 = 0.1;
	double num2 = 1.2;
	//note you have to use 1.0 otherwise it is not a float in C++ or Java
	double diff = 1.0/100;
	const double diff_thrd = 1.0/100;
	if (diff != 0.01) {
		cout << "note the difference constant is wrong !";
	}
	cout << "please enter two float numbers and input enter to continue\n";
	//what happend here is that the two if statements does not nest
	//let's first try nest them and then write if seperately
	while (cin>>num1 && cin>>num2) {
		  if (num1 < num2)
			   {cout << "the smaller value is:\n" << num1 << "\n"
				 << "the larger value is:\n" << num2 << "\n";
				 diff = num2 - num1;
				 if (diff < diff_thrd)
				    cout << "the numbers are almost equal\n";}
			else if (num1 > num2)
					{cout << "the smaller value is:\n" << num2 << "\n"
					<< "the larger value is:\n" << num1 << "\n";
					diff = num2 - num1;
 				  if (diff < diff_thrd)
 				    cout << "the numbers are almost equal\n";}
			else if (num1 == num2)
					{cout << "Two numbers are equal\n"<< "the first number is:\n" << num1 << "\n"
					<< "the second number is:\n" << num2 << "\n";}
			cout << "Exit the program by entering '|'" << "\n";
	}
}

//try without brackets
void out_number_db_almost2() {
	double num1 = 0.1;
	double num2 = 1.2;
	//note you have to use 1.0 otherwise it is not a float in C++ or Java
	double diff = 1.0/100;
	const double diff_thrd = 1.0/100;
	if (diff != 0.01) {
		cout << "note the difference constant is wrong !";
	}
	cout << "please enter two float numbers and input enter to continue\n";
	//what happend here is that the two if statements does not nest
	//let's first try nest them and then write if seperately
	while (cin>>num1 && cin>>num2) {
		  if (num1 < num2)
			   cout << "the smaller value is:\n" << num1 << "\n"
				 << "the larger value is:\n" << num2 << "\n";
			else if (num1 > num2)
					cout << "the smaller value is:\n" << num2 << "\n"
					<< "the larger value is:\n" << num1 << "\n";
			else if (num1 == num2)
					cout << "Two numbers are equal\n"<< "the first number is:\n" << num1 << "\n"
					<< "the second number is:\n" << num2 << "\n";
			//get the difference of two numbers;
			diff = num1 - num2;
			if (diff < 0)
			   // makesure diff is a postiive number
			   diff = -diff;
			if (diff < diff_thrd)
				 cout << "the numbers are almost equal\n";
			cout << "Exit the program by entering '|'" << "\n";
	}
}

int main() {
	  //Drill-1
    // out_number();
		//Drill-2 and Drill-3
		// out_number_small_large();
		//Drill-4
		// out_number_db();
		//Drill-5
		// out_number_db_almost();
		out_number_db_almost2();
}
