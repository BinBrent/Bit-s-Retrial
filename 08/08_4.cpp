#include <iostream>
#include <vector>
using namespace std;


int isLeap(int year) {
	if (year % 100 == 0 && year % 400 == 0)
		return 29;
	if (year % 100 != 0 && year % 4 == 0)
		return 29;
	return 28;
}

int getDays(int year, int month) {
	int days[] = { 0, 31, -1, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2)
		return isLeap(year);
	return days[month];
}

void getDate(vector<int>& origin, int length) {
	int slot = getDays(origin[0], origin[1]) - origin[2] + 1;
	while (slot < length) {
		length -= slot;
		origin[2] = 1;
		if (origin[1] == 12) {
			origin[1] = 1;
			origin[0]++;
		}
		else {
			origin[1]++;
		}
		slot = getDays(origin[0], origin[1]) - origin[2] + 1;
	}
	origin[2] = origin[2] + length;
}

int getLength(vector<int>& origin, vector<int>& end) {
	int res = 0;

	int day0 = 0;
	for (int month = 1; month < origin[1]; month++)
		day0 += getDays(origin[0], month);
	day0 += origin[2];

	int day1 = 0;
	for (int month = 1; month < end[1]; month++)
		day1 += getDays(end[0], month);
	day1 += end[2];

	while (origin[0] != end[0]) {
		for (int i = 1; i <= 12; i++)
			res += getDays(origin[0], i);
		origin[0]++;
	}
	return res + day1 - day0;
}

//int main()
//{
//	vector<int> origin;
//	vector<int> end;
//	int length;
//	int year, month, day;
//	cin >> year >> month >> day;
//	origin.push_back(year), origin.push_back(month), origin.push_back(day);
//	/*cin >> year >> month >> day;
//	end.push_back(year), end.push_back(month), end.push_back(day);
//	cout << getLength(origin, end);*/
//	cin >> length;
//	getDate(origin, length);
//	for (int d : origin)
//		cout << d;
//	return 0;
//}