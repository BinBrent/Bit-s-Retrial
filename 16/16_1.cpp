#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct StudentNode {
	string name;
	double avg_score;
	int failed = 0;
}*StudentPtr;

bool comp(StudentPtr a, StudentPtr b)
{
	return a->failed > b->failed;
}

//int main()
//{
//	vector<StudentPtr> v;
//	string name;
//	int count = 0;
//	double sum = 0;
//	int failed = 0;
//	cin >> name;
//	while (name != "#") {
//		StudentPtr temp = new StudentNode;
//		double score;
//		cin >> score;
//		while (cin.get() != '\n') {
//			failed = score < 60 ? failed + 1 : failed;
//			count++;
//			sum += score;
//			cin >> score;
//		}
//		temp->name = name;
//		temp->avg_score = sum / count;
//		temp->failed = failed;
//		v.push_back(temp);
//		failed = 0, count = 0, sum = 0;
//		cin >> name;
//	}
//	sort(v.begin(), v.end(), comp);
//	for (StudentPtr p : v) {
//		cout << p->name << ":" << p->avg_score;
//		if (p->failed >= 2)
//			cout << "-" << p->failed;
//		cout << endl;
//	}
//	return 0;
//}