# create a dictionary of cubes of odd numbers in the range 1-10

nums = [1,2,3,4,5,6,7,8,9,10]
cube = list(map(lambda x: x ** 3, nums))
print(dict(zip(nums,cube)))
