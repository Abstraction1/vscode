#include "task1.h"

Task1 Task1::operator * ( Task1 obj ) {
	Task1 temp;
	temp._xValue = _xValue * obj._xValue;
	temp._yValue = _yValue * obj._yValue;

	return temp;
}

Task1 Task1::operator / ( Task1 obj ) {
	Task1 temp;
	temp._xValue = _xValue / obj._xValue;
	temp._yValue = _yValue / obj._yValue;

	return temp;	
}