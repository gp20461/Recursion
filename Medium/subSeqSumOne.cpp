#include<iostream>
#include<vector>

using namespace std;

bool fun(int arr[],vector<int>& vec,int n,int ind,int sum,int s)
{
   if(ind == n)
   {
     if(sum == s)
     {
        for(auto it:vec) cout << it << " ";
        return true;
     }
   return false;
   }
// pick element
  vec.push_back(arr[ind]);
  s += arr[ind];
  if(fun(arr,vec,n,ind+1,sum,s)) return true;

  s -= arr[ind];
  vec.pop_back();

// Don't pick element
  if(fun(arr,vec,n,ind+1,sum,s)) return true;
}

int main(){

  int arr[] = {1,2,3};

  int n = 3,ind = 0,s = 0;

  int sum = 3;
  vector<int>vec;
  
  fun(arr,vec,n,ind,sum,s);
  
}
