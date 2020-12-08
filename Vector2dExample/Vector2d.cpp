#include "Vector2d.h"
#include<iostream>
#include<string>

Vector2d::Vector2d() {
	x = 0;
	y = 0;
}

Vector2d::Vector2d(double x, double y) {
	this->x = x;
	this->y = y;
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2) {
	this->x = x2 - x1;
	this->y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d& other) {
	this->x = other.x;
	this->y = other.y;
}

Vector2d::~Vector2d() {

}

void Vector2d::print() {
	std::cout << "X:" << x << "\tY:" << y << std::endl;
}

Vector2d Vector2d::sum(Vector2d other) {
	return Vector2d(x + other.x, y + other.y);
}

Vector2d Vector2d::sub(Vector2d other) {
	return Vector2d(x - other.x, y - other.y);
}

Vector2d Vector2d::mult(double scalar) {
	return Vector2d(x * scalar, y * scalar);
}

double Vector2d::scalarMult(Vector2d other) {
	return x * other.x + y * other.y;
}

double Vector2d::length() {
	return sqrt(pow(x, 2) + pow(y, 2));
}

double Vector2d::angle(Vector2d other) {
	return acos(this->scalarMult(other) / this->length() * other.length()) * 180 / 3.14;
}

Vector2d Vector2d::operator+(const Vector2d& vec) const {
	return Vector2d(x + vec.x, y + vec.y);
}

Vector2d Vector2d::operator-(const Vector2d& vec) const {
	return Vector2d(x - vec.x, y - vec.y);
}

Vector2d Vector2d::operator*(const double scalar) const {
	return Vector2d(x*scalar,y*scalar);
}

double Vector2d::operator*(const Vector2d& vec) const {
	return x * vec.x + y * vec.y;
}

Vector2d& Vector2d::operator++() {
	x++;
	y++;
	return *this;
}

Vector2d Vector2d::operator++(int) {
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

Vector2d& Vector2d::operator--() {
	x--;
	y--;
	return *this;
}

Vector2d Vector2d::operator--(int) {
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}

const Vector2d& Vector2d::operator+=(const Vector2d& vec) {
	x += vec.x;
	y += vec.y;
	return *this;
}

const Vector2d& Vector2d::operator-=(const Vector2d& vec) {
	x -= vec.x;
	y -= vec.y;
	return *this;
}

const Vector2d& Vector2d::operator*=(const double& scalar) {
	x *= scalar;
	y *= scalar;
	return *this;
}

Vector2d::operator string() {
	return string("(" + to_string(x) + ";" + to_string(y) + ")");
}