#include<iostream>
using namespace std;

class Circle {
	private:
		double radius;
		double pi = 3.14159;
	
	public:
		Circle(double radius, double pi) {
			this -> radius = radius;
			this -> pi = pi;
		}
		
		void setRadius(double radius) {
		}
		
		double getRadius() {
			this -> radius = radius;
		}
		
		double getArea() {
			return pi * radius * radius;
		}
		
		double getDiameter() {
			return radius * 2;
		}
		
		double getCircumference() {
			return 2 * pi * radius;
		}
};

int main() {
	double radius;
	double pi;
	
	cout << "Radius: ";
	cin >> radius;
	
	Circle Circle2 = Circle (radius, pi);
	
	cout << "Area: " << Circle2.getArea() << endl;
	cout << "Diameter: " << Circle2.getDiameter() << endl;
	cout << "Circumference: " << Circle2.getCircumference();
	
	return 0;
}	
