#include <iostream>

using namespace std;


int main() {


   int n,k;

   cin>>n>>k;

   int a[n];

   int i;

   for(i=0; i<n; i++)

   {

       cin>>a[i];

   }

   if(k%n==0)

   {

       for(i=0; i<n; i++)

       {

           cout<<a[i]<<" ";

       }

   }

   else

   {

       k = k%n;

       int r = n-k;

       int l = r-1;

       for(i=r; i<n; i++)

       {

           cout<<a[i]<<" ";

       }

       for(i=0; i<=l; i++)

       {

           cout<<a[i]<<" ";

       }

   }


   return 0;

}
