/*抽象类(包含纯虚函数的类)不能创建对象,而包含虚函数的可以创建对象*/
/*纯虚函数只有定义没有实现，而虚函数既有定义又有实现*/
#include<iostream>
#include<stdlib.h>
using namespace std;

#define PI 3.1415

class Shape                								//基类Shape （抽象类） 
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
    virtual double getArea() = 0;						//定义纯虚函数 
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
    	double area = m_dLen * m_dWide;
    	return area;
    }
private:
    double m_dLen, m_dWide;	
};

class Circle: public Shape								//派生类Circle
{
public:
	Circle(int r)
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
		double area = PI * m_dR * m_dR;
        return area;
	}
private:
	double m_dR;
};

class Square: public Rectangle
{
public:
	Square(double x):Rectangle(x, x) 
	{
	    cout << "Square()" << endl;
	}
	~Square()
	{
		cout << "~Square()" << endl;
	}	
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
	
	cout << "请输入正方形的边长：";
	cin >> l;
	Square Squ(l);
	cout << "正方形的面积是：" << Squ.getArea() << endl; 
	
	system("pause");
	return 0;
}
