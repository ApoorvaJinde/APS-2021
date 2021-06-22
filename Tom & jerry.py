ip=list(map(int,input().split()))
n=ip[0]
m=ip[1]
x=ip[2]
q=ip[3]
l=[]
n1=x+m+2
for i in range(10000000):
    l.append(0)
for i in range(1,m+1):
    l[x+1+i]+=i;
ind=n-1
while ind>0:
    l[n1]+=ind 
    ind-=1 
    n1+=1 
for t in range(q):
    li=list(map(int,input().split()))
    if li[0]==1:
        r1=x+li[1]+li[2]
        r2=x+li[1]+li[3]
        for itr in range(r1,r2+1):
            l[itr]-=1 
    elif li[0]==2:
        r1=x+li[1]+li[2]
        r2=x+li[1]+li[3]
        for itr in range(r1,r2+1):
            l[itr]-=1
    elif li[0]==3:
        sol=[]
        mi=x+2 
        ma=x+n+m 
        #print(l)
        for itr2 in range(mi,ma+1):
            cnt=l[itr2] 
            if cnt<0:
                cnt=0 
            while cnt>0:
                sol.append(itr2) 
                cnt-=1 
        if li[1]<=len(sol):
            print(sol[li[1]-1])
            #print(sol)
        else:
            print(-1)
