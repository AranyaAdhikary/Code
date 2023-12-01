#  input temperature and its type and convert into the other

temp = float(input('Enter the temperature : '))
a = input("Enter C for Celsius and F for Fahrenheit : ")
if(a=='C'):
    print('The Fahrenheit temperature :', ((temp*9)/5)+32)
if(a=='F'):
    print('The Celsius temperature :', ((temp-32)*5)/9)