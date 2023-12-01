# create a dictionary of products purchased and their MRPs
# calculate the bill and display to the customer

dict = {'fan':50,'iron':60,'shoe':50,'sock':100}
money=0
for i in dict.keys():
    print('Enter the quantity of',i,': ',end='')
    a = int(input())
    money = money + (dict[i]*a)
print('The bill is Rs.',money)

