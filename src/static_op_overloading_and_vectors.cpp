#include <iostream>
#include <cstdlib>

/**
*	
*    THIS PROGRAM HAS BY GOAL SHOW SIMPLY
*    HOW TO WORK WITH STATIC DATA, OPERAT
*    OR OVERLOADING AND VECTOR ADDITION.
*
*    IT IS REALLY A BIT COMPLICATED TO
*    UNDERSTAND, HOWEVER THAT IS A GOOD
*    RESOURCE(and c++ feature) TO KNOW.
*
****************************************/


/*
*    CLASS DEFINITION
 */
typedef struct
{
    float x, y;
} b_cordinates;

class Vector2f : public b_cordinates
{
private:
    static int value;

public:
    Vector2f( float, float );
    Vector2f operator+( Vector2f& );
    virtual ~Vector2f(); // I'm using virtual, 'cause this will be a sample base class
    float getX()const;
    float getY()const;

}; // END OF CLASS DEFINITION

int main( int argc, char **argv )
{
    Vector2f v1(10, 5), v2(5, 5), v3(0,0), v4(0,0);

    // These two ways, generate the same result
    v3 = v2.operator+(v1);
    v4 = v1 + v2 + v3;

    std::cout << v2.getX() << " " << v2.getY() << std::endl;   // 5, 5
    std::cout << v3.getX() << " " << v3.getY() << std::endl;  // (10+5+0) + (0+5+5) : 15, 10
    std::cout << v4.getX() << " " << v4.getY() << std::endl; // (10+5+15+0) + (5+5+5+5) : 30, 20 

    return EXIT_SUCCESS;
}

/*
*
*  CLASS IMPLEMENTATION
*
**/
Vector2f::Vector2f(float x=0, float y=0)
{
    this->x = x;
    this->y = y;
}
Vector2f Vector2f::operator+(Vector2f &v )
{
    return Vector2f( this->x + v.x, this->y + v.y);
}

float Vector2f::getX()const{ return x; }
float Vector2f::getY()const{ return y; }

Vector2f::~Vector2f(){}

int Vector2f::value = 30; // static data initialization
// END OF CLASS IMPLEMENTATION
