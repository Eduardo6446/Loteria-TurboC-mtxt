#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include <time.h>
#include <dos.h>

int i;  /* Declaracion de variables  */
int a=0,x=0; /*Declaracion de variables*/
int fil,fil2; /*Declaracion de variables  */
int col,col2;
int alto,ancho,alto1,ancho1,ancho2,alto2;
char tecla,enter,ch;
int bloqueo=0,numIngresado1,premio,contador=1,numerofinal1,numIngresado2,numIngresado3,numerofinal2,numerofinal3,premio2;
int salida=0,bloqueo2;

/*Prototipado de funciones */
void LOGO();
void BARRA_DE_CARGA();
void PRESENTACION();
void LOTERIA();
/*----------------------------*/

void main()
{
	textbackground(WHITE); /* Cambio de fondo   */
	system("cls");  /*Limpiar pantalla */
	LOGO();  /*Funcion logo UNI  */
	BARRA_DE_CARGA(); /* Funcion barra de carga  */
	LOTERIA();   /* Funcion principal loteria */
	getch();
}

/*--------------------------------------------*/

void LOGO() /* Funcion logo  */
{

	clrscr(); /*Limpiar pantalla */
	sleep(1);

	for(i=0;i<18;i++) /*Ciclo para que incremente la variable "i" */
	{
		/*    COLUMNAS       */

		textcolor(BLUE);   /*Color del texto  */
 		gotoxy(18,5+i);   /*Ubicacion en pantalla  */
  		delay(60);  /*Tiempo para mostrar en pantalla en milisegundos */
   		cprintf("%c",219);   /*Caracter que muestra */
		cprintf("%c",219);
	 	cprintf("%c",219);
	  	cprintf("%c",219);
	   	cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(23+i,20);  /* Ubicacion en pantalla  */
		cprintf("%c",219);  /*Caracter que muestra */
	    cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(23+i,21);   /*Ubicacion en pantalla  */
		cprintf("%c",219);   /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(23+i,22);  /*Ubicacion en pantalla  */
		cprintf("%c",219); /* Caracter que muestra  */
		cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(46,5+i);    /*Ubicacion en pantalla */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
	}

	for(i=0;i<11;i++)  /* Ciclo para incrementar variable "i"  */
	{
		gotoxy(27,5+i);  /* Ubicacion en pantalla  */
		delay(60);  /*Tiempo para mostrar en pantalla en milisegundos */
		cprintf("%c",219);  /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(33+i,5); /* Ubicacion en pantalla  */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(33+i,6); /* Ubicacion en pantalla  */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(33+i,7); /* Ubicacion en pantalla  */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(27,7+i); /* Ubicacion en pantalla  */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
	}

	for(i=2;i<16;i++) /* Ciclo para incrementar variable "i"  */
	{
		gotoxy(55,7+i); /* Ubicacion en pantalla  */
		delay(60); /*Tiempo para mostrar en pantalla en milisegundos */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
	}

	for(i=0;i<3;i++);  /* Ciclo para incrementar variable "i"  */
	{
		delay(60); /*Tiempo para mostrar en pantalla en milisegundos */
		gotoxy(55,2+i); /* Ubicacion en pantalla  */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(55,3+i); /* Ubicacion en pantalla  */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		gotoxy(55,4+i); /* Ubicacion en pantalla  */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
	}

	for(i=0;i<3;i++) /* Ciclo para incrementar variable "i"  */
	{
		gotoxy(52,20+i); /* Ubicacion en pantalla  */
		delay(60); /*Tiempo para mostrar en pantalla en milisegundos */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
	}

	for(i=0;i<12;i++) /* Ciclo para incrementar variable "i"  */
	{
		gotoxy(36,10+i); /* Ubicacion en pantalla  */
		delay(60); /*Tiempo para mostrar en pantalla en milisegundos */
		cprintf("%c",219); /*Caracter que muestra */
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
		cprintf("%c",219);
	}
	for(i=0;i<5;i++)
	{
		sound(i*800);
		delay(63);
		nosound();
	}
	sleep(4); /*Tiempo para mostrar en pantalla en segundos */
}

/*-----------------------------------------------------------*/

void BARRA_DE_CARGA()
{
    clrscr(); /*Limpiar pantalla */
	sleep(1); /*Tiempo para mostrar en pantalla en segundos  */

	/*Efecto barra de carga*/

	textcolor(BLUE); /*Color del texto */
	gotoxy(36,17); /* Ubicacion en pantalla  */
	cprintf("LOADING"); /*Texto que muestra */

    while(x<20) /* Ciclo para incrementar variable "x"  */
  	{
   		delay(500); /*Tiempo para mostrar en pantalla en milisegundos  */
		gotoxy(30+x,19); /* Ubicacion en pantalla  */
	 	cprintf("%c",219);  /*Caracter que muestra */
	  	cprintf("%c",219);

	   	a+=5; /*Incrementara de 5 en 5 hasta llegar a 100 */

		gotoxy(37,21); /* Ubicacion en pantalla  */
		cprintf("%d""%",a); /*Mostrar el aumento en pantalla  */
		x++; /*Variable que incremente  */
  	}

  	delay(100); /*Tiempo para mostrar en pantalla en milisegundos  */
}

