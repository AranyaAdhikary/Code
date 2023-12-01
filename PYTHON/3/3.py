# Take score only between 0 and 100
# Change it to (0.0, 1.0)
# >=.9 A, >=.8 B, >=.7 C, >=.6 D, <.6 F

a = float(input("Enter a score : "))
if(a<0 or a>100):
    print("Wrong Input")
else:
    a = a/100
    if(a>=.9):
        print('A')
    elif(a>=.8):
        print('B')
    elif(a>=.7):
        print('C')
    elif(a>=.6):
        print('D')
    else:
        print('F')