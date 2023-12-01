# store a sparse matrix as a dictionary

mat = [[0, 0, 0, 1, 0],	[2, 0, 0, 0, 3],[0, 0, 0, 4, 0]]
dict = {}
for i in range(len(mat)):
	for j in range(len(mat[i])):
		if mat[i][j] != 0:
			dict[i,j] = mat[i][j]
print(dict)
