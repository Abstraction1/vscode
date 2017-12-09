#include <iostream>
#include "src/example1.h"
#include "src/example2.h"
#include "src/example3.h"

int main() {
	Exmpl_1 object1_1 ( 10, 10 ), object2_1 ( 5, 3 ), object3_1;
	int x1, y1;
	object3_1 = object1_1 + object2_1;
	object3_1.GetXY ( x1, y1 );
	std::cout << "( object1_1 + object2_1 ) X: " << x1 << ", Y: " << y1 << "\n";
	std::cout << "-----------------------------------------------------------\n";
	
	Exmpl_2 obj1_2 ( 10, 10 ), obj2_2 ( 5, 3 ), obj3_2;
	int x2, y2;
	obj3_2 = obj1_2 + obj2_2;
	obj3_2.GetXY ( x2, y2 );
	std::cout << "( object1_2 + object2_2 ) X: " << x2 << ", Y: " << y2 << "\n";
	
	obj3_2 = obj1_2 - obj2_2;
	obj3_2.GetXY ( x2, y2 );
	std::cout << "( object1_2 - object2_2 ) X: " << x2 << ", Y: " << y2 << "\n";
	
	obj3_2 = obj1_2; 
	obj3_2.GetXY ( x2, y2 );
	std::cout << "( object3_2 = object1_2 ) X: " << x2 << ", Y: " << y2 << "\n";
	
	return 0;
}