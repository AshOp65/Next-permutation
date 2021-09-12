#include"bits/stdc++.h"
using namespace std;
#define take_input freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define t(x)  int n; cin>>n;
#define ll long long 
#define t(x)  int n; cin>>n;
#define w(x)  int q; cin>>x; while(q--)
#define pb    push_back;
#define cheetah ios_base::sync_with_stdio(false); cin.tie(0);
#define mod   1000000007
//<------------------------------------------------------------------------------->

  int main()
  {
   take_input  
   cheetah;
   t(x);
   int arr[n];
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int i,j;
   for(i=n-2; i>=0; i--){
   if(arr[i+1]>arr[i])
    break;
  }
   if(i<0)
   reverse(arr+i+1,arr+n);
   else{
   for(j=n-1; j>i; j--){
   if(arr[i]<arr[j])
    break;
   }
    swap(arr[i],arr[j]);
    reverse(arr+i+1,arr+n);
  }
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
    return 0;
  
}



 
     