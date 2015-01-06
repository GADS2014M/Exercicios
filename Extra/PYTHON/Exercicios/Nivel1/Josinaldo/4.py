# coding: latin-1

'''
@author: Josinaldo

4) Faça um programa que calcule o aumento de um salário. Ele deve solicitar o valor do salário e a 
porcentagem do aumento. Exiba o valor do aumento e do novo salário.
'''

if __name__ == '__main__':
    salario = int (raw_input("Digite o valor do salário: "))
    aumento = int (raw_input("Digite a porcentagem do aumento: "))
    resultado = salario + (salario * (aumento / 100.0))
    print "O novo salário é: %.1f" % (resultado)
