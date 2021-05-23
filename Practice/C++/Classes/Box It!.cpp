#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
class Box{
    public:
    Box(){
        l=0;b=0;h=0;
    }
    Box(int p, int q, int r){
        l=p;b=q;h=r;
    }
    Box(const Box& B){
        this->l=B.l;
        this->b=B.b;
        this->h=B.h;
    }
    int getLength(); // Return box's length
    int getBreadth(); // Return box's breadth
    int getHeight();  //Return box's height
    long long CalculateVolume();
    
    bool operator<(Box& B);
    friend ostream& operator<<(ostream& out,const Box& B);
    
    private:
    int l,b,h;
};

// int getLength(); // Return box's length
int Box::getLength(){
    return l;
}
// int getBreadth (); // Return box's breadth
int Box::getBreadth (){
    return b;
}
// int getHeight ();  //Return box's height
int Box::getHeight (){
    return h;
}
// long long CalculateVolume(); // Return the volume of the box
long long Box::CalculateVolume(){
    return l*b*h;
}

//Overload operator < as specified
//bool operator<(Box& b)
bool Box::operator<(Box& B){
    if(this->l<B.l) return true;
    else if(this->b<B.b && this->l==B.l) return true;
    else if(this->h<B.h && this->b==B.b && this->l==B.l) return true;
    else return false;
}    

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
ostream& operator<<(ostream& out,const Box& B){
     out << B.l << " " << B.b << " " << B.h;
    return out;
}

