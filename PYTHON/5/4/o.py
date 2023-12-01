# store a sentence having a name, date of birth, date of death separated by * without space
# split it and store it in a list
# split the dates and save it in two separate lists
# Print as : XYZ lived about 82 years

str = 'Sukanya*05/12/2002*30/02/2020'
lst = str.split('*')
dob = lst[1].rsplit('/')
dod = lst[2].rsplit('/')
x = int(dod[-1])-int(dob[-1])
print(lst[0],'lived about',x,'years')

