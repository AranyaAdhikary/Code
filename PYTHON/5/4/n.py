# split a sentence w.r.t. a substring mentioning both one and two parameters
# do this thrice from the start and thrice from the end

str = 'a#b#c#d#e#f#g#h'
print('Splitting using 1 parameter : ',str.split('#'))
print('Splitting using 2 parameters : ',str.split('#',1))
print('Splitting thrice from start : ',str.split('#',3))
print('Splitting thrice from end : ',str.rsplit('#',3))
