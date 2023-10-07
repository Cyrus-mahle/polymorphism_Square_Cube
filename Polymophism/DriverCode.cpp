#include "Square.h"
#include "Cube.h"
#include <iostream>
using namespace std;

int main() {
	
  // Dynamic memory allocation for a Square object
  Square* square = new Square();

  // Set the dimensions of the square.
  square->setDimensions(12.5, 12.5);

  // Calculate the area of the square.
  double area = square->calculateArea();

  // Display the area of the square.
  cout << "Area of the Square is " << area << " square units" << endl;
    
  // Dynamic memory allocation for a Cube object
  Cube* cube = new Cube();
  
  // set dimensions of the cube
  cube -> setDimensions(12.7,12.6,12.7);
  
  // calculate the are of the cube
  double areaOfCube = cube -> calculateArea();
  
  // Display are of the cube
  cout << "\nArea of the cube is " << areaOfCube <<  " square units" << endl;
  // Deallocate the memory allocated for the Square object.
 // delete square;
  // Deallocate the memory allocated for the Square object.
  delete cube;
  
  return 0;
}

