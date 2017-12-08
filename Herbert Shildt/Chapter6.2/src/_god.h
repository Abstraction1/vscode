#ifndef _GOD_H

class _God {
public:
	_God ();
	_God ( int xValue, int yValue ); 
	void GetXY ( int& xValue, int& yValue );
protected:
	int _xValue;
	int _yValue;
};

#endif // _GOD_HG