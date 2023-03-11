#include <iostream>
#include <string>

using namespace std;

bool isSymmetry(string& s)
{
	if (s.size() == 0 || s.size() == 1)
		return true;
	int left = 0, right = s.size() - 1;
	while (left < right) {
		if (s[left] != s[right])
			return false;
		left++, right--;
	}
	return true;
}

//int main()
//{
//	string s;
//	getline(cin, s);
//	if (isSymmetry(s)) {
//		cout << "1" << endl;
//	}
//	else {
//		cout << "0" << endl;
//	}
//	return 0;
//}