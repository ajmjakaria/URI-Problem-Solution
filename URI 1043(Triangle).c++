#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, s1, s2;

    while(cin >> a >> b >>c)
    {
        if(a + b > c && b + c > a && a + c > b)
        {
            printf("Perimetro = %.1f\n", a+b+c);
        }
        else
            printf("Area = %.1f\n", .5*(a+b)*c);

    }
    return 0;
}
