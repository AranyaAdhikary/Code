# set of numbers are stored as a list
# print all the numbers
# when the list will be exhausted
# it will print “No more items”

lst = list(map(int, input('Enter the numbers : ').split()))
for i in lst:
    print(i)
print('No more items')
