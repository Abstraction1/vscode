#ifndef EXAMPLE3_H
#define EXAMPLE3_H

#include "_god.h"

class Exmpl_3 : public _God {
public:
	Exmpl_3 () : _God () { }
	Exmpl_3 ( int xValue, int yValue ) : _God ( xValue, yValue ) { }
	Exmpl_3 operator + ( Exmpl_3 obj );
	Exmpl_3 operator + ( int value );
};

#endif // EXAMPLE3_H