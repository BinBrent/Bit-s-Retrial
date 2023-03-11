#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string& a, string& b)
{
	int index = 0;
	int len = min(a.size(), b.size());
	for (index; index < len; index++) {
		if (a[index] < b[index])
			return true;
		else if (a[index] > b[index])
			return false;
	}
	return a.size() == len ? true : false;
}

//int main()
//{
//	vector<string> group;
//	string str;
//	getline(cin, str);
//	while (str != "") {
//		group.push_back(str);
//		getline(cin, str);
//	}
//	sort(group.begin(), group.end());
//	for (string& s : group)
//		cout << s << endl;
//	return 0;
//}