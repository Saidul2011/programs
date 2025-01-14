# Write a program to grpet au the names stored •n a list and 
# wtlich startswith S.
list=["Akib","Arif","Babu","Rohan","Raj","Maidul","Saidul"]
lowercase_list = [s.lower() for s in list]
s=input("Enter the first latter: ")
for name in lowercase_list:
    if(name.startswith(s)):
        print(name.capitalize())
