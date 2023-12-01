# 1.5 times the hourly rate for hours worked above 40 hours

hours, rate = map(float, input("Enter no. of hours and rate : ").split())
if(hours<=40):
    print('The pay is',hours*rate)
else:
    print('The pay is',(40*rate)+(1.5*rate*(hours-40)))