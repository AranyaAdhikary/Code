# display a menu and the price
# take the order from the customer
# check if the ordered product is in the menu
# in case it is not there, the customer should be asked to reorder 
# if it is present, then product should be added in the bill.

dict = {'coffee':50,'momo':60,'drink':50,'rice':10}
for key,value in dict.items():
    print(key,'->',value)
money=0
print('Enter -1 to stop.')
while True:
    a = input('Order : ')
    if(a=='-1'):
        break
    if a in dict.keys():
        money = money + dict[a]
print('The bill is Rs.',money)