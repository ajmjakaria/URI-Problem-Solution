#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, s1, s;
    int d = 0;
    char c = '%';

    while(cin >> a){
    if(a >= 0.00 && a <= 400.00)
    {
        s1 = (a*0.15);
        s = s1 + a;
        d = 15;
    }
    else if(a >= 400.01 && a <= 800.00)
    {
        s1 = (a*0.12);
        s = s1 + a;
        d = 12;
    }
    else if(a >= 800.01 && a <= 1200.00)
    {
        s1 = (a*0.10);
        s = s1 + a;
        d = 10;
    }
    else if(a >= 1200.01 && a <= 2000.00)
    {
        s1 = (a*0.07);
        s = s1 + a;
        d = 7;
    }
    else if(a > 2000.00)
    {
        s1 = (a*0.04);
        s = s1 + a;
        d = 4;

    }
    printf("Novo salario: %.2lf\n", s);
    printf("Reajuste ganho: %.2lf\n", s1);
    printf("Em percentual: %d %c\n", d, c);
    }
    return 0;
}
