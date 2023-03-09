#include <iostream>
#include <string>

using namespace std;

bool isDigital(char ch)
{
	if (ch >= '0' && ch <= '9')
		return true;
	return false;
}

double transform(string& s, int& index)
{
	int begin = index;
	double res = 0.0;
	bool exist = false;
	while (index < s.size()) {
		if (isDigital(s[index])) {
			index++;
		} else if (!exist && s[index] == '.') {
			exist = true;
			index++;
		} else {
			break;
		}
	}
	return atof(s.substr(begin, index - begin).c_str());
}

//int main()
//{
//	string content;
//	getline(cin, content);
//	int index = 0;
//	int tag = 0;//-1为－，0为无符号，1为+
//	while (index < content.size()) {
//		if (content[index] == '+') {
//			tag = 1;
//			index++;
//		} else if (content[index] == '-') {
//			tag = -1;
//			index++;
//		} else if (isDigital(content[index])) {
//			if (tag == 1)
//				cout << "+";
//			else if (tag == -1)
//				cout << "-";
//			cout << transform(content, index);
//		} else {
//			tag = 0;
//			index++;
//		}
//	}
//	return 0;
//}