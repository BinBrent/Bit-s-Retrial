#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef struct ListNode {
	int tag = 0;
	union {
		char data;
		struct {
			ListNode* next, * son;
		}ptr;
	}subNode;
}*ListPtr;

int getDepth(ListPtr p)
{
	int deepest = 0;
	for (ListPtr t = p; t != NULL; t = t->subNode.ptr.next) {
		if (t->tag = 1)
			deepest = max(deepest, getDepth(t->subNode.ptr.son));
	}
	return 1 + deepest;
}

//int main()
//{
//	stack<char> st;
//	string str;
//	getline(cin, str);
//	int n = 0, res = 0;
//	for (char ch : str) {
//		switch (ch) {
//		case '{':
//			n++;
//			st.push(ch);
//			res = max(n, res);
//			break;
//		case '}':
//			n--;
//			st.pop();
//			break;
//		default:
//			break;
//		}
//	}
//	cout << res << endl;
//	return 0;
//}