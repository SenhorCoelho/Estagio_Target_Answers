# Resolução das Questões

Este repositório contém as perguntas e respostas da entrevista de estágio para a empresa Target Sistemas.

Os desafios envolvendo código foram resolvidos na linguagem C.

PROBLEMA 1:<br>
Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência. 
IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

SOLUÇÃO:<br>
Arquivo: fibonacci.c<br>
Para este problema, utilizei uma recursão com os números iniciais da sequência de fibonacci, checando a cada chamada se o número atual da sequência é igual à entrada ou se é maior.
Há proteções contra números negativos e mais de um argumento no programa, mas não protegi contra overflow de inteiro porque achei que seria overkill.
<hr>

PROBLEMA 2:<br>
Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre. 
IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código; 

SOLUÇÃO:<br>
Arquivo: count_chara.c<br>
Novamente utilizei argc e argv pra pegar inputs do usuário. Tentei fazer uma solução geral que funciona pra mais de um caracter, uma vez que a implementação seria basicamente a mesma.
Coloquei o mínimo de proteção quanto à quantidade de argumentos e garanti que o segundo argumento não será uma string, mas um único caracter.
<hr>

PROBLEMA 3:<br>
Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA); 
Ao final do processamento, qual será o valor da variável SOMA?

SOLUÇÃO:<br>
Arquivo: soma.c<br>
Implementei a lógica em um programinha e a variável SOMA apresentou o resultado 77.
<hr>

PROBLEMA 4:<br>
Descubra a lógica e complete o próximo elemento: <br>
a) 1, 3, 5, 7, ___ <br>
b) 2, 4, 8, 16, 32, 64, ____ <br>
c) 0, 1, 4, 9, 16, 25, 36, ____ <br>
d) 4, 16, 36, 64, ____ <br>
e) 1, 1, 2, 3, 5, 8, ____ <br>
f) 2, 10, 12, 16, 17, 18, 19, ____<br>

SOLUÇÃO:<br>
Não desenvolvi código pra esse problema. As respostas que pensei foram:<br>
a) 1, 3, 5, 7, 9 <br>
b) 2, 4, 8, 16, 32, 64, 128<br>
c) 0, 1, 4, 9, 16, 25, 36, 49 <br>
d) 4, 16, 36, 64, 100<br>
e) 1, 1, 2, 3, 5, 8, 13 <br>
f) 2, 10, 12, 16, 17, 18, 19, 200<br>

A lógica seria:<br>
a) Números ímpares em sequência;<br>
b) Potências de 2, começando em 1;<br>
c) Próximo número = Número anterior + Número Ímpar em sequência ascendente;<br>
d) Próximo número = (Primeiro Número x Número ímpar me sequência ascendente) + Número Anterior;<br>
e) Sequência de Fibonnaci;<br>
f) Números começando em D;<br>
<hr>

PROBLEMA 5:<br>
Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?

SOLUÇÃO:<br>
Vou assumir que as lâmpadas começam todas apagadas.<br>
Meu primeiro passo é acender o interruptor 1 e esperar alguns minutos.<br>
Em seguida, apago o interruptor 1 e acendo o 2, e sigo pra sala 3.<br>
Se a luz está acesa, sei que o interruptor 2 corresponde àquela sala.<br>
Se está apagada, toco na lâmpada. Se estiver quente(porque deixei a lampada ligada um tempo), sei que o interruptor 1 corresponde àquela sala. Se estiver fria, é o interruptor 3.<br>
Sabendo o interruptor dessa sala 3(Vou assumir aqui que é o interruptor 3), posso somente acender o interruptor 1 e seguir pra sala 2.<br>
Se a luz estiver acesa, então o interruptor 1 corresponde à sala 2 e o interruptor 2 corresponde à sala 1. Se estiver apagada, o inverso é válido.<br>
