#include<iostream>
#include<vector>

using namespace std;

void fun(int arr[],vector<int>& vec,int n,int ind,int sum,int s)
{
   if(ind == n)
   {
     if(sum == s)
     {
        for(auto it:vec) cout << it << " ";
        cout << endl;
     }
   return;
   }
// pick element
  vec.push_back(arr[ind]);
  s += arr[ind];
  fun(arr,vec,n,ind+1,sum,s);

  s -= arr[ind];
  vec.pop_back();

// Don't pick element
  fun(arr,vec,n,ind+1,sum,s);
}

int main(){

  int arr[] = {1,2,3};

  int n = 3,ind = 0,s = 0;

  int sum = 4;
  vector<int>vec;
  
  fun(arr,vec,n,ind,sum,s);
  
}
