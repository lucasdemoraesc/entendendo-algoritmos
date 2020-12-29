# **<div style="text-align:center">Exercícios Capítulo 1</div>**

### **1.1)** Suponha que você tenha uma lista com 128 nomes e esteja fazendo uma pesquisa binária. Qual seria o número máximo de etapas que você levaria para encontrar o nome desejado ?
	A pesquisa binária precisa de log₂ n para retornar o valor buscado.
	Logo, seriam necessarios log₂ 128 operações, ou, máximo de 7 etapas para encontrar o nome desejado.

### **1.2)** Suponha que você duplique o tamanho da lista. Qual seria o número máximo de etapas agora ?
	Como "duplicar a lista" aumenta apenas uma única operação na pesquisa binária, o número de etapas agora será 8.
	Veja: 128 x 2 = 256; e log₂ 256 = 8.

### **1.3)** Você tem um nome e deseja encontrar o número de telefone para esse nome em uma agenda telefônica. Forneça o tempo de execução na notação Big O.
	O(log n).

### **1.4)** Você tem um número de telefone e deseja encontrar o dono dele em uma agenda telefônica. (Dica: Deve procurar pela agenda inteira!).
	O(n).

### **1.5)** Você quer ler o número de cada pessoa da agenda telefônica.
	O(n).

### **1.6)** Você quer ler os números apenas dos nomes que começam com *A*.
	O(n).