#include "example2.h"

	Exmpl_2 Exmpl_2::operator+ ( Exmpl_2 obj ) {
		Exmpl_2 temp;
		temp._xValue = _xValue + obj._xValue;
		temp._yValue = _yValue + obj._yValue;
		
		return temp;
	}
	Exmpl_2 Exmpl_2::operator- ( Exmpl_2 obj ) {
		Exmpl_2 temp;
		temp._xValue = _xValue + obj._xValue;
		temp._yValue = _yValue + obj._yValue;
	
		return temp;	
	}
	Exmpl_2 Exmpl_2::operator= ( Exmpl_2 obj ) {
		_xValue = obj._xValue;
		_yValue = obj._yValue;

		return *this;
	}
