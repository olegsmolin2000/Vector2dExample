#pragma once
#include<string>
using namespace std;
class Vector2d
{
private:
	double x, y;
public:
	Vector2d();
	~Vector2d();

	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d&);

	void setx(double value) { x = value; };
	int getx() { return x; };
	void sety(double value) { y = value; };
	int gety() { return y; };

	void print(void);

	Vector2d sum(Vector2d);
	Vector2d sub(Vector2d);
	Vector2d mult(double);
	double scalarMult(Vector2d);
	double length();
	double angle(Vector2d);

	Vector2d operator+(const Vector2d&) const;
	Vector2d operator-(const Vector2d&) const;
	Vector2d operator*(const double) const;
	double operator*(const Vector2d&) const;
	friend Vector2d operator*(double, Vector2d&);

	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);

	const Vector2d& operator+=(const Vector2d&);
	const Vector2d& operator-=(const Vector2d&);
	const Vector2d& operator*=(const double&);

	operator string();
};

