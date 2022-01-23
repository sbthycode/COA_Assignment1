#include <iostream>
#include <stdio.h>
#include <random>
#include<ctime>


using namespace std;

void func(int n, int *mat1, int *mat2) {
    int out[n][n];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            out[i][j] = 0;
 
            for (int k = 0; k < n; k++) {
                out[i][j] += ((*mat1+i*n) + k) * (((*mat2+k*n) + j));
            }
 
            cout <<out[i][j] << endl;
           
        }
 
        cout << endl;
    }
}
 
int main() {
    int n;
    cout << "Enter size of matirx ";
    cin >> n;
    
    int mat1[n][n], mat2[n][n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            mat1[i][j] = rand();
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            mat2[i][j] = rand();
        }
    }
    timespec start, end;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);
    func(n,(int *)mat1,(int *)mat2);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);
    long double starting =  start.tv_sec+ start.tv_nsec*1e-9;
    long double ending = end.tv_sec+ end.tv_nsec*1e-9;
    long double time_taken = ending-starting;
    cout<<"\nTime taken: "<<time_taken<<" seconds\n";
    return 0;
}