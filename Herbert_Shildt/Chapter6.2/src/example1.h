#ifndef EXAMPLE1_H
#define EXAMPLE1_H

#include "_god.h"

class Exmpl_1 : public _God {
public:
	Exmpl_1 () : _God () { }
	Exmpl_1 ( int xValueN, int yValueN ) : _God ( xValueN, yValueN ) { }
	Exmpl_1 operator + ( Exmpl_1 object );
};

#endif // EXAMPLE1_H