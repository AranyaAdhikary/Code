#  prime numbers for a range 1 to 1000

for n in range(1,1001):
    c=0
    for i in range(1,n):
        if(n%i==0):
            c+=1
    if(c==1):
        print(n)