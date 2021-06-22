t=int(input())
for testcases in range(0,t):
    may = int(input())
    apoo = pow(may,2)
    summ = (apoo-1)
    summ=summ//2
    winn = set()
    summ=summ+1
    for variable1 in range(1,summ+1):
        qwert = pow(pow(variable1,2)+apoo,1/2)
        if qwert.is_integer():
            variable1 = int(variable1)
            qwert = int(qwert)
            if variable1<=qwert: 
                winn.add((variable1,qwert))
            else:
                winn.add((qwert,variable1))
    k=pow(2,1/2)
    l=may//k
    summ1=int(l+1)+1
    for variable1 in range(1,summ1):
        variable2 = pow(apoo-pow(variable1,2),1/2)
        if variable2 != 0 and variable2.is_integer():
            variable1 = int(variable1)
            variable2 = int(variable2)
            if variable1<=variable2: 
                winn.add((variable1,variable2))
            else:
                winn.add((variable2,variable1))
    print(len(winn))
