#include"Cube.h"

void Cube :: setDimensions(double x, double y, double z){
	Square :: setDimensions(x,y);
	// set z 
	if(z > 0){
		this -> z = z;
	}
}
	// retrieve z from  the object
double Cube :: getZ()const{
    return z ;
}
	// calculate area of the cube
double Cube :: calculateArea()const{
	return getX() * getY() * getZ() ;
}
