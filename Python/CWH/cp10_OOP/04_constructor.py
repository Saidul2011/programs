class Employee:
    language = "Python"  # This is a class attribute
    salary = "10000000"

    def __init__(self, name, salary, language):  # dunder method which is automatically called
        self.name=name
        self.salary=salary
        self.language=language
        print("I am creating an object")

    def getInfo(self):
        print(f"The langauge is {self.language}. The salary is {self.salary}")

    @staticmethod
    def greet():
        print("Good morning....")

CEO = Employee("Saidul", 150000, "JavaScript")

print(CEO.name,CEO.salary,CEO.language)


