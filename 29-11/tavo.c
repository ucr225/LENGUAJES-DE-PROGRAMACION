// Librerias // 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

// Funcion del Menu principal del programa // 

int Menu(){
	
    char n1[100000]; 
	
	int c1 = 0 , c2 = 0 , contcar = 0 ;
	
	
	int N1 = 0  , N2 = 0 ; 
	
	Inicio : 
	fflush(stdin);
	memset(n1,'\0',sizeof(n1));
	
	c1 = 0;
	
	system("cls");
	
	printf("\n\n");
	printf ("   ************** Programa de operaciones con punteros ************* \n");
	printf("\n   NOTA : CANTIDAD MAXIMA DE NUMEROS PERMITIDOS : 7. \n\n");
	printf("\n   Menu : \n");
	
	printf ("\n   OPCION 1 : Suma  \n");
    printf ("\n   OPCION 2 : Resta \n");
	printf ("\n   OPCION 3 : Producto\n");
	printf ("\n   OPCION 4 : Division \n");
	printf ("\n   OPCION 5 : Instrucciones del programa. \n");
	printf ("\n   OPCION 6 : SALIR. \n");
	printf("\n");
	
	printf ("\n   Estimado usuario introduzca una opcion para comenzar : ");
		

    // Guardamos los valores introducidos con getch para validar el control + c y que el programa no se cierre. // 		
    

    for(int i=0 ; n1[i-1]!='\r'  ; i++){
	
    n1[i]=getch();
  	
  	
    if(n1[i]=='\b'){
	
	printf("\n\n   ERROR. ");
    printf("\n   * Estimado usuario no puede borrar lo establecido, ingrese una opcion correcta. \n");
    
    c1 = c1 + 1 ; 
    
    getch();
    system("cls");
    
    goto Inicio; 
    
    }
    
     
    if(n1[0]=='\r'){

    printf("\n\n   ERROR. ");
    printf("\n   * Estimado usuario digite una opcion. \n");
    
    c1 = c1 + 1 ; 
    
    getch();
    system("cls");
    
    goto Inicio;
    
    }
    
      printf("%c",n1[i]);
      
    }
    
    for(int i= 0 ; n1[i]!='\r' ; i++){
	
    if(!isdigit(n1[i])){
	
      c1 = c1 + 1 ; 

      }

    }
      
    contcar = strlen(n1);
    
    if(contcar>2){
     	
    c1 = c1 + 1;
     	
	}
    
    
    if(c1!=0){
    	
	printf("\n\n   ERROR. ");
    printf("\n   * Opcion no disponible. \n");
	
    getch();
    
    system("cls");
    
    goto Inicio;

    }  
    
    // Funcion atoi : Funciona para transformar una cadena de caracteres en un dato de tipo entero. // 
        
    N1 = atoi(n1);
             
    return N1;
           
    }
    
    int up(){
	
	char n1[10000]; 
	
	int c1 = 0 ,  contcar = 0 ;
	
	int N1 = 0  ; 

    int i  ; 
	Inicio:
		
	c1 = 0 ;
	
	memset(n1,'\0',sizeof(n1));
	
	printf("\n Desea Volver al menu??   \n");
	printf("\n 1 Si. ");
	printf("\n 2 Salir del programa. \n");
	printf("\n Opcion : "); 
    
	for(i=0; n1[i-1]!='\r' ;i++){
	
    n1[i]=getch();
  	
    if(n1[i]=='\b'){
	
	printf("\n\n  ERROR. ");
    printf("\n\n  En este programa se debe escribir los datos correctamente, no se permite corregir lo introducido !!! \n");
    
    c1 = c1 + 1 ; 
    
    getch();
    system("cls");
    goto Inicio; 
    
    }

    if(n1[0]=='\r'){

    printf("\n\n  ERROR. ");
    printf("\n\n  No se puede trabajar con cadenas vacias, por favor introduzca alguna opcion !!! \n");
    
    c1 = c1 + 1 ; 
    
    getch();
    system("cls");
    
    goto Inicio; 
    
    }
    
      printf("%c",n1[i]);
      
    }
    
    for(i= 0 ; n1[i]!='\r' ; i++){
	
    if(!isdigit(n1[i])){
	
    c1 = c1+ 1 ; 

    }

    }

    contcar = strlen(n1);
    
    if(contcar>2){
     	
    c1 = c1 + 1;
     	
	}
    
    if(c1!=0){
    	
	printf("\n\n  ERROR. ");
    printf("\n\n  Por favor introduzca una opcion valida, no se permite el uso de letras caracteres especiales o numeros decimales !!! \n");
    getch();
    system("cls");
    
    goto Inicio; 

    } 

    N1 = atoi(n1);
           
	if(N1<=0 || N1>2){
    	
    printf("\n\n Opcion no valida. \n");
    getch();
    system("cls");
    goto Inicio;
    
	}
	
    system("cls");
    
    return N1;

   }


	 
	// Funcion para ingresar los numeros de las operaciones //  
	
    float DecimalesMax2(int Elementos){
	
    char n1[100];
    
    int contcar ; 
    
    int c1 ; 
    
    int aux;
    float numeros;
    numeros=0;
    
    Inicio:
    
    system("cls");
     
    aux=0;
    
    memset(n1,'\0',sizeof(n1));
    
    printf("\n Introduzca el elemento  %i :  ",Elementos);
    
    for(int i=0; n1[i-1]!='\r' ; i++){
    	
    n1[i]=getch();
    
    if(n1[i]=='\b'){

    printf("\n\n  ERROR. ");
    printf("\n\n  * En este programa se debe escribir los datos correctamente. ");
    printf("\n\n  * No se permite corregir lo introducido. ");
    
    getche();
    system("cls");
    aux=aux+1;
    
    goto Inicio;
    
    }
    
    if(n1[0]=='-'&& n1[1]=='0'){
    
	printf("\n\n  ERROR. ");	
    printf("\n\n  * Estimado usuario, -0 no es valido, por favor introduzca el numero nuevamente. ");
    getche();
    
    system("cls");
    
    goto Inicio;
		
	}
    
    
    
    if(n1[0]=='\r'){
    	
    system("cls");

    printf("\n\n  ERROR. ");
    printf("\n\n  * No se puede trabajar con cadenas vacias.");
    getche();
    system("cls");
    aux=aux+1;
    
    goto Inicio;
    
    }
    
    printf("%c",n1[i]);

     }
    
    contcar = strlen(n1);
    
    if(contcar>8){
     	
    printf("\n\n * Estimado usuario, el numero ingresado es demasiado grande, maximo 7 numeros y 6 si ingresa un numero negativo. \n");
    
    getche();
    
    goto Inicio;
     	
	}
    
    Final:
		
    if(aux!=0){
    	
    printf("\n\n  ERROR. \n");
    printf("\n  * Por favor digite algo valido : \n");
    printf("\n  * No se permite el uso de letras , caracteres especiales y tampoco numeros combinados con letras. \n");
    getche();
    
    system("cls");
    
    goto Inicio;
    
    }
    
    int contador=0;
    contador=0;
    aux=0;
    int aux2,aux5,aux7;
    
    aux2=0;
    aux5=0;
    aux7=0;

    if(n1[0]=='\r' || n1[0]=='.'){
    	
    contador=contador+1;
    
    }

    for(int i=0 ; n1[i]!='\r' ; i++){

    if(!isdigit(n1[i])){

    if(n1[i]!='-' && n1[i]!='.'){
    	
    contador=contador+1;

    }

    if(n1[0]=='-' && contcar==2){
    	
    contador=contador+1;
    
    }
     if(n1[i]=='-' && i!=0){
    	
    contador=contador+1;
    
    }
    if(aux7>1){
    	
    contador=contador+1;
		
    }

    // Condicional que cuenta los puntos introducidos por el usuario // 
    
    if(n1[i]=='.'){ 

    aux = aux+1;

    }

    if(aux==0){
    	
    aux5 = aux5+1;
    
    }

    if(aux5>6){
    	
    contador = contador+1;
    
    }
   
   // Validacion para saber si el usuario digito mas de un punto //
    
    if(aux>1){ 
    
    contador = contador+1;
    
	}
    
    // Validacion para saber el numero de decimales despues del punto //
    
    if(aux>=1){ 
    
    aux2 = aux2+1;

    }

    // Validacion para que no hayan mas de dos decimales //
    
    if(aux2>3){  
  
     contador=contador+1;

        } 

      }

    }
    
    if(contador!=0){
    	
	printf("\n\n  ERROR. \n");
    printf("\n * Por favor digite un numero valido, solo se permiten dos numeros decimales. \n");
    getche();
    system("cls");
    goto Inicio;
  
  
    }
  
    numeros=atof(n1);

    return numeros;
   
    }
    
    float suma(float num1,float num2){
	
    float result;
    
    result=num1+num2;
    
    return  result;

    }

   float resta(float num1,float num2){
   	
   float result;
   
   result=num1-num2;
   
   return result;

   }

   float multiplicacion(float num1,float num2){
   	
   float result;
   
   result=num1*num2;
   
   return result;

   }

   float division(float num1,float num2){
   	
   float result;
   
   result=num1/num2;
   
   return result;

   }
   
   int main(){

   fflush(stdin);
   	
   int Elementos = 1 ;
    
   int opcion;
   
   int volver;
   
   float digito1 ,digito2 ,sumar ,restar ,multiplicar ,dividir ;

   
   do{
   	
    Elementos=1;
    
    opcion=Menu();
    
    float (*Calculos[2][2])( float , float ) = {{suma, resta} , {multiplicacion,division}};
    
    if(opcion==1){
    
	system("cls");
	
	
    digito1=DecimalesMax2(Elementos);
    
    Elementos = Elementos + 1 ;
    
    digito2=DecimalesMax2(Elementos);
	
	system("cls");
	
    sumar= Calculos[0][0](digito1, digito2);
    
    printf("\n  La suma de los elementos introducidos por el usuario es  : \n ");
    
	printf("\n  %.2f + %.2f = %.2f \n\n",digito1,digito2,sumar);  
	
	printf("\n  Presione cualquier tecla para continuar. . .  ");
	
    getche();
    system("cls"); 	
    
    volver = up();
    
    if(volver==1){
    	
    	system("cls");
    	
	}
	
	else{
		
	opcion=6;	
		
	}
	

    }

    if(opcion==2){
    
    system("cls");
    
    digito1=DecimalesMax2(Elementos);
    
    Elementos = Elementos + 1 ;
    
    digito2=DecimalesMax2(Elementos);
    restar= Calculos[0][1](digito1,digito2);
    
    system("cls");
    
    printf("\n La resta  de los elementos introducidos por el usuario es  : \n ");
    
	printf("\n  %.2f  -  %.2f = %.2f \n ",digito1,digito2,restar);  
	
	printf("\n Presione cualquier tecla para continuar. . .  ");
	
    getche();
    system("cls");
    
    
    volver = up();
    
    if(volver==1){
    	
    system("cls");
    	
	}
	
	else{
		
	opcion=6;	
		
	}
    
   }

    if(opcion==3){
	
	repetir : 
	
	Elementos = 1 ; 
	system("cls");
	
    digito1=DecimalesMax2(Elementos);
    
    Elementos = Elementos + 1 ;
    
    digito2=DecimalesMax2(Elementos);
    multiplicar= Calculos[1][0](digito1, digito2);
    
    // Condicional que si el numero es extremadamente grande, le solicitamos al usuario los datos nuevamente. // 
    
    if(multiplicar>10000000){
    
	printf("\n\n Estimado usuario el producto de los dos numeros  es muy grande, por favor digite otros numeros. \n");
	getche();
	
    goto repetir;	
    
		
	}
	
    else{
	
	system("cls");
	
	
    printf("\n  El producto de los elementos introducidos por el usuario es  : \n ");
    
    printf("\n  %.2f  X  %.2f = %.2f \n ",digito1,digito2,multiplicar);  
    
    printf("\n  Presione cualquier tecla para continuar. . .  ");
    
    getche();
    system("cls");
    
    volver = up();
    
    if(volver==1){
    	
    	system("cls");
    	
	}
	
	else{
		
	opcion=6;	
		
	}

    }  
    
    }

    if(opcion==4){
	
	repetir2 : 
	
	Elementos = 1 ; 
	
	system("cls");
	
	digito1=DecimalesMax2(Elementos);
    
    Elementos = Elementos + 1 ;
    
    digito2=DecimalesMax2(Elementos);
    
    dividir= Calculos[1][1](digito1, digito2);
    
    if(digito1 == 0 && digito2 == 0){
    	
    printf("\n Estimado usuario la division de los numeros es indeterminada, por favor introduzca su operacion nuevamente. \n");
	getche();
	
	goto repetir2;
		
	}
	
	if(digito2 == 0){
	
	printf("\n Estimado usuario la division de los numeros es indeterminada, por favor introduzca su operacion nuevamente. \n");
	getche();
	
	goto repetir2;
    	
	}
	
	else{
	
    system("cls");
    
    printf("\n La  division  de los elementos introducidos por el usuario es  : \n ");
    
    printf("\n %.2f / %.2f  = %.2f \n",digito1,digito2,dividir);
    
    printf("\n Presione cualquier tecla para continuar. . .  ");
    
    getche();
    system("cls");  
    
    }
    
     volver = up();
    
    if(volver==1){
    	
    	system("cls");
    	
	}
	
	else{
		
	opcion=6;	
		
	}
	
    }
    
    if(opcion==5){
    	
    system("cls");
	
	printf("\n  Estimado usuario debera tener en cuenta los siguietes factores a la hora de utilizar el programa : \n");
	
	printf("\n  * La cantidad maxima de numeros ingresados por el usuario seran de 7 numeros. \n");
	
	printf("\n  * Si el usuario ingresa un numero negativo en una operacion, el programa contara el negativo como un numero, por lo tanto tendra\n");
	printf("    para ingresar 6 numeros en lugar de 7.  \n");
	
	printf("\n  * Si el resultado de las operaciones, es un numero demasiado grande, el programa le notificara al usuario que el resultado \n");
	printf("    de la operacion es muy grande ,si este es el caso, el usuario tendra la oportunidad de volver a ingresar nuevamente los digitos. \n");	
    
	
	getche();
		
	}
    
    
	if(opcion!= 1 && opcion!= 2 && opcion!= 3 && opcion!= 4 && opcion!=5 && opcion!=6){
		
	printf("\n\n  ERROR. ");
    printf("\n  * Opcion no disponible. \n");
	getch();

		
	}

    }while(opcion!=6);
      
      printf("\n\n   Programa finalizado, Hasta pronto!!!.  \n");
      getche();
    

	
   }