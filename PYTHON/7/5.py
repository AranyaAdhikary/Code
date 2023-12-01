# find index of item in tuple
# convert string to tuple
# all possible parameters of index()
# check for an item

tup = (1,2,6,1,2,1,2,1,2)
print('Index of 6 is',tup.index(6))
string = 'This is STCET'
tupu = tuple(map(str,string.split(' ')))
print(tupu)
print('The index of 2 from index(5) is',tup.index(2,5))
print('The index of 2 from index(2) to index(8) is',tup.index(2,2,8))
if 9 in tup:
    print('Search Successful')
