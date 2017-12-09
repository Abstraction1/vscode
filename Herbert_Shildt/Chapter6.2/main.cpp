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
	std::cout << "-----------------------------------------------------------\n";

	Exmpl_3 obj1_3 ( 10, 10 ), obj2_3 ( 5, 3 ), obj3_3;
	int x3, y3;
	obj3_3 = obj1_3 + obj2_3;
	obj3_2.GetXY ( x3, y3 );
	std::cout << "( object1_3 + object2_3 ) X: " << x3 << ", Y: " << y3 << "\n";
	
	obj3_3 = obj1_3 + 100;
	obj3_3.GetXY ( x3, y3 );
	std::cout << "( object1_3 - object2_3 ) X: " << x3 << ", Y: " << y3 << "\n";
	
	return 0;
}