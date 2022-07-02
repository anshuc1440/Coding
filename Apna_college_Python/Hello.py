
#calculator


first = input("Enter first number : ")
operator = input("Enter the operation (+,-,*,/) : ")
second = input("Enter the second number : ")

if operator == "+":
    print(int(first)+int(second))

elif operator == "-":
    print(int(first)-int(second))

elif operator == "*":
    print(int(first)*int(second))

elif operator == "/":
    print(int(first)/int(second))
else:
    print("Invlaid operation ")

# 0 1 2 3 4
numbers = range(5)
print(numbers)



J = 1
while J<=5:
    print(J*"*")
    J = J+1

i = 5
while i>=0:
    print(i*"*")
    i = i-1

for i in range(5):
    print(i)
# 0 1 2 3 4

#list
marks = [25, 23, 45, 65]
print(marks[1:4])
#23 45 65
print(marks[-2])
#45

for score in marks:
    print(score)

marks.append(99)
print(marks)

marks.insert(0,98)
print(marks)

print(98 in marks)

print(len(marks))

marks.clear()
print(marks)


students = ["ram","shyam","radha","kisan","naman"]

for student in students:
    if student == "radha":
        continue;
    print(student)


#tuple
marks = (95 , 65 ,85 ,85 ,96)
person = "ram" , "shyam" , "Abhi"
print(marks.count(85))
print(marks.index(96))

#set
marks = { 12,56,89,90,98,85,90 }
print(marks)

#Dictionary key and value
marks = {"English" : 95,"Chemistry" : 98}
print(marks["Chemistry"])
marks["physics"] = 97;
print(marks)

marks["physics"] = 99
print(marks)

#module functions
from math import *
print(sqrt(16))



def print_sum(first, second=4):
    print(first+second)

print_sum(16)
