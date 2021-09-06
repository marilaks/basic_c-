//call by value
#include <iostream>
using namespace std;

// Swap functions 

void swapx(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("x=%d y=%d\n", x, y);
}
// Main function
int main()
{
    int a = 10, b = 20;

    // Pass by Values
    swapx(a, b);//call by value

    printf("a=%d b=%d\n", a, b);

    return 0;
}
/*passing the values if var to it,when we change 
the values of formal parameters it wont affect the actual parameters*/



