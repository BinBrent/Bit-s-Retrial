#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;


bool isHigher(char in, char top) {
	if (in == '+' || in == '-') {
		if (top == '(')
			return true;
		else
			return false;
	}
	if (in == '(')
		return true;
	if (in == ')')
		return false;
	if (in == '*' || in == '/') {
		if (top == '*' || top == '/')
			return false;
		else
			return true;
	}
	return false;
}

void calculate(char op, stack<double>& num_stack)
{
	double b = num_stack.top();
	num_stack.pop();
	double a = num_stack.top();
	num_stack.pop();
	double res = 0;
	switch (op) {
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	default:;
	}
	num_stack.push(res);
}

void dealWithOp(char ch, stack<char>& op_stack, stack<double>& num_stack)
{
	if (op_stack.empty()) {
		op_stack.push(ch);
		return;
	}
	while (!isHigher(ch, op_stack.top())) {
		char op = op_stack.top();
		op_stack.pop();
		if (ch == ')' && op == '(')
			return;
		calculate(op, num_stack);
	}
	op_stack.push(ch);
}

int dealWithNum(string& input, int left, int right)
{
	int res = 0;
	for (int i = left; i < right; i++) {
		res = res * 10 + (input[i] - '0');
	}
	return res;
}

int main()
{
	stack<char> op_stack;
	stack<double> num_stack;
	string input;
	getline(cin, input);
	int left = 0;
	int num = 0;
	int right = 1;
	while (right < input.size()) {
		if (input[left] >= '0' && input[left] <= '9') {
			while (right < input.size() && input[right] >= '0' && input[right] <= '9')
				right++;
			num_stack.push(dealWithNum(input, left, right));
			left = right;
		}
		else {
			dealWithOp(input[left], op_stack, num_stack);
			left++, right++;
		}
	}
	while (!op_stack.empty()) {
		calculate(op_stack.top(), num_stack);
		op_stack.pop();
	}
	cout << num_stack.top();
	return 0;
}