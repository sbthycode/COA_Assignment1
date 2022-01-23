#include<ctime>
#include <iostream>
#include <cstdlib>

#define N 101

using namespace std;
const long double NIL = -1.0;
long double arr[N];

long double fib( int x) {
    int c;
    long double first=0,second=1;
   for ( c = 0 ; c <= x ; c++ )
   {
      if ( c <= 1 )
         arr[c] = (long double)c;
      else
      {
         arr[c] = arr[c-2] + arr[c-1];
        
      }
      
   }
   return arr[x];
}

int main() {
   int x=100;
   
   timespec start, end;
   clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);

   cout << "\nReached number : " << fib(x) << endl;


   clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);
    long double starting =  start.tv_sec+ start.tv_nsec*1e-9;
    long double ending = end.tv_sec+ end.tv_nsec*1e-9;
    long double time_taken = ending-starting;
    cout<<"\nTime taken: "<<time_taken<<" seconds\n";
   return 0;
}