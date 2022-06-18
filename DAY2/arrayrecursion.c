#include<iostream>
using namespace std;




 bool is_sorted(int a[], int size)
 {
     if(size == 0 || size == 1)
     {
         return true;

     }
      //checking first two elements of the array are sorted or not
     if(a[0] > a[1])
     {
         return false;

     }

     // if first two are sorted  then we can call same function on rest of the array , so pass the smaller array to same function .
     bool is_smallersorted = is_sorted(a+1, size-1);
     return is_smallersorted;

 }
int main()

{

    int a[10];

    cout << is_sorted(a,10) << endl;

}
