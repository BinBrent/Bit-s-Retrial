#include <iostream>

using namespace std;

class CPoint
{
public:
	CPoint() {}
	CPoint(double x, double y) {
		this->x = x;
		this->y = y;
	}
	double operator-(CPoint& b) const {
		double abs_x = this->x - b.x;
		double abs_y = this->y - b.y;
		double distance = sqrt(pow(abs_x, 2) + pow(abs_y, 2));
		return distance;
	}
	void setXandY(double x, double y) {
		this->x = x;
		this->y = y;
	}

private:
	double x;
	double y;
};

bool isMax(double a, double b, double c) {
	if (a >= b && a >= c)
		return true;
	return false;
}


class CTriangle {
public:
	CTriangle() {}
	void setPoint(double x1, double y1, double x2, double y2, double x3, double y3) {
		p1.setXandY(x1, y1);
		p2.setXandY(x2, y2);
		p3.setXandY(x3, y3);
	}

	bool isRightTriangle() {
		//cout << (p1 - p2) << (p1 - p3) << (p3 - p2) << endl;
		cout << (p1 - p2) + (p1 - p3) + (p3 - p2) << endl;
		double l1 = pow((p1 - p2), 2);
		double l2 = pow((p1 - p3), 2);
		double l3 = pow((p3 - p2), 2);
		//cout << l1 << l2 << l3;
		if (isMax(l3, l1, l2) && l3 == l1 + l2) {
			return true;
		} else if (isMax(l2, l1, l3) && l2 == l1 + l3) {
			return true;
		} else if (isMax(l1, l2, l3) && l1 == l2 + l3) {
			return true;
		}
		return false;
	}

private:
	CPoint p1;
	CPoint p2;
	CPoint p3;
};

//int main() 
//{
//	CTriangle t;
//	double x1, x2, y1, y2, x3, y3;
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	t.setPoint(x1, y1, x2, y2, x3, y3);
//	if (t.isRightTriangle())
//		cout << "YES";
//	else
//		cout << "NO";
//	return 0;
//}