/*-----------------------------------------------------------*/

void PRESENTACION()
{
	clrscr(); /*Limpiar pantalla */
 	sleep(1); /*Tiempo para mostrar en pantalla en segundos  */
  	textcolor(WHITE); /*Color del texto */
   	delay(100); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(22,2);  /* Ubicacion en pantalla  */
	cprintf("UNIVERSIDAD NACIONAL DE INGENIERIA"); /*Texto que muestra */
	delay(200); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(15,4); /* Ubicacion en pantalla  */
	cprintf("NOMBRES DE LOS INTEGRANTES:"); /*Texto que muestra */
	delay(300); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(22,5); /* Ubicacion en pantalla  */
	cprintf("1)EDUARDO JAVIER MENDIETA JARQUIN  2021-0246U"); /*Texto que muestra */
	delay(400); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(23,6); /* Ubicacion en pantalla  */
	cprintf("2)EDUARDO ANTONIO OROZCO COREA     2021-0132U"); /*Texto que muestra */
	delay(500); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(24,7); /* Ubicacion en pantalla  */
	cprintf("3)EDDY RAMON CORRALES TALENO       2021-0156U");  /*Texto que muestra */
	delay(600); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(15,9); /* Ubicacion en pantalla  */
	cprintf("GRUPO:"); /*Texto que muestra */
	delay(700); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(22,10); /* Ubicacion en pantalla  */
	cprintf("1M3-CO"); /*Texto que muestra */
	delay(800); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(15,12); /* Ubicacion en pantalla  */
	cprintf("DOCENTE:"); /*Texto que muestra */
	delay(900); /*Tiempo para mostrar en pantalla en milisegundos  */
	gotoxy(22,13); /* Ubicacion en pantalla  */
	cprintf("NELSON ALEJANDRO BARRIOS GONZALEZ"); /*Texto que muestra */
	delay(1000);
	gotoxy(15,15);
	cprintf("NOMBRE DE PROYECTO:");
	delay(1100);
	gotoxy(22,16);
	cprintf("SIMULACION DE LOTERIA");
	delay(1200);
	gotoxy(15,18);
	cprintf("FECHA DE ENTREGA:");
	delay(1300);
	gotoxy(22,19);
	cprintf("MIERCOLES 25/08/21");
	getchar();
	LOTERIA();
}

/*-----------------------------------------------------------*/

