# store student data in dictionary (name, class, subjects). Remove duplicate entries

dict = {1: ['Sukanya',10,'Maths'],2: ['Aranya',6,'Biology'],3: ['Koyena',12,'English'],4: ['Sukanya',10,'Maths']}
new_dict={}
lst=[]
for key,value in dict.items():
    if value not in lst:
        lst.append(value)
        new_dict[key] = value
print(new_dict)