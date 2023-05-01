//#include <iostream>
//#include <string>
//using namespace std;
//
//class Point {
//protected:
//	int x,y;
//public:
//	Point(int a = 0, int b = 0)
//	{
//	x = a; y = b;
//	}
//	void setXY(int a, int b)
//	{
//	x = a; y = b;
//	}
//	void display()
//	{
//	cout << "(" << x << "," << y << ")";
//	}
//};
//class ThreeD : public Point
//{
//protected:
//	int z;
//public:
//	ThreeD(int a = 0, int b = 0, int c = 0):Point(a,b)
//	{
//		z = c;
//	}
//	void setZ(int c)
//	{
//		z = c;
//	};
//	void display()
//	{
//		cout << "(" << x << "," << y;
//		cout << "," << z << ")";
//	}
//};

//int main()
//{
//	ThreeD* ptr = new ThreeD();
//	ptr->setXY(1, 1);
//	(*ptr).setZ(1);
//	(*ptr).display();
//	return 0;
//}