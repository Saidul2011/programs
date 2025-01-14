name="ABCDEFG"       #   A  B  C  D  E  F  G 
print(name[-3:-1])   #   0  1  2  3  4  5  6
# same as            #  -7 -6 -5 -4 -3 -2 -1
print(name[4:6])

print(name[:4]) # same as name[0:4]
print(name[3:]) # same as name[3:7(sizeof(str))]