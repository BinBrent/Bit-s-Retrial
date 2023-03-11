#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortv(vector<int>& v) 
{
	sort(v.begin(), v.end());
}

void replace(vector<int>& v, int m, int n)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		if (*it == m)
			*it = n;
}

void remove(vector<int>& v, int t)
{
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == t) {
			v.erase(v.begin() + i);
			i--;
		}
	}
}

void add(vector<int>& v, int t)
{
	v.push_back(t);
}

//int main()
//{
//	char op;
//	vector<int> v;
//	int t, n, m;
//	cin >> op;
//	while (op != '#') {
//		switch (op) {
//		case 'a':
//			cin >> t;
//			add(v, t);
//			break;
//		case 'c':
//			cin >> op >> m >> op >> n;
//			replace(v, m, n);
//			break;
//		case 'd':
//			cin >> t;
//			remove(v, t);
//			break;
//		case 's':
//			sortv(v);
//			break;
//		default:;
//		}
//		for (int num : v)
//			cout << num << endl;
//		cin >> op;
//	}
//	return 0;
//}