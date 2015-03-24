# quiz-7
#include <iostream>
using namespace std;
int main()
{
int x,y;
cout<< "Este programa de da el mayor divisor común entre 2 numeros" <<endl;
cout<< "Dame el primer numero: " <<endl;
cin>> x;
cout<< "Dame el segundo numero: " <<endl;
cin>> y;
int gcd;
for(int i=1; i<=x && i<=y; i++){
if(x%i == 0 && y%i == 0){
gcd=i;
}}
cout<< "Mayor divisor común es: " << gcd <<endl;

return 0;
}
