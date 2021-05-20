#include <stdio.h>
#include <cmath> 

void update(int *a,int *b) {
    // Complete this function 
    int temp1=*a, temp2=*b;
    
    *a=abs(temp1+temp2);
    *b=abs(temp1-temp2);
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}