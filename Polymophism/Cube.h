#ifndef CUBE_H
#define CUBE_H

#include"Square.h"
class Cube : public Square{
	
	private:
		double z;
	public:
	// compile time polymorphism
	// function overloading
	void setDimensions(double x, double y, double z);
	
	double getZ()const;
	
	double calculateArea()const;
	
};
#endif
