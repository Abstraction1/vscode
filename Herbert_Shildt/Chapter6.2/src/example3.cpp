#include "example3.h"

Exmpl_3 Exmpl_3::operator + ( Exmpl_3 obj ) {
	Exmpl_3 temp;
	temp._xValue = _xValue + obj._xValue;
	temp._yValue = _yValue + obj._yValue;

	return temp;
}

Exmpl_3 Exmpl_3::operator + ( int value ) {
	Exmpl_3 temp;
	temp._xValue = _xValue + value;
	temp._yValue = _yValue + value;
	
	return temp;
	
}