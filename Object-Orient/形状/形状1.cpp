#include<iostream>
#include<stdlib.h>
using namespace std;

#define PI 3.1415

class Shape                								//基类Shape 
{
public:
    Shape()
    {
    	cout << "Shape()" << endl; 
    }
    ~Shape()
    {
    	cout << "~Shape()" << endl;
    }
    double getArea()
	{
		return 0;
	} 
};

class Rectangle: public Shape							//派生类Rectangle
{
public:
    Rectangle(double l, double w)
    {
		m_dLen  = l;
		m_dWide = w;
		cout << "Rectangle()" << endl;
    }
    ~Rectangle()
    {
    	cout << "~Rectangle()" << endl;
    }
    double getArea()
    {
    	return m_dLen * m_dWide;
    }
private:
    double m_dLen, m_dWide;	
};

class Circle: public Shape								//派生类Circle
{
public:
	Circle(double r)
	{	
		m_dR = r;
		cout << "Circle()" << endl;
	}
	~Circle()
	{
		cout << "~Circle()" << endl;
	}
	double getArea()
	{
        return PI * m_dR * m_dR;
	}
private:
	double m_dR;
};

class Square: public Rectangle
{
public:
	Square(double x):Rectangle(x, x) 
	{
	    x = m_dX;
		cout << "Square()" << endl;
	}
	~Square()
	{
		cout << "~Square()" << endl;
	}
private:
    double m_dX;	
};

int main()
{
	double l, w;
	cout << "请输入矩形的长和宽：";
	cin >> l >> w; 
	Rectangle Rec(l, w);
    Shape *p1 = &Rec;
	cout << "矩形的面积是：" << Rec.getArea() << endl;
	cout << "矩形的面积是：" << p1 -> getArea() << endl;
	
	double r;
	cout << "请输入圆的半径：";
	cin >> r;
	Circle Cir(r);
	cout << "圆的面积是：" << Cir.getArea() << endl;
	
	double x;
	cout << "请输入正方形的边长：";
	cin >> x;
	Square Squ(x);
	cout << "正方形的面积是：" << Squ.getArea() << endl; 
	
	system("pause");
	return 0;
}
