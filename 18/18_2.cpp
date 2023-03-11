#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

void getCount(int lower, int upper, map<int, int>& m)
{
	for (int i = lower; i <= upper; i++) {
		if (i % 2 == 1)
			continue;
		for (int left = 2; left <= i / 2; left++) {
			int right = i - left;
			if (isPrime(left) && isPrime(right)) {
				//cout << left << " " << right << endl;
				if (m.find(left) == m.end()) {
					m.insert(pair<int, int>(left, 1));
				} else {
					m[left]++;
				}
				if (m.find(right) == m.end()) {
					m.insert(pair<int, int>(right, 1));
				}
				else {
					m[right]++;
				}
			}
		}
	}
}

bool comp(pair<int, int> a, pair<int, int> b)
{
	if (a.second != b.second)
		return a.second > b.second;
	return a.first < b.first;
}

//int main()
//{
//	map<int, int> m;
//	int left, right;
//	vector<pair<int, int>> v;
//	cin >> left >> right;
//	getCount(left, right, m);
//	for (pair<int, int> p : m) {
//		//cout << p.first << ":" << p.second << endl;
//		v.push_back(p);
//	}
//	sort(v.begin(), v.end(), comp);
//	for (pair<int, int> p : v) {
//		cout << p.first << ":" << p.second << endl;
//	}
//	return 0;
//}
