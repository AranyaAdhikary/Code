# dictionary of your friends’ name (as keys) and their birthdays
# print the items in the dictionary in a sorted order
# prompt the user to enter a name and check if it is present
# if the name does not exist, then ask the user to enter DOB. 
# add the details 

from datetime import datetime

def get_key(val):
    for key, value in dict.items():
        if val == value:
            return key

def sorting():
    lst=[]
    for key,value in dict.items():
        lst.append(value)
    lst.sort(key = lambda date: datetime.strptime(date,"%d %b %Y"))
    for i in lst:
        print(get_key(i),'->',i)

dict = {'Soumodeep' : '26 Feb 2003','Dipan' : '19 Sep 2003','Aranya' : '30 Aug 2002','Koyena' : '30 Sep 2002'}

sorting()

print('Enter -1 to stop.')
while True:
    a = input('Name : ')
    if(a=='-1'):
        break
    if a in dict.keys():
        continue
    else:
        b = input('DOB : ')
        dict[a]=b

sorting()