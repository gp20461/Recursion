#include<iostream>
#include<vector>

using namespace std;

void subSeq(int arr[],vector<int>& vec,int n,int ind)
{
   if(ind == n)
   {
     for(auto it:vec)
       {
         cout << it << " ";
       }
     if(vec.size() == 0){
       cout << "{}"<< " ";
     }
     cout << endl;
     return;
   }
// pick element
  vec.push_back(arr[ind]);
  subSeq(arr,vec,n,ind+1);
  vec.pop_back();

// Don't pick element
  subSeq(arr,vec,n,ind+1);
}

int main(){

  int arr[] = {1,2,3};

  int n = 3;

  vector<int>vec;
  
  subSeq(arr,vec,n,0);
  
}
