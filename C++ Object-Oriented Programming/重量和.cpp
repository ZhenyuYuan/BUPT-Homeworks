#include<iostream>
#include<stdlib.h>
using namespace std;

class Car;                                              //声明Car类 

//Boat类 
class Boat
{
public:
	friend double TotalWeight(Boat &b, Car &c);         //声明友元函数 
	Boat(double weighe1);
	~Boat(){};
private:
	double m_dWeight1;	
};
Boat::Boat(double weight1)
{
	m_dWeight1 = weight1;
}

//Car类 
class Car
{
public:
	friend double TotalWeight(Boat &b, Car &c);         //声明友元函数 
	Car(double weight2);
	~Car(){};
private:
    double m_dWeight2;	
};
Car::Car(double weight2)
{
	m_dWeight2 = weight2;
}

double TotalWeight(Boat &b, Car &c)
{
	return b.m_dWeight1 + c.m_dWeight2;
}


int main()
{
	cout << "请输入两物品的重量:";
	double w1, w2;
	cin >> w1 >> w2;
	
	Boat B(w1);
	Car  C(w2);
	
	cout << "两物品的重量和是:" << TotalWeight(B, C) << endl;
	
	system("pause");
	return 0;
}
