
/* Estos son los ficheros de cabecera usuales */
#include "winsock.h"
#include <stdio.h>          
#include <sys/types.h>
//#include <sys/socket.h> 
//#include <netinet/in.h> 
//s#include <netdb.h> 
//#include <socket.h>
//#include <netinet/in.h>
#include "string.h"
#include "iostream"
#include "conio.h"
using namespace std;

#define PORT 3550 /* El puerto que ser� abierto */
#define BACKLOG 2 /* El n�mero de conexiones permitidas */

#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)

main()
{

   int fd, fd2; /* los ficheros descriptores */

   struct sockaddr_in server; 
   /* para la informaci�n de la direcci�n del servidor */

   struct sockaddr_in client; 
   /* para la informaci�n de la direcci�n del cliente */

   int sin_size;

   /* A continuaci�n la llamada a socket() */
   if ((fd=socket(AF_INET, SOCK_STREAM, 0)) == -1 ) {  
      printf("error en socket()\n");
      exit(-1);
   }

   server.sin_family = AF_INET;         

   server.sin_port = htons(PORT); 
   /* htons() de la secci�n "Conversiones */

   server.sin_addr.s_addr = INADDR_ANY; 
   /* INADDR_ANY coloca nuestra direcci�n IP autom�ticamente */

   bzero(&(server.sin_zero),8); 
   /* escribimos ceros en el resto de la estructura */


   /* A continuaci�n la llamada a bind() */
   if(bind(fd,(struct sockaddr*)&server, sizeof(struct sockaddr))==-1) 
   {
      //printf("error en bind() \n");
      cout << "error en << bind()" << endl;
      exit(-1);
   }     

   /* llamada a listen() */
   if(listen(fd,BACKLOG) == -1) {  
      //printf("error en listen()\n");
      cout << "error en listen()" << endl;
      exit(-1);
   }

   while(1) {
      sin_size=sizeof(struct sockaddr_in);
      /* A continuaci�n la llamada a accept() */
      if ((fd2 = accept(fd,(struct sockaddr *)&client, &sin_size))==-1) {
         //printf("error en accept()\n");
         cout << "error en accept()" << endl;
         exit(-1);
      }

      printf("Se obtuvo una conexi�n desde %s\n", inet_ntoa(client.sin_addr) ); 

      // /* que mostrar� la IP del cliente */

      send(fd2,"Bienvenido a mi servidor.\n",22,0); 
      // /* que enviar� el mensaje de bienvenida al cliente */

      //close(fd2); /* cierra fd2 */
   }
}

