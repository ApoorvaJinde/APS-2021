def func(m,k,x):
        h=(x-m)
        h=h/k
        h=h+1
        if h.is_integer():
                return int(h)
        else:
                return int(h+1)
 
 
def func2(m,k,x):
        h=(x-m)
        h=h/k
        h=h+1
        return int(h)
        
t=int(input())
for testcases in range(t):
        count=0
        l,r=map(int,input().split())
        k=int(pow(r,1/2))+1
        for itr in range(1,k):
                o=0
                o2=0
                m=pow(itr,2)
                
                if l>=m :
                        o=func(m,itr*2,l)
                if r>=m : 
                        o2=func2(m,itr*2,r)
                else:
                        break
                p=o2-o
                count =count +p
                if o!=0: 
                        count=count+1
        print(count)
        
