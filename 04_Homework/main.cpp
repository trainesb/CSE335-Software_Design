/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on January 22, 2019, 9:29 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

class ColorfulShape {        
public:
    ColorfulShape( unsigned x, unsigned y, string color ):xLocation(x), yLocation(y), shapeColor(color) {
        if ((color != "red") and (color != "black") and (color != "white")){
            throw invalid_argument( "Color must be 'red', 'black', or 'white'");
        }
    }
    virtual unsigned computeArea() const = 0;
    string printColor() {return shapeColor;}
protected:
    unsigned xLocation, yLocation;
    string shapeColor;
};

class Square:public ColorfulShape {
public:
    Square( unsigned x, unsigned y, string color, unsigned l ) :ColorfulShape(x,y,color), edge(l) {}
    unsigned computeArea() const { return edge*edge; }
protected:
    unsigned edge;
};

class Circle:public ColorfulShape {
public:
    Circle( unsigned x, unsigned y, string color, unsigned r) :ColorfulShape(x,y,color), radius(r) {}
    unsigned computeArea() const { return 3.14*radius*radius; }
protected:
    unsigned radius;
};

int main(int argc, char** argv) {

    vector<ColorfulShape*> shapes;
    Circle* cir01 = new Circle(1, 1, "red", 1);
    Circle* cir02 = new Circle(1, 2, "black", 2);

    shapes.push_back(cir01);
    shapes.push_back(cir02);
    
    Square* sqr01 = new Square(2, 1, "white", 1);
    Square* sqr02 = new Square(2, 2, "red", 2);
    Square* sqr03 = new Square(2, 3, "black", 3);
    Square* sqr04 = new Square(2, 4, "white", 4);
    
    shapes.push_back(sqr01);
    shapes.push_back(sqr02);
    shapes.push_back(sqr03);
    shapes.push_back(sqr04);
    
    for(int i=0; i<shapes.size(); i++) {
        cout << "Area Sizes: " << shapes[i]->computeArea();
        cout<< " Colors: " << shapes[i]->printColor() << endl;
    }
    
    return 0;
}

