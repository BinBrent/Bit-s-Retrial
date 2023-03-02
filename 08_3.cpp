#include <iostream>
#include <vector>
using namespace std;

class ZeroDiv {};
class BeyondIndex {};
//int main()
//{
//	double source, div;
//	int index;
//	vector<int> arr;
//	arr.clear();
//	arr.push_back(6);
//	cin >> source >> div;
//	cin >> index;
//	try {
//		if (div == 0) {
//			throw ZeroDiv();
//		}
//		if (index >= arr.size()) {
//			throw BeyondIndex();
//		}
//	}
//	catch (ZeroDiv) {
//		cout << "division is zero";
//	}
//	catch(BeyondIndex) {
//		cout << "out of index";
//	}
//	catch (...) {
//	}
//	return 0;
//}