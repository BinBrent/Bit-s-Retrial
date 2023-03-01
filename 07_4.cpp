#include <iostream>
#include <vector>
using namespace std;

class Student {

public:
	Student() {}
	int getNum() { return num; }
	char* getName() { return name; }
	friend ostream& operator<<(ostream&, Student&);

private:
	char name[10];
	int num;
};

ostream& operator<<(ostream& output, Student& s) {
	output << s.getNum() << " " << s.getName();
	return output;
}

bool comp1(Student a, Student b) {
	return a.getNum() < b.getNum();
}

bool comp2(Student a, Student b) {
	return a.getNum() > b.getNum();
}


