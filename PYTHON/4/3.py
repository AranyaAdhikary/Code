# Armstrong numbers for a range 1 to 1000

for n in range(1,1001):
    length = len(str(n))
    sum =0
    num = n
    while(num>0):
        d = num%10
        sum= sum + pow(d,length) 
        num=num//10
    if(n==sum):
        print(n)