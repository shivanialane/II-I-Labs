#include<iostream>
#include<string>
#define pi 3.14
class circle {
	public:
		float radius;
		void area();
		
};
void circle :: area() {
	std :: cout << pi * radius * radius;
}
int num = 100;
int main() {
	int num = 200;
	circle c1;
	c1.radius = 10;
	std :: cout << ::num << std :: endl;
	std :: cout << num << std :: endl;
	c1.area();
	return 0;
	
}


