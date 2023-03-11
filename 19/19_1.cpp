#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//int main()
//{
//	string source;
//	map<string, int> m;
//	vector<string> res;
//	getline(cin, source);
//	int left = 0, right = left;
//	while (right < source.size()) {
//		while (right < source.size() && source[left] == source[right])
//			right++;
//		string piece = source.substr(left, right - left);
//		if (m.find(piece) == m.end()) {
//			m.insert(pair<string, int>(piece, 1));
//			res.push_back(piece);
//		}
//		left = right;
//	}
//	sort(res.begin(), res.end());
//	for (string s : res)
//		cout << s << endl;
//	return 0;
//}