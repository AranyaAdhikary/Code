# concatenate using loop

dict = {4:'this',1:'what',3:'is'}
dict2 = {7:'weird',6:'wow'}
for key,value in dict2.items():
    dict[key] = value
print(dict)


