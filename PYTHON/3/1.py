# two numbers are equal, less than, or greater than the other

a, b = map(int, input('Enter two numbers : ').split())
if(a>b):
    print('1st no. is greater than the 2nd no.')
elif(a<b):
    print('1st no. is less than the 2nd no.')
else:
    print('The numbers are equal')
