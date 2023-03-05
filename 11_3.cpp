#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

struct person {
	string name = "";
	int father = -1;
};


//int main()
//{
//	person employee[20];
//	stack<int> st;
//	string source;
//	string destination;
//	st.push(-1);
//	getline(cin, source);
//	getline(cin, destination);
//	person temp;
//	int index = 0;
//	for (int i = 0; i < source.size(); i++) {
//		if (source[i] == '(') {
//			if (temp.name != "") {
//				temp.father = st.top();
//				employee[index] = temp;
//				temp.name.clear();
//				st.push(index);
//				index++;
//			}
//		}
//		else if (source[i] == ')') {
//			if (temp.name != "") {
//				temp.father = st.top();
//				employee[index] = temp;
//				temp.name.clear();
//				index++;
//			}
//			st.pop();
//		}
//		else if (source[i] == ',') {
//			if (temp.name != "") {
//				temp.father = st.top();
//				employee[index] = temp;
//				temp.name.clear();
//				index++;
//			}
//		}
//		else {
//			temp.name.push_back(source[i]);
//		}
//	}
//	int pos = -1;
//	for (int i = 0; i < index; i++) {
//		if (employee[i].name == destination)
//			pos = i;
//	}
//	while (pos != -1) {
//		st.push(pos);
//		pos = employee[pos].father;
//	}
//	while (!st.empty()) {
//		cout << employee[st.top()].name;
//		st.pop();
//		if (!st.empty())
//			cout << ">";
//	}
//	cout << endl;
//	return 0;
//}





//typedef struct TreeNode
//{
//	string name;
//	TreeNode* father = NULL;
//	TreeNode* son = NULL;
//	TreeNode* brother = NULL;
//}*TreePtr;
//
//bool recursive(TreePtr root, string& destination, vector<string>& res)
//{
//	if (root->name == destination) {
//		res.insert(res.begin(), root->name);
//		return true;
//	}
//	for (TreePtr son = root->son; son != NULL; son = son->brother) {
//		if (recursive(son, destination, res)) {
//			res.insert(res.begin(), root->name);
//			return true;
//		}
//	}
//	return false;
//}
//
//
//int main()
//{
//	string source;
//	getline(cin, source);
//	string destination;
//	getline(cin, destination);
//	TreePtr father = NULL;
//	TreePtr now = NULL;
//	TreePtr bro = NULL;
//	string name = "";
//	for (int i = 1; i < source.size() - 1; ) {
//		if (source[i] == '(') {
//			father = now;
//			bro = NULL;
//			i++;
//		}
//		else if (source[i] == ')') {
//			now = now->father;
//			father = now->father;
//			bro = NULL;
//			i++;
//		}
//		else if (source[i] == ',') {
//			bro = now;
//			i++;
//		}
//		else {
//			while (source[i] >= 'a' && source[i] <= 'z') {
//				name.push_back(source[i++]);
//			}
//			now = new TreeNode;
//			now->name = name;
//			name.clear();
//			now->father = father;
//			if (bro) {
//				bro->brother = now;
//			} else if (father) {
//				father->son = now;
//			}
//		}
//	}
//	vector<string> res;
//	recursive(now, destination, res);
//	for (int i = 0; i < res.size(); i++) {
//		if (i != 0)
//			cout << ">";
//		cout << res[i];
//	}
//	return 0;
//}