# check whether an item is present or not

dict = {1:'hell',2:'is',3:'empty'}
item = input('Enter item : ')
if item in dict.values():
    print('Item is present')
else:
    print('Item is absent')