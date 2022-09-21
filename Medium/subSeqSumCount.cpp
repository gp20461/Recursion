#include<iostream>
#include<vector>

using namespace std;

int fun(int arr[],vector<int>& vec,int n,int ind,int sum,int s)
{
   if(ind == n)
   {
     if(sum == s) return 1;
     else return 0;
   }
// pick element
  vec.push_back(arr[ind]);
  s += arr[ind];
  int l = fun(arr,vec,n,ind+1,sum,s);

  s -= arr[ind];
  vec.pop_back();

// Don't pick element
  int r = fun(arr,vec,n,ind+1,sum,s);
  
  return l+r;
}

int main(){

  int arr[] = {1,2,3};

  int n = 3,ind = 0,s = 0;

  int sum = 1;
  vector<int>vec;
  
  cout << fun(arr,vec,n,ind,sum,s);
  
}
