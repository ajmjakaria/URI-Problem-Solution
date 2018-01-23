#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   string s;
   cin >> n;
   while(n--)
   {
       cin >> s;
       int sz = s.size();
       int cnt = 0;
       for(int i = 0; i < sz; i++)
       {
            if(s[i] == '0')
                cnt += 6;
            if(s[i] == '1')
                cnt += 2;
           if(s[i] == '2')
                cnt += 5;
           if(s[i] == '3')
                cnt += 5;
           if(s[i] == '4')
                cnt += 4;
           if(s[i] == '5')
                cnt += 5;
           if(s[i] == '6')
                cnt += 6;
           if(s[i] == '7')
                cnt += 3;
           if(s[i] == '8')
                cnt += 7;
           if(s[i] == '9')
                cnt += 6;

       }
       printf("%d leds\n", cnt);
   }
   return 0;
}
