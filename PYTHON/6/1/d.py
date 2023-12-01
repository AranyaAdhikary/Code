# store items in list

print("Enter items or -1 to exit : ")
lst=[]
while(True):
    i = input()
    if i=='-1':
        break
    lst.append(i)
print(lst)