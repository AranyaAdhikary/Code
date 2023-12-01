#  to map two lists (one containing color names and the other containing color codes) into dictionary.

names = ['red', 'green', 'blue']
codes = ['#FF0000','#008000', '#0000FF']
dict = dict(zip(names,codes))
print(dict)