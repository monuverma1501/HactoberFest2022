#include <iostream>
#include <cmath>

int sqr()
{
    float s, area;
        cout<<"Enter the side of the square : ";
        cin>>s;
        area= s*s;
        cout<<"Area of square is "<<area<<"\n";
        return(area);
}

int rct()
{
   float l,b,area;
        cout<<"Enter the length & breadth of rectangle :\n";
        cin>>l>>b;
        area= l*b;
        cout<<"Area of rectangle is "<<area<<"\n";
        return(area);
}

int trg()
{ 
    float a, b, c, s, area;
        cout<<"Enter the length of three sides of triangle :\n";
        cin>>a>>b>>c;
        s=(a+b+c)/2;
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of triangle is "<<area<<"\n";
        return(area);
}

int cir()
{
  float r, area, pi=3.14;
        std::cout<<"Enter the radius of circle : ";
        std::cin>>r;
        area= pi*r*r;
        std::cout<<"Area of circle is "<<area<<"\n";
        return(area);
}
int main()
{   
    int choice;
    cout<<"Enter 1 if you want to calculate are of square\n";
    cout<<"Enter 2 if you want to calculate are of rectangle\n";
    cout<<"Enter 3 if you want to calculate are of triangle\n";
    cout<<"Enter 4 if you want to calculate are of circle\n";
    cin>>choice;
    switch(choice)
    {   
        case 1 :
        sqr();
        break;
        
        case 2 :
        rct();
        break;
        
        case 3 :
        trg();
        break;
        
        case 4 :
        cir();
        break;
        
        default:
        cout<<"INVALID CHOICE!!";
        
    }
    return 0;

}
