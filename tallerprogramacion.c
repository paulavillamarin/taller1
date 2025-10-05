#include <stdio.h>

int main()
{
    int ProductoID= 0;
    int Cantidad_stock= 0;
    int Unidades_vender;
    int Unidades_restablecer= 0 ;
    double Precio_unitario = 0.0;
    double venta_actual = 0.0;
    char Nombre_producto [50]= "";
    int opcion=0;
    double ganancia_total=0;
    double ganancia_actual=0;

    do{    
    printf("Ingrese nombre del producto:\n");
    scanf("%s", Nombre_producto);

    printf("Ingrese el ID del producto:\n");
    scanf("%d", &ProductoID);

    printf("Ingrese la cantidad en stock:\n");
    scanf("%d", &Cantidad_stock);

   if(Cantidad_stock<0){
    printf("Ingrese un valor que no sea negativo y no sea 0\n");}
    else  {    printf("Ingrese el precio del producto:\n");
    scanf("%lf", &Precio_unitario);}

    if(Precio_unitario<0){
    printf("Ingrese un valor que no sea negativo y no sea 0\n");}
      } while(Precio_unitario<0 || Cantidad_stock<0);

    while (opcion !=5) {
        printf("MENU DE OPCIONES\n");
        printf("1. Vender unidades\n");
        printf("2. Reabastecer producto\n");
        printf("3. Consultar informacion de producto\n");
        printf("4. Calcular ganancias obtenidas\n");
        printf("5. Salir del programa\n");
        scanf("%d", &opcion);

    switch(opcion) {
        case 1:
           printf("Ingrese la cantidad de unidades a vender: ");
           scanf("%d", &Unidades_vender);

           if (Unidades_vender<= Cantidad_stock) { 
           double venta_actual=Unidades_vender*Precio_unitario;
           ganancia_total+=venta_actual;
           Cantidad_stock=Cantidad_stock-Unidades_vender;
           printf("Venta exitosa. Stock restante %d\n", Cantidad_stock);   }
           else {
           printf ("No hay suficiente cantidad en stock para vender\n");  }
           break; 
        case 2: 
           printf("Ingrese las unidades para agregar al stock:");
           scanf("%d", &Unidades_restablecer);

           if(Unidades_restablecer>0){
            Cantidad_stock+=Unidades_restablecer;
            printf("El nuevo stock es de %d unidade", Cantidad_stock); }
            
            else{
                printf("Ingrese un numero mayor a 0"); }
           break;

        case 3: 
           printf("ID del producto: %d\n", ProductoID);
           printf("Nombre producto: %s\n", Nombre_producto);
           printf("Precio Unitario: %.2f\n", Precio_unitario);
           printf("Stock actual: %d\n",Cantidad_stock);
           break;

        case 4:
           printf("Ganancias totales hasta el momento: $%.2f\n", ganancia_total);
           break;
        case 5:
           break;

        default:
        printf("Opcion no valida, ingrese un numero del 1 al 5\n");
}
}
printf("Ha salido del programa");
  return 0;
}