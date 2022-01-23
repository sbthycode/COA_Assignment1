#include<ctime>
#include <iostream>
#include <cstdlib>
#include <cstring>

#define N 101

using namespace std;

const long double NIL = -1.0;
long double arr[N];

void init()
{
    for(int i=0; i<N; i++)
        arr[i] = NIL;
}

long double fib(int n) {
    if(arr[n] == NIL) {
        if(n <= 1)
            arr[n] = (long double)n;
        else
            arr[n] = fib(n-1) + fib(n-2);
    }
    return arr[n];
}

int main() {
    init();

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