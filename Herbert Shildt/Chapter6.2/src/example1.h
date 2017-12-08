#include "_god.h"

class Exmpl_1 : public _God {
public:
	Exmpl_1 () : _God () { }
	Exmpl_1 ( int xValue, int yValue ) : _God ( xValue, yValue ) { }
	Exmpl_1 operator+ ( Exmpl_1 object );
};