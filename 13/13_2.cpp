#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isLarge(string& l, string& r) 
{
	int index = 0;
	while (index < min(l.size(), r.size())) {
		if (l[index] == r[index])
			index++;
		else if ((l[index] - 32) == r[index])
			index++;
		else if (l[index] == (r[index] - 32))
			index++;
		else
			break;
	}
	if (index == l.size())
		return false;
	if (index == r.size())
		return true;
	if (l[index] >= 'A' && l[index] <= 'Z' && r[index] >= 'A' && r[index] <= 'Z')
		return l[index] > r[index];
	if (l[index] >= 'a' && l[index] <= 'z' && r[index] >= 'a' && r[index] <= 'z')
		return l[index] > r[index];
	if (l[index] >= 'a' && l[index] <= 'z' && r[index] >= 'A' && r[index] <= 'Z')
		return (l[index] - 32) > r[index];
	if (l[index] >= 'A' && l[index] <= 'Z' && r[index] >= 'a' && r[index] <= 'z')
		return l[index] > (r[index] - 32);
	return false;
}

//int main()
//{
//	vector<string> dic;
//	string str;
//	getline(cin, str);
//	while (str != "") {
//		dic.push_back(str);
//		getline(cin, str);
//	}
//
//	bool condition = true;
//	while (condition) {
//		condition = false;
//		for (int i = 0; i < dic.size() - 1; i++) {
//			for (int j = 0; j < dic.size() - 1; j++) {
//				if (isLarge(dic[j], dic[j + 1])) {
//					string tmp = dic[j];
//					dic[j] = dic[j + 1];
//					dic[j + 1] = tmp;
//					condition = true;
//				}
//			}
//		}
//	}
//	for (string& s : dic)
//		cout << s << endl;
//	return 0;
//}