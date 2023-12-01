# Split lines which are in triple quote
# split another line which includes escape sequences

str = """hello
hello
world"""
lst = str.split('\n')
print(lst)