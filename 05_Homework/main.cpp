/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on January 28, 2019, 3:29 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

class ColorfulShape{  
protected:
    unsigned int xLocation;
    unsigned int yLocation;
    string shapeColor;
    
public:
    //ColorfulShape Constructor with no parameters
    ColorfulShape(){
        xLocation=0;
        yLocation=0;
        shapeColor="red";
        
        cout<<"ColorfulShape() Default Constructor";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor<<endl;
    };
    
    //ColorfulShape Constructor with parameters
    ColorfulShape( const unsigned int& x,
                        const unsigned int& y, 
                        const string& color ){
        xLocation=x;
        yLocation=y;
        shapeColor=color;
        
        if ((color != "red") and (color != "black") and (color != "white")){
            throw invalid_argument( "Color must be 'red', 'black', or 'white'");
        }
        
        cout<<"ColorfulShape(x, y, color) Constructor";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor<<endl;
    };
    
    //ColorfulShape Destructor
    virtual ~ColorfulShape(){
        cout<<"In ~ColorfulShape() Destructor: ";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor<<endl;
    }
    
    //ColorfulShape Copy Constructor
    ColorfulShape(const ColorfulShape& shape){
        if(this != &shape){
            xLocation=shape.xLocation;
            yLocation=shape.yLocation;
            shapeColor=shape.shapeColor;
            
            cout<<"In ColorfulShape Copy Constructor"<<endl;
        }
        else{cout<<"In ColorfulShape Copy Constructor: Self-copying"<<endl;}
    }
    
    //ColorfulShape Assignment Operator
    ColorfulShape& operator=(const ColorfulShape& shape){
        if(this!=&shape){
            xLocation=shape.xLocation;
            yLocation=shape.yLocation;
            shapeColor=shape.shapeColor;
            
            cout<<"In ColorfulShape Assignment Operator"<<endl;            
        }
        else{cout<<"In ColorfulShape Assignment Operator: Self-copying"<<endl;}
        return *this;
    }
    
    virtual unsigned computeArea() const = 0;
    
    string printColor() {return shapeColor;}
};

class Square:public ColorfulShape{
    
protected:
    unsigned short edge;
    
public:
    //Square Constructor with parameters
    Square( const unsigned int& x,
                const unsigned int& y, 
                const string& color, 
                const unsigned short& l ) 
    :ColorfulShape(x,y,color) {
        edge=l;
        
        cout<<"Square(x, y, color, l) Constructor";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor;
        cout<<"\n\tEdge: "<<edge<<endl;
    };
    
    //Square Constructor without parameters
    Square() :ColorfulShape() {
        edge=0;
        
        cout<<"Square() Constructor";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor;
        cout<<"\n\tEdge: "<<edge<<endl;
    };
    
    //Square Destructor
    virtual ~Square() {
        cout<<"In ~Square() Destructor";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor;
        cout<<"\n\tEdge: "<<edge<<endl;
    }
    
    //Square Copy Constructor
    Square(const Square& square){
        if(this!=&square){
            edge=square.edge;
            xLocation=square.xLocation;
            yLocation=square.yLocation;
            shapeColor=square.shapeColor;
            
            cout<<"In Square Copy Constructor"<<endl;
        }
        else{cout<<"In Square Copy Constructor: Self-copying"<<endl;}
    }
    
    //Square Assignment Operator
    Square& operator=(const Square& square){
        if(this!=&square){
            edge=square.edge;
            xLocation=square.xLocation;
            yLocation=square.yLocation;
            shapeColor=square.shapeColor;
            
            cout<<"In Square Assignment Operator"<<endl;            
        }
        else{cout<<"In Square Assignment Operator: Self-copying"<<endl;}
        return *this;
    }
    
    unsigned computeArea() const { return edge*edge; }
};

class Circle:public ColorfulShape {
    
protected:
    unsigned short radius;
    
public:
    //Circle Constructor with Parameters
    Circle( const unsigned int& x,
                const unsigned int& y,
                const string& color, 
                const unsigned short& r) 
    :ColorfulShape(x,y,color) {
        radius=r;
        
        cout<<"Circle(x, y, color, r) Constructor";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor;
        cout<<"\n\tRadius: "<<radius<<endl;
    };
    
    //Circle Constructor with no Parameters
    Circle() :ColorfulShape() {
        radius=0;
        
        cout<<"Circle() Constructor";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor;
        cout<<"\n\tRadius: "<<radius<<endl;
    };
    
    //Circle Destructor
    virtual ~Circle() {
        cout<<"In ~Circle() Destructor";
        cout<<"\n\txLocation: "<<xLocation;
        cout<<"\n\tyLocation: "<<yLocation;
        cout<<"\n\tshapeColor: "<<shapeColor;
        cout<<"\n\tRadius: "<<radius<<endl;
    }
    
    //Circle Copy Constructor
    Circle(const Circle& circle){
        if(this!=&circle){
            radius=circle.radius;
            xLocation=circle.xLocation;
            yLocation=circle.yLocation;
            shapeColor=circle.shapeColor;
            
            cout<<"In Circle Copy Constructor"<<endl;
        }
        else{cout<<"In Circle Copy Constructor: Self-copying"<<endl;}
    }
    
    //Circle Assignment Operator
    Circle& operator=(const Circle& circle){
        if(this!=&circle){
            radius=circle.radius;
            xLocation=circle.xLocation;
            yLocation=circle.yLocation;
            shapeColor=circle.shapeColor;
            
            cout<<"In Circle Assignment Operator"<<endl;            
        }
        else{cout<<"In Circle Assignment Operator: Self-copying"<<endl;}
        return *this;
    }
    
    unsigned computeArea() const { return 3.14*radius*radius; }
};

int main(int argc, char** argv) {

    vector<ColorfulShape*> shapes;
    
    //Square Object as Variable
    cout<<"\nSquare Object as Variable"<<endl;
    {Square sqrVar(1, 1, "black", 0);}
    
    //Square Object Using new
    cout<<"\nSquare Object Using new"<<endl;
    Square* sqrNew = new Square(2, 1, "white", 1);
    
    //Delete aqrNew Object
    cout<<"\nDelete Square Object Created With new"<<endl;
    delete sqrNew;
    
    
    //Circle Object as Variable
    cout<<"\nCircle Object as a Variable"<<endl;
    {Circle cirVar(0, 0, "white", 3);}
    
    //Circle Object using new
    cout<<"\nCircle Object Using new"<<endl;
    Circle* cirNew = new Circle(1, 1, "red", 1);
    
    //Delete cirNew Object
    cout<<"\nDelete Circle Object Created With new"<<endl;
    delete cirNew;
    
    return 0;
}

