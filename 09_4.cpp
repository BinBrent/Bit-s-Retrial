#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<string, int>a, pair<string, int> b)
{
	return a.second > b.second;
}

//int main()
//{
//	string sentence;
//	getline(cin, sentence);
//	unordered_map<string, int> m;
//	string str = "";
//	for (char ch : sentence) {
//		if (ch == ' ' || ch == ',' || ch == '.' || ch == '\t') {
//			if (str == "")
//				continue;
//			if (m.find(str) == m.end())
//				m[str] = 1;
//			else
//				m[str]++;
//			str.clear();
//		}
//		else {
//			str.push_back(ch);
//		}
//	}
//	vector<pair<string, int>> v(m.begin(), m.end());
//	sort(v.begin(), v.end(), comp);
//	for (pair<string, int> p : v) {
//		cout << p.first << ":" << p.second << endl;
//	}
//	return 0;
//}