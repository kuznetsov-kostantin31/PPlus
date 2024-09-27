#include <iostream>
#include <string>
#include <sstream>
#include <format>

using namespace std;

int input(string text) {
	int data = 0;

	cout << text;

	getline(cin, text);
	stringstream(text) >> data;

	return data;
}

void operations() {
	int num_1;
	int num_2;

	char oper;

	cout << "num 1> ";
	cin >> num_1;

	cout << "num 2> ";
	cin >> num_2;

	cout << "operation: +, -, *, -> ";
	cin >> oper;

	switch (oper)
	{
	case '+':
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		break;

	case '-':
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		break;

	case '*':
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		break;

	case '/':
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		break;

	default:
		cout << "Invalid operation!" << endl;
		break;
	}

}

void ternary_oper() {
	int num_1;
	int num_2;

	cout << "num 1> ";
	cin >> num_1;

	cout << "num 2> ";
	cin >> num_2;

	num_1 > num_2 ? cout << "bigger num 1: " << num_1 << endl : cout << "bigger num 2: " << num_2 << endl;
}

void conditional_oper() {
	int age;

	cout << "Your age: ";
	cin >> age;

	if (age < 18 && age >= 0) {
		cout << "Are you a kid" << endl;
	}
	else if (age >= 18 && age < 60) {
		cout << "Are you an adult" << endl;
	}
	else if (age >= 60) {
		cout << "You are a pensioner" << endl;
	}
	else {
		cout << "Incorrect age" << endl;
	}
}

void switch_oper() {
	int day;

	cout << "Your day: ";
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7:
		cout << "Sunday" << endl;
		break;
	default:
		break;
	}
}

void baseless_transition_oper() {
	for (int i = 1; i <= 10; i++) {
		if (i == 5) {
			continue;
		}
		else if (i == 8) {
			break;
		}
		cout << i << endl;

	}
}

int Euclid(int num1, int num2) {
	while (num1 != num2) {
		if (num1 > num2) {
			num1 = num1 - num2;
		}
		else {
			num2 = num2 - num1;
		}
	}
	return num1;
}

void Unitar() {
	int num = 0, sum = 0;
	do{
		sum += num;
		cout << "Num> ";
		cin >> num;
	} while (num > -1);
	cout << "sum> " << sum << endl;
}

int main()
{
	cout << "Commands\n" << "1 - task #1(operations)\n"
		<< "2 - task #2(ternary_oper)\n"
		<< "3 - task #3(conditional_oper)\n"
		<< "4 - task #4(switch_oper)\n"
		<< "5 - task #5(baseless_transition_oper)\n"
		<< "6 - task #6(euclid)\n" 
		<< "7 - task #7(unitar)" << endl;
	for (;;) {
		int cmd = input("cmd-input> ");

		switch (cmd)
		{
		case 1:
			cout << "home task 1:" << endl;
			operations();
			break;

		case 2:
			cout << "home task 2:" << endl;
			ternary_oper();
			break;

		case 3:
			cout << "home task 3:" << endl;
			conditional_oper();
			break;
		case 4:
			cout << "home task 4:" << endl;
			switch_oper();
			break;
		case 5:
			cout << "home task 5:" << endl;
			baseless_transition_oper();
			break;
		case 6:
			cout << "home task 6:" << endl;
			int num1, num2;
			cout << "Number 1 and number 2> ";
			cin >> num1 >> num2;
			cout << "NOD> " << Euclid(num1, num2) << endl;
			break;
		case 7:
			cout << "home task 7:" << endl;
			Unitar();
			break;
		default:
			break;
		}
	}
}