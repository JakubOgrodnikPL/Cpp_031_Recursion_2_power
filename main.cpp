#include <iostream>
using namespace std;
long int power(int p, int w)
{
    if (w==0) return 1;
    else return p*power(p,w-1);
}
int main()
{
    cout << power(3,4) << endl;
    return 0;
}
