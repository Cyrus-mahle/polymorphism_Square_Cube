		#include"Square.h"
		
		// mutator functions
		void Square :: setDimensions(double x,double y){
		// validate x
		if( x > 0){
			this-> x = x;
		}
		// validate y
		if( y > 0){
			this -> y = y;
		}
			
		}
		// retrieve x from the object
		double Square :: getX()const{
			return x;
		}
		// retrieve y from the object
		double Square :: getY()const{
		    return y;
		}
		// calculate area of 2D shape
		double Square :: calculateArea()const{
			return getX() * getX() ;
		}
