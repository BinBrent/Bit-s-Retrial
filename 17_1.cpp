#include <iostream>
#include <string>

using namespace std;

int weight[] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
char transform[] = {'1', '0', 'x', '9', '8', '7', '6', '5', '4', '3', '2'};

bool isIdentificationLegal(string& id)
{
	char d = id[id.size() - 1];
	int x = 0;
	for (int i = 0; i < 17; i++) {
		x += (id[i] - '0') * weight[i];
	}
	char y = transform[x % 11];
	return d == y;
}

//int main()
//{
//	string id;
//	getline(cin, id);
//	if (isIdentificationLegal(id))
//		cout << id << " ÕýÈ·" << endl;
//	return 0;
//}