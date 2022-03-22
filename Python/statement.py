num=[2,4,6,8]
for num in num:
    print(num)

students=["Alv","Dav","Die","Alb"]
for student in students: #student is a temporary variable pointing to the current item
    print(student)#we iterate across the original item and we point with another


var=0
for var in range(10):
    if var==7:
        break
    if var==6:
        print("var")
    
print(var)

edibles=["ham","spam","steak","cheese"]
for food in edibles:
    if food=="cheese":
        print("No more")
        break
    else:
     print("Food is "+food)

print("Set password")
password=input()
enter=False
while enter==False:
    print("write password to enter")
    passwrd=input()
    if password==passwrd:
        enter=True
    else:
        print("Incorrect Password")
        enter==False
print("You're in")

a = [ [0,0,0,0,1], [0,0,0,2,0], [0,0,3,0,0], [0,4,0,0,0], [5,0,0,0,0] ]#Only print the non zero elements
for it in a:
    for it2 in it:
        if it2!=0:
            print(it2)
        else:
            st=True

    
    