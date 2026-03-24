# Calculadora Simples em C

Este projeto é uma calculadora básica desenvolvida em linguagem C. Ela permite ao usuário realizar operações matemáticas simples diretamente pelo terminal.



## Funcionalidades
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)


## Como funciona

O programa solicita ao usuário:

O primeiro número
A operação desejada (+, -, *, /)
O segundo número

Em seguida, utiliza uma estrutura switch para identificar a operação e exibir o resultado formatado com duas casas decimais.



## Observação importante

No código, foi utilizado:

scanf(" %c", &operacao);

O espaço antes do %c é essencial para ignorar caracteres pendentes no buffer (como o ENTER), garantindo que a operação seja lida corretamente.



## Exemplo de uso
Digite o primeiro numero:
10
Digite a operacao:
+
Digite o segundo numero:
5

Saída:

10.00 + 5.00 = 15.00
