# count elements in a list until element is a tuple

lst = [1,2,3,4,(5,6),7]
count = 0
for i in lst:
    if isinstance(i,tuple):
        break
    count = count+1
print('Length till tuple : ',count)