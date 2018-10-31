#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 96;
Batas = 96 + 100;
X = 20;
T = 96;
while( T <= Batas)
     { T = T + X;
       X = X + 10;
     }
 cout << T;

}
