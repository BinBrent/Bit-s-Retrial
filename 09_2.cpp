#include <iostream>
#include <string>
#include <fstream>

using namespace std;


//int main()
//{
//	string dic[4];
//	int index = -1;
//	string str;
//	getline(cin, str);
//	while (str != "#") {
//		index = index == 3 ? 3 : index + 1;
//		for (int i = index; i > 0; i--) {
//			dic[i] = dic[i - 1];
//		}
//		dic[0] = str;
//		getline(cin, str);
//	}
//	ofstream out("D:\\download\\Name.txt");
//	for (int i = 0; i <= index; i++)
//		out << dic[i] << endl;
//  out.close();
//	return 0;
//}