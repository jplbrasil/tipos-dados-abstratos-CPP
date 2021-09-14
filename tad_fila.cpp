//------------------------------------------------------------------
//               TAD FILA
//------------------------------------------------------------------

#define  TAM_FILA  1000

struct TipoItem
{
 int chave;

 /*
  declaracao de outros itens
  .
  .
  .
 */

};

struct TipoFila
{
 TipoItem Item[TAM_FILA];
 int Frente, Tras;
};

//------------------------------------------------------------------
//               fila_vazia
//------------------------------------------------------------------
int fila_vazia(TipoFila Fila)
{
  return (Fila.Frente == Fila.Tras);
}

//------------------------------------------------------------------
//               fila_imprime
//------------------------------------------------------------------
void fila_imprime(TipoFila Fila)
{

  int Aux;

  for (Aux=0;Aux<Fila.Tras;Aux++)
  {
     clrscr();

     if((Aux<Fila.Frente)&&(Aux>=Fila.Tras)&&(Aux!=0))
      printf(" ");
     else
      cout<<Fila.Item[Aux].chave;

     getch();

  }

}

//------------------------------------------------------------------
//               fila_inicializa
//------------------------------------------------------------------
void fila_inicializa(TipoFila *Fila)
{
  Fila->Frente = 0;
  Fila->Tras = Fila->Frente;
}

//------------------------------------------------------------------
//               fila_enfileira
//------------------------------------------------------------------
void fila_enfileira(TipoItem x, TipoFila *Fila)
{
  if (((Fila->Tras + 1) % TAM_FILA) == Fila->Frente)
    printf(" Erro! Fila esta cheia!\n");
  else
  {
    Fila->Item[Fila->Tras] = x;
    Fila->Tras = (Fila->Tras + 1) % TAM_FILA;
  }
}

//------------------------------------------------------------------
//               fila_desenfileira
//------------------------------------------------------------------
void fila_desenfileira(TipoFila *Fila, TipoItem *Item)
{
  if (fila_vazia(*Fila))
    printf(" Erro! Fila esta vazia!\n");
  else
  {
    *Item = Fila->Item[Fila->Frente];
    Fila->Frente = (Fila->Frente + 1) % TAM_FILA;
  }
}

//------------------------------------------------------------------
//               FIM DO TAD FILA
//------------------------------------------------------------------
