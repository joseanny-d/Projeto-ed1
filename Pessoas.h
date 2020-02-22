#ifndef PESSOAS_H_INCLUDED
#define PESSOAS_H_INCLUDED

typedef struct fila Fila;
typedef struct lista FLista;
typedef struct doador Doador;

Fila *criarFila(void);//FUNCAO PARA CRIAR A FILA.

void liberaFila(Fila*f);//FUNCAO  PARA LIBERAR A FILA.
void cadastrarPessoa(Fila *f, Doador *d);//FUNCAO  PARA CADASTRA AS PESSOAS NA FILA DE DOA��ES.
void removerPessoa(Fila *f,char *nome,char *doacao);//FUNCAO  PARA REMOVER AS PESSOAS DA FILA DE DOA��ES.
void exibirPessoas(Fila *f);//FUNCAO PARA EXIBIR A FILA DE DOACOES.
int verificarFila(Fila *f);//FUNCAO PARA VERIFICAR SE A FILA ESTA VAZIA.

Doador *criarPessoa(char *nome, char *CPF, char *doacao);//FUN��O PARA CADASTRAR OS DOADORES.


#endif // PESSOAS_H_INCLUDED
