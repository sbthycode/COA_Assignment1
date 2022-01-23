import time 
import numpy as np

n=int(input("Enter size of matrix"))
mat1=np.random.randint(low=1,high=2147483646,size=(n,n))
mat2=np.random.randint(low=1,high=2147483647,size=(n,n))
start=time.time_ns()
res = np.dot(mat1,mat2)
end=time.time_ns()
print(res)
print("time taken in seconds",(end-start)*1e-9)