#include "biblaureano.h"

Imagem nave(Imagem i);

int main()
{
   Imagem h1("**\n",5,5);
   Imagem h2("XX\n",40,15);

   while(true)
   {
      h1 = nave(h1);
      h2 = nave(h2);
   }
   return 0;
}

Imagem nave(Imagem i)
{
   i.imprime();
   espera(50);
   i.limpa();
   if( randomico()%2 == 0)
   {
      i.setX( i.getX()-1 );
   }
   else
   {
      i.setX( i.getX()+1 );
   }
   if( randomico()%2 == 0)
   {
      i.setY( i.getY()-1 );
   }
   else
   {
      i.setY( i.getY()+1 );
   }
   //cout << i.getX() << endl;
   return i;
}
