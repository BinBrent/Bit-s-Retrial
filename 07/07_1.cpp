#include <iostream>

using namespace std;

float totalHeight(float present_h, int n)
{
	if (n == 0)
		return present_h;

	return present_h + totalHeight(present_h / 2, n - 1);
}

//int main()
//{
//	int n;
//	float H;
//	cin >> n;
//	cin >> H;
//	cout << totalHeight(H, n);
//	return 0;
//}