class Employee:
    language = "Python"  # This is a class attribute
    salary = "10000000"
    def getInfo(self):
        print(f"The langauge is {self.language}. The salary is {self.salary}")

    @staticmethod
    def greet():
        print("Good morning....")
CEO = Employee()

CEO.getInfo()  # same as CEO.getInfo(harry)
CEO.greet()

