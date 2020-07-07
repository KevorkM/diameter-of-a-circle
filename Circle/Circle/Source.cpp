#include <iostream>

using namespace std;

double Diameter(double radius);
double Circumference(double radius);
double Area(double radius);

const int PI = 3.14159;

int main() {
	cout << "The radius of a circle\n" << endl;

	double radius;

	cout << "Please enter the radius of the a circle: " << endl;
	cin >> radius;

	cout << "The radius of the circle is: " << Diameter(radius) << endl;
	cout << "The circumference of the circle is: " << Circumference(radius) << endl;
	cout << "The area of the circle is: " << Area(radius) << endl;

	return 0;
}

double Diameter(double radius)
{
	return (2 * radius);
}

double Circumference(double radius)
{
	return (2 * PI * radius);
}

double Area(double radius)
{
	return (PI * radius * radius);
}