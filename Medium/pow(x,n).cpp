
#include <iostream>
using namespace std;
double power(double x,long n)
{
    double ans = 1.0;
        long temp = n;
        if(temp < 0)
        {
            temp = -1*temp;
            
        }
     while(temp > 0){
         if(temp % 2 == 0)
         {
             x = x*x;
             temp /= 2;
         }
         else{
             ans = ans * x;
             temp -= 1;
         }
     }
        if(n < 0) return 1.0/ans;
        else return ans;
    }
int main() {
   
    double x;
    long n;
    cin >> x >> n;
    cout << power(x,n);
    return 0;
}