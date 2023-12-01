# reverse words in a sentence

str = input('Enter the string : ')
lst = str.split(' ')
lst = list(reversed(lst))
str = ' '.join(lst)
print(str) 