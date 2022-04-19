#include <iostream>
#include <stdio.h>
#include <random>
#include<ctime>



using namespace std;

void func_i_j_k(int n, int *mat1, int *mat2) {
    int out[n][n]={0};
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                out[i][j] += ((*mat1+i*n) + k) * (((*mat2+k*n) + j));
            }  
        }
    }
}
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
void func_k_i_j(int n, int *mat1, int *mat2) {
    int out[n][n]={0};
 
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                out[i][j] += ((*mat1+i*n) + k) * (((*mat2+k*n) + j));
            }  
        }
    }
}
void func_k_j_i(int n, int *mat1, int *mat2) {
    int out[n][n]={0};
 
    for (int k = 0; k < n; k++) {
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                out[i][j] += ((*mat1+i*n) + k) * (((*mat2+k*n) + j));
            }  
        }
    }
}
void func_j_k_i(int n, int *mat1, int *mat2) {
    int out[n][n]={0};
 
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                out[i][j] += ((*mat1+i*n) + k) * (((*mat2+k*n) + j));
            }  
        }
    }
}
void func_j_i_k(int n, int *mat1, int *mat2) {
    int out[n][n]={0};
 
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                out[i][j] += ((*mat1+i*n) + k) * (((*mat2+k*n) + j));
            }  
        }
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
    
    clock_gettime(CLOCK_REALTIME, &start);
    func_i_j_k(n,(int *)mat1,(int *)mat2);
    clock_gettime(CLOCK_REALTIME, &end);
    long double starting =  start.tv_sec+ start.tv_nsec*1e-9;
    long double ending = end.tv_sec+ end.tv_nsec*1e-9;
    long double time_taken = ending-starting;
    cout<<"\nTime taken in i_j_k: "<<time_taken<<" seconds\n";
    
    clock_gettime(CLOCK_REALTIME, &start);
    func_i_k_j(n,(int *)mat1,(int *)mat2);
    clock_gettime(CLOCK_REALTIME, &end);
    starting =  start.tv_sec+ start.tv_nsec*1e-9;
    ending = end.tv_sec+ end.tv_nsec*1e-9;
    time_taken = ending-starting;
    cout<<"\nTime taken in i_k_j: "<<time_taken<<" seconds\n";

    clock_gettime(CLOCK_REALTIME, &start);
    func_k_i_j(n,(int *)mat1,(int *)mat2);
    clock_gettime(CLOCK_REALTIME, &end);
    starting =  start.tv_sec+ start.tv_nsec*1e-9;
    ending = end.tv_sec+ end.tv_nsec*1e-9;
    time_taken = ending-starting;
    cout<<"\nTime taken in k_i_j: "<<time_taken<<" seconds\n";

    clock_gettime(CLOCK_REALTIME, &start);
    func_k_j_i(n,(int *)mat1,(int *)mat2);
    clock_gettime(CLOCK_REALTIME, &end);
    starting =  start.tv_sec+ start.tv_nsec*1e-9;
    ending = end.tv_sec+ end.tv_nsec*1e-9;
    time_taken = ending-starting;
    cout<<"\nTime taken in k_j_i: "<<time_taken<<" seconds\n";

    clock_gettime(CLOCK_REALTIME, &start);
    func_j_k_i(n,(int *)mat1,(int *)mat2);
    clock_gettime(CLOCK_REALTIME, &end);
    starting =  start.tv_sec+ start.tv_nsec*1e-9;
    ending = end.tv_sec+ end.tv_nsec*1e-9;
    time_taken = ending-starting;
    cout<<"\nTime taken in j_k_i: "<<time_taken<<" seconds\n";

    clock_gettime(CLOCK_REALTIME, &start);
    func_j_i_k(n,(int *)mat1,(int *)mat2);
    clock_gettime(CLOCK_REALTIME, &end);
    starting =  start.tv_sec+ start.tv_nsec*1e-9;
    ending = end.tv_sec+ end.tv_nsec*1e-9;
    time_taken = ending-starting;
    cout<<"\nTime taken in j_i_k: "<<time_taken<<" seconds\n";

    return 0;
}