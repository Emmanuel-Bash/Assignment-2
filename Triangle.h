#ifndef TRIANGLE_H
#define TRAINGLE_H

clas Triangle : public Shape{

protected:
	float area;
	
public:
	Triangle (std::string name = "Awsome Triangle!!") : Shape(name), area(area){}
	void setArea(float a, float b){area=(a*b)/2;}
	float getArea(){ return area;}
	
};

#endif

