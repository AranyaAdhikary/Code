# displays information about an employee (use nested dictionary)

dict = {1 : {'Name' : 'Shounak','Age' : 6},2 : {'Name' : 'Soumodeep','Age': 60}}
for i in dict.values():
    for key,value in i.items():
        print(key,'->',value)