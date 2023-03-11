#include <iostream>

using namespace std;

class CPoint
{
public:
	CPoint() {}
	CPoint(int x, int y) {
		this->x = x;
		this->y = y;
	}
	float operator-(CPoint& b) const{
		float abs_x = this->x - b.x;
		float abs_y = this->y - b.y;
		float distance = sqrt(abs_x * abs_x + abs_y * abs_y);
		return distance;
	}
	void setXandY(int x, int y) {
		this->x = x;
		this->y = y;
	}

private:
	int x;
	int y;
};


//int main() 
//{
//	CPoint a, b;
//	int x1, x2, y1, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//	a.setXandY(x1, y1);
//	b.setXandY(x2, y2);
//	cout << a - b;
//	return 0;
//}


