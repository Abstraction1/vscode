#include "example1.h"

Exmpl_1 Exmpl_1::operator+ ( Exmpl_1 object ) {
	Exmpl_1 temp;
	temp._xValue = _xValue + object._xValue;
	temp._yValue = _yValue + object._yValue;
	
	return temp;
}
