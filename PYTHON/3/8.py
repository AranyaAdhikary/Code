# try and except for non-numeric input in pay(hours, rate)

while True: 
    hours = input('Enter no. of hours : ')
    rate = input('Enter the rate : ')
    try:
        hours=int(hours)
        rate=int(rate)
        break
    except:
        print('Non - numeric value')
print('The pay is', hours*rate)
    
