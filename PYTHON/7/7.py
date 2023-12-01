# linear or binary

def linear(tup,num):
    for i in tup:
        if i == num:
            return 1

def binary(tup,num):
    lp =0
    up = len(tup)-1
    while lp<=up:
        mid = (lp+up)//2
        if tup[mid]==num:
            return 1
        elif tup[mid]>num:
            up = mid-1
        else:
            lp=mid+1
    
tup = (1,2,3,4,5,6,7,8,9)
num = int(input('Enter the number to be searched : '))
c = input("Enter 'l' for linear and 'b' for binary : ")
if c == 'l':
    count = linear(tup,num)
if c=='b':
    count = binary(tup,num)
if count == 1:
    print('Search Successful')
else:
    print('Search Unsucessful')

