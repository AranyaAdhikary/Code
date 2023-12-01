# check whether armstrong number or not

n = input('Enter a number : ')
length = len(n)
n = int(n)
sum =0
num = n
while(num>0):
    d = num%10
    sum= sum + pow(d,length) 
    num=num//10
if(n==sum):
    print('Armstrong number')
else:
    print('Not Armstrong Number')
