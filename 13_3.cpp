#include <iostream>
#include <string>
#include <stack>

#define data 0
#define op 1

using namespace std;

typedef struct TreeNode {
	char ch;
	int type;
	TreeNode* left = NULL;
	TreeNode* right = NULL;
}*TreePtr;

void InOrder(TreePtr root)
{
	if (root == NULL)
		return;
	cout << root->ch;
	InOrder(root->left);
	InOrder(root->right);
}


bool isAGreaterThanB(char a, char b) //a为读入，b为栈顶
{
	/*if (a == ')')
		return true;*/
	if (a == '(')
		return true;
	if (b == '(')
		return true;
	if (b == '*' || b == '/')  //无论a为+-或*/，都不可能高于栈顶
		return false;
	if (a == '*' || a == '/') //b只可能为+-（，都高于b
		return true;
	return false; //a为+-且b不为（
}


//int main()
//{
//	string expr;
//	getline(cin, expr);
//	stack<TreePtr> st_data;
//	stack<char> st_op;
//	for (int i = 0; i < expr.size(); i++) {
//		switch (expr[i]) {
//		case '+':
//		case '-':
//		case '*':
//		case '/':
//		case '(':
//			while (!st_op.empty() && !isAGreaterThanB(expr[i], st_op.top())) {
//				TreePtr second = st_data.top();
//				st_data.pop();
//				TreePtr first = st_data.top();
//				st_data.pop();
//				TreePtr nest = new TreeNode;
//				nest->ch = st_op.top();
//				st_op.pop();
//				nest->type = op;
//				nest->left = first;
//				nest->right = second;
//				st_data.push(nest);
//			}
//			st_op.push(expr[i]);
//			break;
//		case ')':
//			while (!st_op.empty() && st_op.top() != '(') {
//				TreePtr second = st_data.top();
//				st_data.pop();
//				TreePtr first = st_data.top();
//				st_data.pop();
//				TreePtr nest = new TreeNode;
//				nest->ch = st_op.top();
//				st_op.pop();
//				nest->type = op;
//				nest->left = first;
//				nest->right = second;
//				st_data.push(nest);
//			}
//			st_op.pop();
//			break;
//		default:
//			TreePtr tmp = new TreeNode;
//			tmp->type = data;
//			tmp->ch = expr[i];
//			st_data.push(tmp);
//			break;
//		}
//	}
//	while (!st_op.empty()) {
//		TreePtr second = st_data.top();
//		st_data.pop();
//		TreePtr first = st_data.top();
//		st_data.pop();
//		TreePtr nest = new TreeNode;
//		nest->ch = st_op.top();
//		st_op.pop();
//		nest->type = op;
//		nest->left = first;
//		nest->right = second;
//		st_data.push(nest);
//	}
//	TreePtr root = st_data.top();
//	st_data.pop();
//	InOrder(root);
//	return 0;
//}