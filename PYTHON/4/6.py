# repeatedly reads numbers until the user enters “done”.
# print the total, count, and average of the numbers
# for non - numeric value, use try and except

total = 0
count = 0
print('Enter the numbers : ')
while True:
    n = input()
    if(n == 'done'):
        break
    try:
        n = float(n)
    except:
        continue
    total = total + n
    count = count + 1
print('The total is',total)
print('The count is',count)
print('The average is',total/count)

    