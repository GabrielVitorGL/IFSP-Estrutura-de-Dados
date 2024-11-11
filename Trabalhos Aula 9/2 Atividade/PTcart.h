/*************************************
* Atribui novo nome para struct       *
* pontoCartesiano: PTcart             *
*************************************/
typedef struct pontoCartesiano PTcart;

/*************************************
* Cria um novo PTcart com coordenadas *
* "x" e "y".                         *
*************************************/
PTcart* criaPTcart(float x, float y);

/*************************************
* Libera a memória alocada para um    *
* PTcart.                            *
*************************************/
void liberaPTcart(PTcart* p);

/*************************************
* Acessa os valores "x" e "y" de um   *
* PTcart e os retorna por referência. *
*************************************/
void acessaPTcart(PTcart* p, float* x, float* y);

/*************************************
* Atribui os valores "x" e "y" a um   *
* PTcart.                            *
*************************************/
void atribuiPTcart(PTcart* p, float x, float y);

/*************************************
* Calcula a distância entre dois      *
* pontos no plano cartesiano.         *
*************************************/
float distanciaPTcart(PTcart* p1, PTcart* p2);

