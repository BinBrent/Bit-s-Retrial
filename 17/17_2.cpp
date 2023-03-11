#include <iostream>
#include <string>

using namespace std;

bool binarySearch(int nums[], int left, int right, int dest, int times)
{
	if (left > right)
		return false;
	int mid = (left + right) >> 1;
	if (nums[mid] == dest) {
		cout << dest << "�ǵ�" << mid + 1 << "������ ���Ҵ���Ϊ" << times << endl;
		return true;
	} else if (nums[mid] < dest) {
		return binarySearch(nums, mid + 1, right, dest, times + 1);
	} else {
		return binarySearch(nums, left, mid - 1, dest, times + 1);
	}
}

//int main()
//{
//	int nums[10];
//	int dest;
//	for (int i = 0; i < 10; i++)
//		cin >> nums[i];
//	cin >> dest;
//	if (!binarySearch(nums, 0, 9, dest, 1))
//		cout << "����ʧ��" << endl;
//	return 0;
//}