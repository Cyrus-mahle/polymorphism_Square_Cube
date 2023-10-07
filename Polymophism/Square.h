/*
*@Author: Nyakama Mahle
*@Date : 07/10/2023
*/
// class Sqaure

#ifndef SQUARE_H
#define SQUARE_H

class Square{
	//private access specifier
	private:
		double x;
		double y;
	//public access specifier
	public:
		// mutator functions
		void setDimensions(double,double);
		// retrieve x from the object
		double getX()const;
		// retrieve y from the object
		double getY()const;
		// calculate area of 2D shape
		double calculateArea()const;
};

#endif
