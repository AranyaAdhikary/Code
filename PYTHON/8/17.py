# invert a dictionary, i.e., it makes key of one dictionary value of another and vice versa

dict = {1:'hell',2:'is',3:'empty'}
dict_inv={}
for key,value in dict.items():
    dict_inv[value]=key
print(dict)
print(dict_inv)