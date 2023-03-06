#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef struct StuNode {
	int no;
	string name;
	char gender;
	int age;
	StuNode() {}
	StuNode(int no, string name, char gender, int age) {
		this->no = no;
		this->name = name;
		this->gender = gender;
		this->age = age;
	}
}*Student;

bool comp(Student a, Student b)
{
	return a->no > b->no;
}

void remove(vector<Student>& v, int no)
{
	for (vector<Student>::iterator it = v.begin(); it != v.end(); it++) {
		if ((*it)->no == no) {
			v.erase(it);
			return;
		}
	}
}

void add(vector<Student>& v, string s)
{
	Student stu = new StuNode;
	string attr = "";
	int left = 0, right = 0;
	while (s[right] != ',')
		right++;
	stu->no = atoi(s.substr(left, right - left).c_str());
	right++, left = right;
	while (s[right] != ',')
		right++;
	stu->name = s.substr(left, right - left);
	stu->gender = s[++right];
	right += 2;
	stu->age = atoi(s.substr(right).c_str());
	v.push_back(stu);
}

void present(vector<Student>& v)
{
	for (Student s : v) {
		cout << "(" << s->no << "," << s->name << "," << s->gender << "," << s->age << ")" << endl;
	}
}

//int main()
//{
//	vector<Student> v;
//	v.push_back(new StuNode(10, "wes", 'f', 23));
//	v.push_back(new StuNode(20, "ert", 'f', 45));
//	v.push_back(new StuNode(30, "str", 't', 89));
//	string input;
//	getline(cin, input);
//	while (input != "") {
//		if (input[0] == 'I') {
//			add(v, input.substr(1));
//		}
//		else if (input[0] == 'D') {
//			int no = atoi(input.substr(1).c_str());
//			remove(v, no);
//		}
//		sort(v.begin(), v.end(), comp);
//		present(v);
//		getline(cin, input);
//	}
//	return 0;
//}