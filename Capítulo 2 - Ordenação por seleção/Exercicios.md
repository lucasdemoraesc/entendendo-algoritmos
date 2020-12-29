# **<div style="text-align:center">Exercícios Capítulo 2</div>**

### **2.1)** Suponha que você esteja criando um aplicativo para acompanhar as suas finanças. Todos os dias você anotará tudo o que gastou e onde gastou. No final do mês, você deverá revisar os seus gastos e resumir o quanto gastou. Logo, você terá um monte de inserções e poucas leituras. Você deverá usar um array ou uma lista para implementar este aplicativo ?
	Uma lista será melhor que um array.
	Visto que, as listas possuem são bem mais flexíveis à inserções.

### **2.2)** Suponha que você esteja criando um aplicativo para anotar os pedidos dos clientes em um restaurante. Seu aplicativo precisa de uma lista de pedidos. Os garçons adicionam os pedidos a essa lista e os chefes retiram os pedidos da lista. Funciona como uma fila. Os garçons colocam os pedidos no final da fila e os chefes retiram os pedidos do começo dela para cozinha-los. Você usaria um array ou uma lista para encadeada para implementar essa lista ?
	Uma lista encadeada. Tendo em vista que não sei a quantidade de pedidos simultâneos na lista.
	E que as listas são boas para inserção, e deleção em qualquer posição.

### **2.3)** Vamos analisar um experimento. Imagine que o Facebook guarda uma lista de usuários. Quando alguém tenta acessar o Facebook, uma busca é feita pelo nome de usuário. Se o nome da pessoa está na lista, ela pode continuar o acesso. As pessoas acessam o Facebook com muita frequência, então existem muitas buscas nessa lista. Presuma que o Facebook usa a pesquisa binária para procurar um nome na lista. A pesquisa binária requer acesso aleatório - você precisa ser capaz de acessar o meio da lista de nomes instantaneamente. Sabendo disso, você implementaria essa lista como um array ou uma lista encadeada ?
	Um array. Tendo em vista que com uma lista encadeada não seria possível acessar posição instantaneamente.

### **2.4)** As pessoas se inscrevem no Facebook com muita frequência também. Suponha que você decida usar um array para armazenar a lista de usuários. Quais as desvantagens de um array em relação ás inserções ? Em particular, imagine que você está usando uma pesquisa binária para buscar os logins. O que acontece quando você adiciona novos usuários em um array ?
	Inserções em arrays dependem de memória previamente alocada.
	No caso citado, como é usada uma pesquisa binária, o login a ser inserido, precisa ser ordenado.
	Para isso, será necessário mover - no pior dos casos - todos os elementos da lista, a fim de inserir o novo.

### **2.5)** Na verdade, o Facebook não usa nem array nem listas encadeadas para armazenar informações. Vamos considerar uma estrutura de dados híbrida: um array de listas encadeadas. Você tem um array com 26 slots. Cada slot aponta para uma lista encadeada. Por exemplo, o primeiro slot aponta para uma lista que possui os nomes que começam com *A*, o segundo para uma lista com nomes que começam com *B*, e assim por diante. Suponha que o **Adit B** se inscreva no Facebook e você queira adicioná-lo á lista. Você vai do slot 1 do array, a seguir para a lista encadeada do slot 1, e adiciona **Adit B** no final. Agora, suponha que você queira procurar o **Zakhir H**. Você vai ao slot 26. Então, procura pela lista até encontrar o **Zakhir H**. Esta nova estrutura híbrida é mais rápida ou mais lenta que arrays e listas encadeadas.
	Para buscas, é mais lenta que em arrays, mas mais rápida que em listas encadeadas.
	Para inserções, é mais rápida que em arrays, para listas encadeadas o mesmo tempo.