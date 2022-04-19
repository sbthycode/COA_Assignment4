import time 
import numpy as np

n=int(input("Enter size of matrix"))
result = [[0] * n] * n
X = [[1] * n] * n
Y = [[1] * n] * n

start=time.time_ns()
for k in range(n): 
    for i in range(n):
        for j in range(n):     
           result[i][j] += X[i][k] * Y[k][j]
end=time.time_ns()
print("time taken k_i_j",(end-start)*1e-9)

start=time.time_ns()
for i in range(n): 
    for k in range(n):
        for j in range(n):     
           result[i][j] += X[i][k] * Y[k][j]
end=time.time_ns()
print("time taken i_k_j",(end-start)*1e-9)

start=time.time_ns()
for i in range(n): 
   for j in range(n):     
       for k in range(n):
           result[i][j] += X[i][k] * Y[k][j]
end=time.time_ns()
print("time taken i_j_k",(end-start)*1e-9)

start=time.time_ns()
for j in range(n): 
    for i in range(n):
        for k in range(n):     
           result[i][j] += X[i][k] * Y[k][j]
end=time.time_ns()
print("time taken j_i_k",(end-start)*1e-9)

start=time.time_ns()
for j in range(n): 
    for k in range(n):
        for i in range(n):     
           result[i][j] += X[i][k] * Y[k][j]
end=time.time_ns()
print("time taken j_k_i",(end-start)*1e-9)


start=time.time_ns()
for k in range(n): 
    for j in range(n):
        for i in range(n):     
           result[i][j] += X[i][k] * Y[k][j]
end=time.time_ns()
print("time taken k_j_i",(end-start)*1e-9)
