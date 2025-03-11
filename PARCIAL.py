#Entrada 
dano_base = float(input("Ingresa el daño de la bala: "))
tipo_material = int(input("Ingresa el tipo de material (1 = Madera, 2 = Metal, 3 = Concreto): "))
#Saida
dano_final = -1 #En caso de error
if tipo_material == 1:  # Madera
    dano_final= dano_base * 0.70  # Reduce un 30%
elif tipo_material == 2:  # Metal
    dano_final= dano_base * 0.50  # Reduce un 50%
elif tipo_material == 3:  # Concreto
    dano_final= dano_base * 0.30  # Reduce un 70%
else: 
    print("Tipo de material no válido")

# Solo si el material es válido
if dano_final != -1  :
    print("Daño Final es", round(dano_final, 2))