void LOTERIA ()
{
	/*                      FONDO                      */

	textbackground(BLACK); /* Cambio de fondo de pantalla */
	clrscr();

	/*                      FILAS                      */

	for(fil=0; fil<81; fil++)
	{
        textcolor(YELLOW);
		gotoxy(fil,1);cprintf("%c",220);
	}

	for (fil2=2; fil2<81; fil2++)
	{
		gotoxy(fil2,4);cprintf("%c",220);
		gotoxy(fil2,24);cprintf("%c",219);
	}

	/*                  COLUMNAS                     */

	for(col=2; col<25; col++)
	{
		gotoxy(1,col);cprintf("%c",219);
		gotoxy(80,col);cprintf("%c",219);
		gotoxy(60,col);cprintf("%c",219);
	}

	for(col2=2; col2<5; col2++)
	{
		gotoxy(17,col2);cprintf("%c",219);
		gotoxy(35,col2);cprintf("%c",219);
		gotoxy(52,col2);cprintf("%c",219);
	}

	/*               PRINTF DEL JUEGO                */

	gotoxy(3,3);textcolor(LIGHTCYAN);cprintf("I");
	gotoxy(4,3);textcolor(WHITE);cprintf("niciar juego");
	gotoxy(19,3);textcolor(LIGHTCYAN);cprintf("A");
	gotoxy(20,3);textcolor(WHITE);cprintf("dquirir numero");
	gotoxy(37,3);textcolor(LIGHTCYAN);cprintf("V");
	gotoxy(38,3);textcolor(WHITE);cprintf("olver a jugar");
	gotoxy(54,3);textcolor(LIGHTCYAN);cprintf("S");
	gotoxy(55,3);textcolor(WHITE);cprintf("alir");
	gotoxy(64,3);textcolor(LIGHTCYAN);cprintf("P");
	gotoxy(65,3);textcolor(WHITE);cprintf("resentacion");
	gotoxy(62,7);textcolor(WHITE);cprintf("Numero comprado: ");
	gotoxy(62,10);textcolor(WHITE);cprintf("Costo del numero: ");
	gotoxy(62,13);textcolor(WHITE);cprintf("Numero ganador: ");
	gotoxy(62,16);textcolor(WHITE);cprintf("Premio:");

	/*     CUADROS AZULES,DONDE VAN LOS NUMEROS    */

	for(alto=3; alto<20; alto++)
	{
	 	for(ancho=10; ancho<18; ancho++)
	 	{
	  		gotoxy(alto,ancho);textcolor(BLUE);cprintf("%c",219);
	 	}
	 	printf("\n");
	}

	for(alto1=21; alto1<41; alto1++)
	{
	 	for(ancho1=10; ancho1<18; ancho1++)
	 	{
			gotoxy(alto1,ancho1);textcolor(BLUE);cprintf("%c",219);
	 	}
	 	printf("\n");
	}

	for(alto2=42; alto2<59; alto2++)
	{
	 	for(ancho2=10; ancho2<18; ancho2++)
	 	{
			gotoxy(alto2,ancho2);textcolor(BLUE);cprintf("%c",219);
	 	}
	 	printf("\n");
	}

	/*Opciones en interfaz de juego */


		do{

			tecla=getch();
  			switch (tecla)
  			{
				case 97: /*Adquisicion de numero */
					numIngresado1=0;
					numIngresado2=0;
					numIngresado3=0;
					premio=0;
    				system("cls");
					printf("Ingrese el primer digito del numero que quiere jugar: ");
    				scanf("%d", &numIngresado1);
    				getchar();

					printf("Ingrese el segundo digito del numero que quiere jugar: ");
    				scanf("%d", &numIngresado2);
 	   				getchar();

					printf("Ingrese el tercer digito del numero que quiere jugar: ");
    				scanf("%d", &numIngresado3);
    				getchar();

					printf("Con cuanto jugara su numero? max: 1000: $");
    				scanf("%d" ,&premio);
					getchar();

					if((numIngresado1<10)&& numIngresado1>=0 && (numIngresado2<10)&& numIngresado2>=0 && (numIngresado3<10)&& numIngresado3>=0 && bloqueo==0 && (premio>0 && premio<1001))
    				{
        				printf("Numero reservado correctamente \n");
						bloqueo2=1;
						bloqueo=1;
						delay(500);
						LOTERIA();
        				break;
					}
					else
					   {
    				    printf("Elija un numero valido por favor.");
    				    getch();
						LOTERIA();
						}
					break;

				case 105: /*  Inicio de juego */

					while((numIngresado1<10)&& numIngresado1>=0 && (numIngresado2<10)&& numIngresado2>=0 && (numIngresado3<10)&& numIngresado3>=0 && bloqueo2==1)
					{
					bloqueo2=bloqueo2-1;
					bloqueo=bloqueo-1;
      					do
						{
            				srand(time(NULL));
							numerofinal1 = rand()%10;
							numerofinal2 = rand()%10; /*  Impresion de numeros aleatorios */
							numerofinal3 = rand()%10;
            				gotoxy(11,13);textcolor(WHITE);cprintf("%d",numerofinal1);
            				gotoxy(30,13);textcolor(WHITE);	cprintf("%d",numerofinal2);
            				gotoxy(49,13);textcolor(WHITE);	cprintf("%d",numerofinal3);
	    					gotoxy(62,8);textcolor(LIGHTCYAN);	cprintf("%d",numIngresado1);
	    					gotoxy(63,8);textcolor(LIGHTCYAN);	cprintf("%d",numIngresado2);
	    					gotoxy(64,8);textcolor(LIGHTCYAN);	cprintf("%d",numIngresado3);
	    					gotoxy(62,11);textcolor(LIGHTCYAN);	cprintf("$ %d",premio);
            				srand(1);
							sleep(1);

            				contador++;

          					if ( kbhit()) /*Comando de pausa de ciclo*/
		  					{
 		  						if (ch=getch()==13)
								{
            					    break;
								}
							}

        				} while ((contador++) || (enter!=13));

            			if (numIngresado1==numerofinal1 && numIngresado2==numerofinal2 && numIngresado3==numerofinal3)
               			{
			 				gotoxy(62,17);textcolor(WHITE + BLINK);cprintf("Ganaste\n");
							gotoxy(62,14);textcolor(LIGHTCYAN);	cprintf("%d",numerofinal1);
	   						gotoxy(63,14);textcolor(LIGHTCYAN);	cprintf("%d",numerofinal2);
	    					gotoxy(64,14);textcolor(LIGHTCYAN);	cprintf("%d",numerofinal3);

							premio2=(premio*600);

			 				gotoxy(64,18);textcolor(WHITE + BLINK);	cprintf("%d",premio2);
                			getch();

            			}
            			else
            			{

             				gotoxy(62,17);textcolor(WHITE + BLINK);	cprintf("Perdiste \n");
							gotoxy(62,14);textcolor(LIGHTCYAN);	cprintf("%d",numerofinal1);
	   						gotoxy(63,14);textcolor(LIGHTCYAN);	cprintf("%d",numerofinal2);
	    					gotoxy(64,14);textcolor(LIGHTCYAN);	cprintf("%d",numerofinal3);
              			  	getch();

           				}
					}
        			getch();
      				break;

				case 112: /* Presentacion  */

             	 	PRESENTACION(); /*Funcion presentacion  */
       				break;

   				case 118: /* Reinicio de juego  */

					clrscr();
					LOTERIA();
      				break;

                case 115:

                    salida=salida+1;
                    break;
			}

		}while(tolower(tecla)!="a" && tolower(tecla)!="p" && tolower(tecla)!="v" && tolower(tecla)!="i" && tolower(tecla)!="s" && salida==0); /*validacion de opciones de juego*/
}
