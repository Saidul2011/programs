# Write a python function to remove a given word from
#  a list ad strip it at the same time.
def remove(l,word):
    for item in l:
        if(item==word):
            l.remove(item)
    return l

list=["Akib","Rohan","Azad","Khairul"]
print(remove(list,"Azad"))