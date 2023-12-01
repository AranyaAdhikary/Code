# Create two lists
# Append an item 
# Append a tuple of length two 
# Concatenate two lists 
# Find index of an item
# Insert ‘six’ at index 5 
# Delete last item 
# Delete item with index 4 
# Remove the item ‘six’
# Reverse the list and sort it 
# Print the results at each step.

lst1 = [1,2]
lst2 = [6,7,9,10]
print('List :',lst2)
lst2.append('one')
print('Append an item :',lst2)
tup=(1,4)
for i in tup:
    lst2.append(i)
print('Append a tuple :',lst2)
for i in lst1:
    lst2.append(i)
print('Concatenate :',lst2)
print("Index of 7 :",lst2.index(7))
lst2.insert(5,'six')
print("'six' at index 5 :",lst2)
lst2.pop()
print('Delete last item :',lst2)
del lst2[4]
print('Delete item with index 4 :',lst2)
lst2.remove('six')
print("Remove 'six' :",lst2)
lst2.reverse()
lst2.sort()
print("Reversed and sorted :",lst2)