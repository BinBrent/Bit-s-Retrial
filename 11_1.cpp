#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

//int main()
//{
//	set<string> s;
//	string str;
//	getline(cin, str);
//	while (str != "") {
//		s.insert(str);
//		getline(cin, str);
//	}
//	int bigger[26] = { 0 };
//	int lower[26] = { 0 };
//	for (set<string>::iterator it = s.begin(); it != s.end(); it++) {
//		if ((*it)[0] >= 'A' && (*it)[0] <= 'Z') {
//			bigger[(*it)[0] - 'A']++;
//		}
//		else if ((*it)[0] >= 'a' && (*it)[0] <= 'z') {
//			lower[(*it)[0] - 'a']++;
//		}
//	}
//
//	for (int i = 0; i < 26; i++) {
//		if (bigger[i] == 0)
//			continue;
//		cout << (char)('A' + i) << ", " << bigger[i] << endl;
//	}
//
//	for (int i = 0; i < 26; i++) {
//		if (lower[i] == 0)
//			continue;
//		cout << (char)('a' + i) << ", " << lower[i] << endl;
//	}
//}