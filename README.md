# ProjetosFundamentosCG
Repositório contendo os algoritmos da cadeira de **Algoritmos e Programação: Fundamentos**
## Informações
- Autor: Alisson Henrique Maciel Grings
- Curso: Ciência da Computação
- Cadeira: 'Algoritmos e Programação: Fundamentos'
- Professora: Rossana Baptista Queiroz

----------------------------------------------------------------------------------

# Álbum de Figurinhas Virtual - Trabalho Prático (Grau A)
 
**Disciplina:** Algoritmos e Programação: Orientação a Objetos

---

## 1. Visão Geral do Projeto

O objetivo deste trabalho foi desenvolver um sistema de álbum de figurinhas virtual em C++. O foco principal não era a interface gráfica, mas sim a correta aplicação dos conceitos de **Orientação a Objetos (OO)** para modelar o problema.

Os requisitos principais do sistema incluíam:
* Gerenciamento de múltiplos usuários (cadastro e login).
* Um sistema de coleção de figurinhas (abrir pacotes, colar no álbum).
* Um mecanismo de troca de figurinhas entre usuários.
* **Persistência de dados**: Todas as informações (usuários, coleções e trocas) deveriam ser salvas em arquivos de texto (`.csv`) para que os dados não se perdessem ao fechar o programa.

## 2. Arquitetura e Modelagem Orientada a Objetos

A espinha dorsal do sistema é a modelagem de classes. Foi dividido as responsabilidades do problema nas seguintes classes, conforme o diagrama UML fornecido:

**(Aqui você deve colocar a imagem `image_09fe82.png` no seu README. O Markdown para isso é: `![Diagrama de Classes](image_09fe82.png)`)**

### Classe `Figurinha`
É a entidade mais básica. Representa um cromo.
* **Atributos:** `numero`, `nome`.
* **Estado (Status):** Para gerenciar o que o usuário pode fazer, criamos um `enum` para o status:
    * `0: NA_COLECAO` (O usuário tem, mas ainda não colou. É uma repetida ou está disponível).
    * `1: COLADA` (A figurinha está no álbum).
    * `2: PARA_TROCA` (O usuário marcou ativamente para troca).

### Classe `Album`
Representa a coleção de um usuário.
* **Atributos:** `std::map<int, Figurinha> colecao`.
* **Decisão de Design:** Usamos um `map` (um mapa da biblioteca padrão) ao invés de um `vector`. Isso nos permite acessar uma figurinha instantaneamente pelo seu `numero` (ex: `album.getFigurinha(10)`), o que é muito mais eficiente do que percorrer um vetor.

### Classe `Usuario`
Modela o jogador e seus dados de acesso.
* **Atributos:** `nomeDeUsuario`, `senha`.
* **Conceito de OO:** Esta classe aplica **Composição**. Um `Usuario` *"tem um"* `Album`. A classe `Usuario` não sabe os detalhes de como a coleção funciona, ela apenas delega essa responsabilidade para seu objeto `Album`.

### Classe `Troca`
Modela uma solicitação de troca. É um objeto simples que armazena os dados da transação.
* **Atributos:** `proponente`, `destinatario`, `figurinhaOferecidaId`, `figurinhaRequeridaId`.
* **Estado (Status):** Também usa um `enum` para o status da troca:
    * `0: PENDENTE`
    * `1: ACEITA`
    * `2: RECUSADA`

### Classe `Sistema`
É a classe "orquestradora" ou "cérebro" do projeto.
* **Responsabilidades:**
    1.  Gerenciar os menus e a interação com o usuário (leitura do `cin`).
    2.  Armazenar os vetores principais: `vector<Usuario> usuarios` e `vector<Troca> trocas`.
    3.  Controlar o `usuarioLogado`.
    4.  **A única classe que lê e escreve nos arquivos `.csv`**. Ela é responsável por carregar todos os dados na inicialização e salvá-los ao sair.

---

