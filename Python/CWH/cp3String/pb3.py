# Write a program to detect double space in string.
# Replace the double space from problem 3 with single spaces.
name="SK  SAIDUL ISLAM"
print(name)
print(name.find("  "))
print(name.replace("  "," "))
print(name.find("  ")) # Strings are immutable which means that you cannot change them
                     # by running functions on them

