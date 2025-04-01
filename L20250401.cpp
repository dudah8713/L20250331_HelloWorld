#include <iostream>

using namespace std;

int main()
{
	int LValue, RValue;
	char Operator;

	cout << "Enter two integers" << endl;
	cin >> LValue >> RValue;
	cout << "Enter operator" << endl;
	cin >> Operator;

	switch (Operator)
	{
		case '+':
			cout << LValue + RValue << endl;
			break;
		case '-':
			cout << LValue - RValue << endl;
			break;
		case '*':
			cout << LValue * RValue << endl;
			break;
		case '/':
			cout << LValue * RValue << endl;
			break;
	}

	float LValue2, RValue2;
	float Output = 0.f;

	cout << "Enter two floats" << endl;
	cin >> LValue2 >> RValue2;
	cout << "Enter operator" << endl;
	cin >> Operator;

	switch (Operator)
	{
	case '+':
		Output = LValue2 + RValue2;
		break;
	case '-':
		Output = LValue2 - RValue2;
		break;
	case '*':
		Output = LValue2 * RValue2;
		break;
	case '/':
		if(RValue2 == 0)
		{
			cout << "Division by zero" << endl;
			return 1;
		}
		Output = LValue2 / RValue2;
		break;
	}

	cout << Output;

	return 0;
}