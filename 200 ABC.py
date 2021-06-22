n,k=map(int,input().split())

for ele in range(0,k):
    if(n%200==0):
        n=n//200
    else:
        a=str(n)+str(200)
        n=int(a)
print(n)
