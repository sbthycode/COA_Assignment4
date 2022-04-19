#include <iostream>
#include <stdio.h>
#include <random>
#include<ctime>
#define N 512


using namespace std;

void func_i_k_j(int n, int *mat1, int *mat2) {
    int out[n][n]={0};
 
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                out[i][j] += ((*mat1+i*n) + k) * (((*mat2+k*n) + j));
            }  
        }
    }
}

int main() {
    // int n;
    // cout << "Enter size of matirx ";
    // cin >> n;
    
    int mat1[N][N], mat2[N][N];
    int n=N;
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

    clock_gettime(CLOCK_REALTIME, &start);
    func_i_k_j(n,(int *)mat1,(int *)mat2);
    clock_gettime(CLOCK_REALTIME, &end);
    long double starting =  start.tv_sec+ start.tv_nsec*1e-9;
    long double ending = end.tv_sec+ end.tv_nsec*1e-9;
    long double time_taken = ending-starting;
    cout<<"\nTime taken in i_k_j: "<<time_taken<<" seconds\n";
    return 0;
}