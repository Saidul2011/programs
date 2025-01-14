
# A spam comment is defined as a text containing following keywords:
# "Make a tot ot money-. "buy now', •subscribe this-. •click this-.
#  Write a program to detect these spams,
p1="Make lot of maney"
p2="buy now"
p3="subcribe this"
p4="click here"

a= p4 in "veiw more to click here "
print(a,type(a))

message=input("Enter you comment: ")
if((p1 in message) or (p2 in message) or (p3 in message) or (p4 in message)):
    print("This comment is spam.")
else:
    print("This is not spam comment.")