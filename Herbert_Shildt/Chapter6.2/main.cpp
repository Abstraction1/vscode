#include <iostream>
#include "src/example1.h"
#include "src/_god.h"

int main() {
	Exmpl_1 object1_1 ( 10, 10);
	Exmpl_1 object2_1 ( 5, 3);
	Exmpl_1 object3_1;
	int x, y;
	object3_1 = object1_1 + object2_1;
	object3_1.GetXY ( x, y );
	std::cout << "( object1_1 + object2_1 ) X: " << x << ", Y: " << y << "\n";
	std::cout << "-----------------------------------------------------------\n";
	
	return 0;
}