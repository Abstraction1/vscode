#ifndef TASK1_H
#define TASK1_H
#include "/home/default/vscode/Herbert_Shildt/Chapter6.2/src/_god.h"

class Task1 : public _God {
public:
	Task1 () : _God () { };
	Task1 ( int xValue, int yValue ) : _God ( xValue, yValue ) { };
	Task1 operator * ( Task1 obj );
	Task1 operator / ( Task1 obj );
};

#endif // TASK1_H