#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

/*
3 2 3 8 8 2 3 -1
1 2 3 2 1 3 1 -1
*/

//int main()
//{
//	vector<int> num;
//	vector<int> group;
//	int input;
//	cin >> input;
//	while (input != -1) {
//		num.push_back(input);
//		cin >> input;
//	}
//	cin >> input;
//	while (input != -1) {
//		group.push_back(input);
//		cin >> input;
//	}
//	set<int> s;
//	map<int, int> m;
//	for (int g : group)
//		s.insert(g);
//
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//		for (int i = 0; i < num.size(); i++) {
//			if (group[i] == *it && m.find(num[i]) == m.end()) {
//				m.insert(make_pair(num[i], 1));
//			}
//			else if (group[i] == *it) {
//				m[num[i]]++;
//			}
//			else if (m.find(num[i]) == m.end()) {
//				m[num[i]] = 0;
//			}
//		}
//		cout << *it << "={";
//		for (map<int, int>::iterator itmp = m.begin(); itmp != m.end(); itmp++) {
//			if (itmp != m.begin())
//				cout << ", ";
//			cout << (*itmp).first << "=" << (*itmp).second;
//		}
//		cout << "}" << endl;
//		m.clear();
//	}
//	return 0;
//}
