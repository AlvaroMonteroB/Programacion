range=1,2,3,4,5,6,7
mal=int(input("Digite un 1 o un 0"))

if (mal==0):
    valor=True
else:
    valor=False
if (valor):
        print(valor)
        variable=int(input("Digite un numero"))
else:
        print(valor)
        variable=-3
variable=variable*2
print(variable)

try:
    prueba=(input("Digite un numero"))
    prueba=int(prueba)
    prueba=prueba+prueba/3
except:
    print("error con el tipo de dato")
    bandera=True
if bandera:
    prueba=int(input("Digite un numero"))
    print(prueba)
    
else:
    print(prueba)