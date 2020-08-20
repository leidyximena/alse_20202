/*Este programa realiza diferentes operaciones con dos números complejos
Autor:Leidy Ximena Garzon
Version:1.0   */

void pedir_valores(float *num1,float *num2,float *imag1,float *imag2);
void definir_operacion(int *operacion);
void operar_valores(float num1,float num2,float imag1,float imag2,int operaacion,float *result_real,float *result_imag);
void mostrar_resultado(float result_real,float result_imag);

#include<stdio.h>
 int main(void)
{
   int operacion=0;
   float numero1=0,numero2=0,imaginario1=0,imaginario2=0,resultado_r=0,resultado_i=0;
   printf("\n\tEste programa realiza diferentes operaciones con dos números complejos\n\n");
   pedir_valores(&numero1, &numero2, &imaginario1, &imaginario2);
   definir_operacion( &operacion);
   operar_valores(numero1,numero2,imaginario1,imaginario2,operacion,&resultado_r,&resultado_i);
   mostrar_resultado(resultado_r,resultado_i);
}

  void pedir_valores(float *num1,float *num2,float *imag1,float *imag2)
{
  printf("\n\n Ingrese la parte real del primer número complejo\n\n");
  scanf("%f",&(*num1));
  printf("\n\n Ingrese la parte imaginaria del primer número complejo\n\n");
  scanf("%f",&(*imag1));
  printf("\n\n Ingrese la parte real del segundo número complejo\n\n");
  scanf("%f",&(*num2));
  printf("\n\n Ingrese la parteimaginaria del segundo número complejo\n\n");
  scanf("%f",&(*imag2));
}
  void definir_operacion(int *operacion)
{
   printf("\n\n Se debe definir la operación que quiere realizar con los números complejos\n\n");
   printf("\n\t Si desea realizar la suma ingrese el número 1.\n");
   printf("\n\t Si desea realizar la resta ingrese el número 2.\n");
   printf("\n\t Si desea realizar la multiplicación ingrese el número 3.\n");
   printf("\n\t Si desea realizar la división ingrese el número 4.\n");
   scanf("%d",&(*operacion));
}
  void operar_valores(float num1,float num2,float imag1,float imag2,int operacion,float *result_real,float *result_imag)
{
   if(operacion==1)
   {
   * result_real=num1+num2;
   * result_imag=imag1+imag2;
   }
   else
   if(operacion==2)
   {
   *result_real=num1-num2;
   *result_imag=imag1-imag2;
   }
   else
    if(operacion==3)
    {
    *result_real=(num1*num2)-(imag1*imag2);
    *result_imag=(num1*imag2)+(num2*imag1);
    }
   else
    if(operacion==4)
    {
    *result_real=((num1*num2)+(imag1*imag2))/((num2*num2)+(imag2*imag2));
    *result_imag=((imag1*num2)-(num1*imag2))/((num2*num2)+(imag2*imag2));
    }
}
void mostrar_resultado(float result_real,float result_imag)
 {
  if(result_imag>=0)
printf("\n\t El resultado de la operación seleccionada es : %f+%fi\n\n",result_real,result_imag);
  else
  printf("\n\t El resultado de la operación seleccionada es:%f%fi\n\n",result_real,result_imag);
}
