1. Crie um novo projeto, com o nome "AV2NomedoAluno". Caso seja criado um projeto fora deste padrão, a prova não será corrigida.

2. Crie a classe, não executável, "Piloto". Esta classe representa um piloto de Fórmula 1.
Um Piloto deve possuir id (Um número inteiro que identifica o Piloto), nome, idade, nacionalidade, número de títulos. Crie também TODOS os métodos que julgar necessário. Escolha o pacote mais adequado para esta classe. Justifique, com comentários nos métodos e membros de dados da classe a escolha pelos modificadores utilizados.

3. Crie a classe, não executável, "Carro". Esta classe representa um carro de Fórmula 1.
Um Carro deve possuir marca do motor, chassis (Ex: "F14 T"), marca dos pneus e marca do combustível utilizado. Escolha o pacote mais adequado para esta classe. Justifique, com comentários nos métodos e membros de dados da classe a escolha pelos modificadores utilizados.

4. Crie a classe, não executável, "Equipe". Esta classe representa uma equipe de Fórmula 1.
Uma Equipe deve possuir nome, data de fundação, país e uma lista de dois Pilotos e outra lista de dois carros (Sugestão: utilize vetores). Escolha o pacote mais adequado para esta classe. Justifique, com comentários nos métodos e membros de dados da classe a escolha pelos modificadores utilizados.

5. Crie um método, na classe Equipe, que cadastra um Piloto. Este método deve receber um objeto do tipo Piloto e o índice do vetor (O vetor que armazena os Pilotos) em que este deve ser cadastrado. Ainda, crie também um método que cadastra um Carro na Equipe. Este método deve receber um objeto do tipo Carro e o índice do vetor (O vetor que armazena os Carros) em que este deve ser cadastrado.

6. Crie um método, na classe Equipe, que designa um Carro a um Piloto. Ainda, crie também um método que troca os Carros entre os Pilotos, ou seja, o Carro do piloto A é designado para o Piloto B e o Carro do Piloto B é designado para o Piloto A. (Sugestão: utilize um vetor para armazenar qual Carro pertence a qual Piloto. Lembre-se de considerar todas as necessidades deste atributo)

7. Crie um método, na classe equipe, que adiciona uma vitória em um piloto específico. O "id" do piloto deve ser passado para o método.

8. Crie um método, na classe equipe, que imprime os atributos do Piloto com maior número de vitórias. Este método também deve imprimir os atributos do Carro que que o Piloto utiliza.

9. Crie uma classe executável. Ela deve realizar as seguintes operações:

* Criar dois Pilotos (Sem leitura de dados do usuário, escolha arbitrariamente os atributos).
* Criar dois Carros (Sem leitura de dados do usuário, escolha arbitrariamente os atributos).
* Criar uma Equipe (Sem leitura de dados do usuário, escolha arbitrariamente os atributos).
* Cadastrar os dois carros na Equipe.
* Cadastrar os dois Pilotos na Equipe.
* Utilizando um dos métodos criados, imprima os atributos do Piloto com maior número de vitórias.
* Utilizando um dos métodos criados, atribua uma vitória ao Piloto com maior número de vitórias.
* Utilizando um dos métodos criados, troque os Carros entre os Pilotos.
* Utilizando um dos métodos criados, imprima os atributos do Piloto com maior número de vitórias.
