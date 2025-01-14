# Write a program to find out whether a student has pass or 
# failed if total marks > 40% and at least in each 
# subject to pass >33%. Assume 3 subjects and take marks as an 
# input from the user.
math=int(input("Enter Math marks: "))
phy=int(input("Enter physics marks: "))
chem=int(input("Enter chemstry mars: "))
total_percentge=(math+phy+chem)/3

if(total_percentge>40 and math>33 and phy>33 and chem>33):
        print("Pass!",total_percentge)
else:
        print("Fail!",total_percentge)
print("Fail!",total_percentge)
    