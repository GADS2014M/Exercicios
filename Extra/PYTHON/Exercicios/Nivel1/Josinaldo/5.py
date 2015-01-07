# coding: latin-1

'''
@author: Josinaldo

5) Solicite o preço de uma mercadoria e o percentual de desconto. Exiba o valor do desconto e o 
preço a pagar.
'''

if __name__ == '__main__':
    preco = int (raw_input("Qual o preço da mercadoria?: "))
    desconto = int (raw_input("Qual o percentual do desconto?: "))
    resultado_desconto = preco * (desconto / 100.0)
    total = preco - resultado_desconto
    print "Valor do desconto: %.1f" % (resultado_desconto)
    print "Valor a pagar: %.1f" % (total)
