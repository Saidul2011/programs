class Employee:
    language = "Python"  # This is a class attribute
    salary = "10000000"

CEO = Employee()
CEO.name= "Saidul"   # This is a object (instance) attribute

print(CEO.name,CEO.language,CEO.salary)