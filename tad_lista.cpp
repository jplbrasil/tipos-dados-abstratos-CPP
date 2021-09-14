typedef struct celula_t *apontador;

typedef struct
{
 int chave;
}tipoitem;

typedef struct celula_t
{
 tipoitem item;
 apontador proximo;
}tipocelula;

typedef struct
{
 apontador primeiro;
 apontador ultimo;
}tipolista;

void flvazia(tipolista *lista)
{
 lista->primeiro=(apontador)malloc(sizeof(tipocelula));
 lista->ultimo=lista->primeiro;
 lista->primeiro->proximo=NULL;
}

int vazia(tipolista lista)
{
 return(lista.primeiro==lista.ultimo);
}

void insere(tipoitem x, tipolista *lista)
{
 lista->ultimo->proximo=(apontador)malloc(sizeof(tipocelula));
 lista->ultimo=lista->ultimo->proximo;
 lista->ultimo->item=x;
 lista->ultimo->proximo=NULL;
}

void retira(apontador p,tipolista *lista,tipoitem *item)
{
 /* o item a ser retirado é o seguinte ao apontado por p */
 apontador q;
 if((vazia(*lista))||(p==NULL)||(p->proximo==NULL))
  printf("Erro! Lista vazia ou posicao nao existente!");
 else
 {
  q=p->proximo;
  *item=q->item;
  p->proximo=q->proximo;
  if(p->proximo==NULL)
   lista->ultimo=p;
  free(q);
 }
}

void imprime(tipolista lista)
{
 apontador p;
 p=lista.primeiro->proximo;

 while(p!=NULL)
 {
  printf("%d\n",p->item.chave);
  p=p->proximo;
 }
}