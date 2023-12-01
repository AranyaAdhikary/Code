# create two dictionaries
# one stores conversion values from meters to centimeters
# other stores the reverse

dict ={}
dict_rev={}
for _ in range(4):
    val = int(input('Meter : '))
    dict[val] = val*100
    dict_rev[val*100] =val
print('m to cm : ',dict)
print('cm to m : ',dict_rev)
