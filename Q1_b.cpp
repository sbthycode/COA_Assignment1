#include<ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

long double fib(long double x) {
    long double c;
    long double next,first=0,second=1;
   for ( c = 0 ; c <= x ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      
   }
   return next;
}

int main() {
   long double x=100;
   
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