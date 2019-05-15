

#include <iostream>

#include "rational.h"
#include "gcd.h"
#include <chrono>
using namespace ExactArithmetic;

using std::cout;
using std::cin;
using std::endl;

using std::chrono::steady_clock;
using std::chrono::milliseconds;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;
using std::chrono::microseconds;

int main()
{
	long long int a = 128, b = 12, answer = 0;

	steady_clock::time_point startTime = steady_clock::now();
	answer = gcd(a, b);
	steady_clock::time_point finishTime = steady_clock::now();

	nanoseconds timeTakenWhole = duration_cast<nanoseconds>(finishTime - startTime);
	cout << "Result between "<< a << " " << b << " : "<<answer <<" Time taken : " << timeTakenWhole.count() << " nanoseconds." << endl;


		cout << "Enter the left operand (e.g. 1/3): ";
		Rational x;
		cin >> x;

		cout << "Enter the operator (+, -, * or /): ";
		std::string op;
		cin >> op;

		cout << "Enter the right operand (e.g. 4/9): ";
		Rational y;
		cin >> y;

		Rational result;
		if (op == "+")
		{
			result = x + y;
		}
		else if (op == "-")
		{
			result = x - y;
		}
		else if (op == "*")
		{
			result = x * y;
		}
		else if (op == "/")
		{
			result = x / y;
		}
		else
		{
			cout << "Unrecognised operator" << endl;
			return 1;
		}
		cout << result << endl;

	
    return 0;
}
