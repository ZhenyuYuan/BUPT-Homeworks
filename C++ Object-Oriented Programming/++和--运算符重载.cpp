/*运算符前置时，函数返回当前对象的值，故用引用。
而运算符后置时，函数当返回进行运算前的值，故不用引用*/ 
#include<iostream>
#include<stdlib.h>
using namespace std;

class Point
{
public:
	Point (int x, int y);
	~Point() {};
	Point &operator++();					//前置++
	Point  operator++(int);					//后置++,用int进行区分 
	Point &operator--();					//前置-- 
	Point  operator--(int);					//后置-- 用int进行区分 
	void get_XY();
private:
	int m_iX, m_iY;	
};

Point::Point(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

Point &Point::operator++()
{
	m_iX ++;
	m_iY ++;
	return *this;
}

Point Point::operator++(int)
{
	Point old(*this);          				//定义临时变量old，采用直接赋值的方法，使用默认拷贝构造函数 
	this -> m_iX ++;
	this -> m_iY ++;
	//return *this;							
	return old; 							 //实现返回this++之前的值
}

Point &Point::operator--()
{
	m_iX --;
	m_iY --;
	return *this;
}

Point Point::operator--(int)
{
	Point old(*this);          				//定义临时变量old，采用直接赋值的方法，使用默认拷贝构造函数 
	this -> m_iX --;
	this -> m_iY --;
	//return *this; 							//实现返回 this-- 之前的值 
	return old;
}

void Point::get_XY()
{
	cout << "(x, y) = ";
	cout << "(" << m_iX << ", ";
	cout << m_iY << ")" << endl;
}

int main()
{
	int x, y;
	
	cout << "请输入 x , y :";
	cin >> x >> y;
	Point poi1(x, y);	
	cout << " ++point1 : "; 
	(++poi1).get_XY();
	
	//cout << "请输入 x , y :";
	//cin >> x >> y;
	Point poi2(x, y);
	cout << " point2++ : ";
	(poi2++).get_XY();
	
	//cout << "请输入 x , y :";
	//cin >> x >> y;
	Point poi3(x, y);
	cout << " --point3 : "; 
	(--poi3).get_XY();
	
	//cout << "请输入 x , y :";
	//cin >> x >> y;
	Point poi4(x, y);
	cout << " point4-- : ";
	(poi4--).get_XY();
	
	system("pause");
	return 0;
}
