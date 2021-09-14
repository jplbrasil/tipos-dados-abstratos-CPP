typedef int Apontador;
typedef int TipoChave;
typedef char Caracter;

typedef struct {
  //TipoChave Chave;
  Caracter Letra;
  /* --- outros componentes --- */
} TipoItem;

typedef struct {
  TipoItem Item[MaxTam];
  Apontador Topo;
} TipoPilha;


void FPVazia(TipoPilha *Pilha)
{
  Pilha->Topo = 0;
}  /* FPVazia */


int Vazia(TipoPilha Pilha)
{
  return (Pilha.Topo == 0);
}  /* Vazia */


void Empilha(TipoItem x, TipoPilha *Pilha)
{
  if (Pilha->Topo == MaxTam)
    printf(" Erro   pilha est  a  cheia\n");
  else {
    Pilha->Topo++;
    Pilha->Item[Pilha->Topo - 1] = x;
  }
}  /* Empilha */


void Desempilha(TipoPilha *Pilha, TipoItem *Item)
{
  if (Vazia(*Pilha))
    printf(" Erro   pilha est  a  vazia\n");
  else {
    *Item = Pilha->Item[Pilha->Topo - 1];
    Pilha->Topo--;
  }
}  /* Desempilha */


int Tamanho(TipoPilha Pilha)
{
  return (Pilha.Topo);
}  /* Tamanho */
