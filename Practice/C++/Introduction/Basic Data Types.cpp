#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    //Initialinsing variable for storing data
    int d;
    long ld;
    char c;
    float f;
    double lf;
    
    //using scanf to import data
    scanf("%d %ld %c %f %lf", &d,&ld,&c,&f,&lf);
    
    //Using printf for printing data
    printf("%d\n%ld\n%c\n%f\n%lf\n", d,ld,c,f,lf);
    return 0;
}