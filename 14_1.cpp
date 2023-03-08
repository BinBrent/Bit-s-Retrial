#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//int main()
//{
//	vector<int> vec;
//	int file;
//	cin >> file;
//	while (file != -1) {
//		bool exist = find(vec.begin(), vec.end(), file) != vec.end();
//		if (vec.size() < 3 && !exist) {
//			vec.insert(vec.begin(), file);
//		}
//		else if (vec.size() == 3 && !exist) {
//			vec.erase(vec.begin() + 2);
//			vec.insert(vec.begin(), file);
//		}
//		for (int i = 0; i < vec.size(); i++) {
//			if (i != 0)
//				cout << ",";
//			cout << vec[i];
//		}
//		cout << endl;
//		cin >> file;
//	}
//	
//	return 0;
//}