## 3. Funcionalidades e Fluxo de Uso

O programa funciona através de menus de console, que representam as telas do aplicativo.

#### Menu Principal (Tela Inicial)
1.  **Novo Álbum:** Cria um novo objeto `Usuario` e o adiciona ao vetor `usuarios` do `Sistema`.
2.  **Acessar Álbum:** Verifica se o `Usuario` existe e a `senha` está correta. Se sim, carrega a coleção específica desse usuário do arquivo e entra no próximo menu.
3.  **Sair do Aplicativo:** O ponto mais importante. Antes de fechar, chama os métodos `salvarUsuarios()` e `salvarTrocas()` para persistir todos os dados em memória nos arquivos CSV.

#### Menu Gerenciar Álbum
1.  **Ver Álbum:** Mostra o status de *todas* as figurinhas do catálogo.
    * `[COLADA]` - Se o `status` da figurinha no álbum do usuário for `1`.
    * `[NA COLEÇÃO]` - Se o usuário a possui, mas o `status` não é `1` (pode colar).
    * `[X]` - Se a figurinha não existe no `map` do `Album` do usuário.
2.  **Gerenciar a coleção:** Leva ao menu de gerenciamento (trocas, colagem).
3.  **Abrir pacote de Figurinhas:** Gera 3 números aleatórios, busca essas figurinhas no catálogo mestre e as adiciona ao `Album` do `usuarioLogado`.

#### Menu Gerenciar Coleção
Este é o menu com a lógica de negócios principal.
1.  **Colar Figurinha:** O usuário digita o número. O sistema busca a figurinha no `Album` do usuário e altera seu `status` para `COLADA`.
2.  **Disponibilizar para troca:** Altera o `status` da figurinha para `PARA_TROCA`.
3.  **Propor troca:** O usuário vê as figurinhas `PARA_TROCA` de outros usuários. Ao escolher, um novo objeto `Troca` é criado e adicionado ao vetor `trocas` do `Sistema` com status `PENDENTE`.
4.  **Revisar solicitações:** O sistema filtra o vetor `trocas` procurando por aquelas onde o `destinatario` é o `usuarioLogado` e o `status` é `PENDENTE`.
    * **Ao Aceitar:** A lógica de troca é executada. A figurinha A é removida do `Album` do proponente e adicionada ao `Album` do destinatário. A figurinha B faz o caminho inverso. O status da `Troca` muda para `ACEITA`.
    * **Ao Recusar:** O status da `Troca` muda para `RECUSADA`.

---

## 4. Persistência de Dados (.csv)

Para garantir que os dados sejam salvos, usamos 3 tipos de arquivos:

* `figurinhas_catalogo.csv`: A lista "mestre" de todas as figurinhas que existem. É lida no início e nunca é modificada.
* `usuarios.csv`: Armazena o `nomeDeUsuario` e `senha` de todos os usuários cadastrados.
* `trocas.csv`: Salva o histórico de todas as propostas de troca (pendentes, aceitas ou recusadas).
* **`[nomeUsuario]_colecao.csv`**: Este é o arquivo mais importante da persistência. Cada usuário tem seu *próprio* arquivo de coleção (ex: `felipe_colecao.csv`). Ele salva apenas o `numero` da figurinha e seu `status`. Isso torna o carregamento muito eficiente, pois ao logar, o sistema só precisa ler o arquivo de coleção daquele usuário específico.

---

## 5. Como Compilar e Executar

### Pré-requisitos
Certifique-se de que os arquivos de dados iniciais estejam na mesma pasta do executável:
* `figurinhas_catalogo.csv` (preenchido com as figurinhas)
* `usuarios.csv` (pode estar vazio)
* `trocas.csv` (pode estar vazio)

### Compilação (usando g++)
Abra um terminal na pasta do projeto e execute o comando:
```bash
g++ main.cpp Sistema.cpp Usuario.cpp Album.cpp Figurinha.cpp Troca.cpp -o programa
