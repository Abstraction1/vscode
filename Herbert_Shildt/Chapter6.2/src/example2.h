#ifndef EXAMPLE2_H
#define EXAMPLE2_H

#include "_god.h"

class Exmpl_2 : public _God {
public:
	Exmpl_2 () : _God () { }
	Exmpl_2 ( int xValue, int yValue ) : _God ( xValue, yValue ) { }
	Exmpl_2 operator + ( Exmpl_2 obj );
	Exmpl_2 operator - ( Exmpl_2 obj );
	Exmpl_2 operator = ( Exmpl_2 obj );
};

#endif // EXAMPLE2_H