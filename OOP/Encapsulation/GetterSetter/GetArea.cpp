#include <iostream>
using namespace std;

class Circle {
private:
	float area;
	float radius;

public:
	void getRadius()
	{
		cout << "Enter radius\n";
		cin >> radius;
	}
	void findArea()
	{
		area = 3.14 * radius * radius;
		cout << "Area of circle=" << area;
	}
};
int main()
{
	Circle cir;
	cir.getRadius(); 
	cir.findArea(); 
}
