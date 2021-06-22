import math
from math import log
a,b,c = map(float,input().split())
if(((a<1)or (a==1))and ((a>0)or(a==0))):
        k=b*c
        k=k+1
        v=log(k,2)
elif(b>a):
        l=b-a
        l=l+1
        m=b*(a-1)
        n=l/m
        n=int(n) + 1
        v=log(a,2)*(c-n)+log(1+n*b,2)
elif(a>b):
        v=log(a,2)*c
 
print(v)
 
 
