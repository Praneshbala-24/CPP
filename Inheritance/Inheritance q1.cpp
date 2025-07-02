/*The task is to calculate the area of the shape using a menu driven application.
Write a Cpp program to Implement this task.
Create a class called Shape.
Include the following.protected data members / attributes:
shapeName - of type String
Include the following methods:
Create a constructor that initializes the shapeName
calculateArea - The return type of this method is Double. This method returns 0.
Create a class called Square that extends Shape
Include the following.private data members / attributes:side - of type Integer.
Include the following methods:
Create a constructor that initializes the side. (1-argument constructor).
Initialize the shapeName as "Square". calculateArea - calculates and returns the area of the square. 
The return type of this method is Double.
Create a class called Rectangle that extends Shape
Include the following private data members/attributes:
length - of type Integer.
breadth - of type Integer.
Include the following methods:
Create a constructor that initializes the length and breadth. (2-argument constructor). 
Initialize the shapeName as "Rectangle". calculateArea - calculates and returns the area of the rectangle.The return type of this method is Double.
Create a class called Circle that extends Shape
Include the following.private data members / attributes:
radius - of type Integer.
Include the following methods:
Create a constructor that initializes the radius. (1-argument constructor). 
Initialize the shapeName as "Circle". calculateArea - calculates and returns the area of the circle.
The return type of this method is Double.
Include appropriate getters and setters.
Input and Output Format:
Refer sample input and output for formatting specifications.
All text in bold corresponds to input and the rest corresponds to output.
Format the output with two decimal points
Constraints:
The shape name should be a non-empty string.
The side, length, breadth, and radius should be positive integers.
1 ≤ side ≤ 10,000 (for Square).
1 ≤ length, breadth ≤ 10,000 (for Rectangle).
1 ≤ radius ≤ 10,000 (for Circle).
The menu option should be 1, 2, or 3 to select a shape.
Example:
Sample Input and Output 1:
1. Rectangle
2. Square
3. Circle
Area Calculator --- Choose your shape
1
Enter length and breadth:
100
40
Area of Rectangle is:4000.00*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class Shape{
  public:
   void rectangle()
   {
     float a,b;
     cout<<"Enter length and breadth:"<<endl;
     cin>>a>>b;
     cout<<fixed<<setprecision(2)<<"Area of Rectangle is:"<<a*b<<endl;
   }
   void square()
   {
     float a;
     cout<<"Enter side:"<<endl;
     cin>>a;
     cout<<fixed<<setprecision(2)<<"Area of Square is:"<<(a*a)<<endl;
   }
   void circle()
   {
     double a;
     cout<<"Enter radius:"<<endl;
     cin>>a;
     cout<<fixed<<setprecision(2)<<"Area of Circle is:"<<(M_PI*(a*a))<<endl;
   }
};
int main()
{
  cout<<"Area Calculator --- Choose your shape"<<endl;
  cout<<"1. Rectangle"<<endl;
  cout<<"2. Square"<<endl;
  cout<<"3. Circle"<<endl;
  int choice;
  cin>>choice;
  
  Shape s1;
  if(choice==1){
    s1.rectangle();
  }
  else if(choice==2){
    s1.square();
  }
  else if(choice==3){
    s1.circle();
  }
  else{
    cout<<"Invalid choice"<<endl;
  }
}


