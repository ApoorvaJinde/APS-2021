#https://www.codechef.com/LTIME95C/problems/ARRROT

mynumber=int(input())
mylist=list(map(int,input().split()))
total=0
for ele in range(mynumber):
    total = total + mylist[ele]
querynymber=int(input())
query=list(map(int,input().split()))
for i in range (querynymber):
    total=((2*total)%1000000007)
    print(total)
