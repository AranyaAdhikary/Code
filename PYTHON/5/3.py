# string is palindrome or not

str = input('Enter the string : ')
if(str == str[::-1]):
    print("Palindrome")
else:
    print('Not Palindrome')