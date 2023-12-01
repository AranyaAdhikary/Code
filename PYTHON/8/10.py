# sort a dictionary by key

dict = {1:10,3:30,5:50,2:20,4:40}
dict2 = {}
for i in sorted(dict.keys()):
    dict2[i] = dict[i]
print(dict2)