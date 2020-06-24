#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
   double iva=0, pbruto=0;
   int opcion=0,nprodutos=0,num=0,uni=0;
   int total1=0,total2=0,total3=0,total4=0,total5=0;
   int pneto=0;
   int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0,c13=0,c14=0,c15=0,c16=0,c17=0;
   bool continuar,opc2;
   int lavadora=1300000;
   int televisor=1000000;
   int celular=800000;
   int estufa=500000;
   int computador=1500000;
   int morral=100000;
   int maletaviaje=170000;
   int bicicleta=700000;
   int balon=80000;
   int patines=100000;
   int videojuegoCD=150000;
   int juguete=100000;
   int jean=80000;
   int camisa=70000;
   int chaqueta=120000;
   int camiseta=40000;
   int zapatillas=180000;

   cout<<"Bienvenido a su tienda online "<<endl;
   do {
        cout<<"Elija la categoria a la que quiere entrar"<<endl;
        cout<<"\n1. Electrodomesticos, computadores, celulares, televisores y gasodomesticos"<<endl;
        cout<<"2. Morrales y maletines"<<endl;
        cout<<"3. Elementos deportivos"<<endl;
        cout<<"4. Juguetes y videojuegos"<<endl;
        cout<<"5. Vestuario"<<endl;
        cin>>opcion;
        cout<<"\n la opcion que eligio es: "<<opcion<<endl;
        switch (opcion) {
            case 1:
                do {
            cout<<"\n 1.lavadora=1300000    2.televisor=1000000    3.celular=800000    4.estufa=500000    5.computador=1500000"<<endl;
            cout<<" ¿desea comprar algun producto?, por favor elija el numero del producto que va a comprar"<<endl;
            cin>>num;

                switch (num){
                case 1:
                     cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                     cin>>uni;
                     c1=uni;
                     total1=total1+(lavadora*c1);
                    break;
                case 2:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c2=uni;
                    total1= total1+(televisor*c2);
                    break;
                case 3:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c3=uni;
                    total1=total1+(celular*c3);
                    break;
                case 4:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c4=uni;
                    total1=total1+(estufa*c4);
                    break;
                case 5:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c5=uni;
                    total1=total1+(computador*c5);
                    break;
                }
                cout<<"¿desea elegir otro producto de esta categoría?"<<endl;
                cout<<"1 si       0 no"<<endl;
                cin>>opc2;
                }
                while (opc2);
            break;
            case 2:
            do{
            cout<<"\n 1.morral=100000     2.maletaviaje=170000"<<endl;
            cout<<" ¿desea comprar algun producto?, por favor elija el numero del producto que va a comprar"<<endl;
            cin>>num;
                switch (num){
                case 1:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c6=uni;
                    total2=total2+(morral*c6);
                    break;
                case 2:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c7=uni;
                    total2= total2+(maletaviaje*c7);
                    break;
                }
                cout<<"¿desea elegir otro producto de esta categoría?"<<endl;
                cout<<"1 si       0 no"<<endl;
                cin>>opc2;
                }
            while(opc2);
            break;
            case 3:
                do{
            cout<<"\n 1.bicicleta=700000     2.balon=80000       3.patines=100000"<<endl;
            cout<<" ¿desea comprar algun producto?, por favor elija el numero del producto que va a comprar"<<endl;
            cin>>num;
                switch (num){
                case 1:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                     c8=uni;
                     total3=total3+(bicicleta*c8);
                    break;
                case 2:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c9=uni;
                    total3= total3+(balon*c9);
                    break;
                case 3:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c10=uni;
                    total3=total3+(patines*c10);
                    break;
                }
                cout<<"¿desea elegir otro producto de esta categoría?"<<endl;
                cout<<"1 si       0 no"<<endl;
                cin>>opc2;
                }
            while(opc2);
            break;
            case 4:
                do{
            cout<<"\n 1.videojuegoCD=150000        2.juguete=100000 "<<endl;
            cout<<" ¿desea comprar algun producto?, por favor elija el numero del producto que va a comprar"<<endl;
            cin>>num;
                switch (num){
                case 1:
                     cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                     cin>>uni;
                     c11=uni;
                     total4=total4+(videojuegoCD*c11);
                    break;
                case 2:
                     cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                     cin>>uni;
                     c12=uni;
                     total4=total4+(juguete*c12);
                     break;
                }
                cout<<"¿desea elegir otro producto de esta categoría?"<<endl;
                cout<<"1 si       0 no"<<endl;
                cin>>opc2;
                }
                while(opc2);
            break;
            case 5:
                do{
            cout<<"\n 1.jean=80000        2.camisa=70000       3.chaqueta=120000      4.camiseta=40000      5.zapatillas=180000"<<endl;
             cout<<" ¿desea comprar algun producto?, por favor elija el numero del producto que va a comprar"<<endl;
            cin>>num;
                switch (num){
                case 1:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c13=uni;
                    total5=total5+(jean*c13);
                    break;
                case 2:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c14=uni;
                    total5= total5+(camisa*c14);
                    break;
                case 3:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c15=uni;
                    total5=total5+(chaqueta*c15);
                    break;
                case 4:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c16=uni;
                    total5=total5+(camiseta*c16);
                    break;
                case 5:
                    cout<<" ¿cuantas unidades de este producto desea comprar "<<endl;
                    cin>>uni;
                    c17=uni;
                    total5=total5+(zapatillas*c17);
                    break;

        }
            cout<<"¿desea elegir otro producto de esta categoría?"<<endl;
            cout<<"1 si       0 no"<<endl;
            cin>>opc2;
        }
        while(opc2);
        }


    cout<<"\n ¿desea continuar y elegir otra categoria?"<<endl;
    cout<<"1 si       0 no"<<endl;
    cin>>continuar;
    //break;
   }
   while (continuar);

   if((total1>0)&&(total1<=2848560)){
        if(((c1>0)&&(c1<=3))){
            pbruto = total1/1.19;
            iva = pbruto*0.19;
        }
        else if(((c2>0)&&(c2<=3))){
            pbruto = total1/1.19;
            iva = pbruto*0.19;
        }
        else if(((c3>0)&&(c3<=3))){
            pbruto = total1/1.19;
            iva = pbruto*0.19;
        }
        else if(((c4>0)&&(c4<=3))){
            pbruto = total1/1.19;
            iva = pbruto*0.19;
        }
        else if(((c5>0)&&(c5<=3))){
            pbruto = total1/1.19;
            iva = pbruto*0.19;
        }
        cout<<"El precio total a pagar de la categoria 1 es: "<<total1<<endl;
        std::cout << std::setprecision(10)<<"Total de la compra con descuento de la categoria 1 es = "<<pbruto <<endl;
        std::cout << std::setprecision(10)<<"total de iva descontado = "<<iva<<endl;
        //cout<<pbruto<<endl;
   }
   else {
    cout<<"El precio total a pagar de la categoria 1 es: "<<total1<<endl;
   }
      if((total2>0)&&(total2<=712140)){
        if(((c6>0)&&(c6<=3))){
            pbruto = total2/1.19;
            iva = pbruto*0.19;
        }
        else if(((c7>0)&&(c7<=3))){
            pbruto = total2/1.19;
            iva = pbruto*0.19;
        }
        cout<<"El precio total a pagar de la categoria 2 es: "<<total2<<endl;
        std::cout << std::setprecision(10)<<"Total de la compra con descuento de la categoria 2 es = "<<pbruto <<endl;
        std::cout << std::setprecision(10)<<"total de iva descontado = "<<iva<<endl;
   }
   else {

    cout<<"El precio total a pagar de la categoria 2 es: "<<total2<<endl;
   }
   if((total3>0)&&(total3<=2848560)){
        if(((c8>0)&&(c8<=3))){
            pbruto = total3/1.19;
            iva = pbruto*0.19;
        }
        else if(((c9>0)&&(c9<=3))){
            pbruto = total3/1.19;
            iva = pbruto*0.19;
        }
        else if(((c10>0)&&(c10<=3))){
        pbruto = total4/1.19;
        iva = pbruto*0.19;
        }
        cout<<"El precio total a pagar de la categoria 3 es: "<<total3<<endl;
        std::cout << std::setprecision(10)<<"Total de la compra con descuento de la categoria 3 es = "<<pbruto <<endl;
        std::cout << std::setprecision(10)<<"total de iva descontado = "<<iva<<endl;
   }
   else {

    cout<<"El precio total a pagar de la categoria 3 es: "<<total3<<endl;
   }
    if((total4>0)&&(total4<=356070)){
        if(((c11>0)&&(c11<=3))){
            pbruto = total4/1.19;
            iva = pbruto*0.19;
        }
        else if(((c12>0)&&(c12<=3))){
            pbruto = total4/1.19;
            iva = pbruto*0.19;
        }
         cout<<"El precio total a pagar de la categoria 4 es: "<<total4<<endl;
        std::cout << std::setprecision(10)<<"Total de la compra con descuento de la categoria 4 es = "<<pbruto <<endl;
        std::cout << std::setprecision(10)<<"total de iva descontado = "<<iva<<endl;
   }
   else {
    cout<<"El precio total a pagar de la categoria 4 es: "<<total4<<endl;
   }
    if((total5>0)&&(total5<=712140)){
        if(((c13>0)&&(c13<=3))){
            pbruto = total5/1.19;
            iva = pbruto*0.19;
        }
        else if(((c14>0)&&(c14<=3))){
            pbruto = total5/1.19;
            iva = pbruto*0.19;
        }
        else if(((c15>0)&&(c15<=3))){
            pbruto = total5/1.19;
            iva = pbruto*0.19;
        }
        else if(((c16>0)&&(c16<=3))){
            pbruto = total5/1.19;
            iva = pbruto*0.19;
        }
        else if(((c17>0)&&(c17<=3))){
            pbruto = total5/1.19;
            iva = pbruto*0.19;
        }
        cout<<"El precio total a pagar de la categoria 5 es: "<<total5<<endl;
        std::cout << std::setprecision(10)<<"Total de la compra con descuento de la categoria 5 es = "<<pbruto <<endl;
        std::cout << std::setprecision(10)<<"total de iva descontado = "<<iva<<endl;
   }
   else {
    cout<<"El precio total a pagar de la categoria 5 es: "<<total5<<endl;
   }

   return 0;
}
