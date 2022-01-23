#include<ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

long double fib(long double x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}

int main() {
   long double x=39;
   
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