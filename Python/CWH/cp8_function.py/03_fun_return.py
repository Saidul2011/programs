def From(name, roll):
    print("Name: " + name)
    print("Roll: ", roll)
    if(roll<30):
        return "Pass!"
    else:
        return "Fail!"
    

r=From("Rohan", 12)
print(r)

print("Result:",From("Akib", 56) )
