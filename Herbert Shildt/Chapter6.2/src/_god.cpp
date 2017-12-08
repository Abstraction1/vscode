#include "_god.h"

_God::_God () : _xValue ( 0 ), _yValue ( 0 ) 
{ }

_God::_God ( int xValue, int yValue ) : _xValue ( xValue ), _yValue ( yValue ) 
{ }

void _God::GetXY ( int& xValue, int& yValue ) {
	xValue = _xValue;
	yValue = _yValue;
}