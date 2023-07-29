// C++ program to How will you print
//  numbers from 1 to 100 without using loop?
#include <iostream>
using namespace std;

class gfg
{
    
// Prints numbers from 1 to n
public:
void printNos(unsigned int n)
{
    if(n > 0)
    {
        printNos(n - 1);
        cout << n << " ";
    }
    return;
}
};

// Driver code
int main()
{
    gfg g;
    g.printNos(100);
    return 0;
}
