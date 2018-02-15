//COLA
#include<iostream.h>
#include<conio.h>

int arre[' '],max,tope=-1,i;
char opc;

void mostrar();
bool llena();
bool vacia();
void llenado();
void eliminado();

main(){
	
	cout<<"Tamanio del arreglo: ";
	cin>>max;
	clrscr();
	
	do{
		cout<<"a) Mostrar datos"<<endl;
		cout<<"b) Eliminado de datos"<<endl;
		cout<<"c) Llenado de datos"<<endl;
		cout<<"d) Salir"<<endl;
		cout<<"Elija la opcion deseada:";
		cin>>opc;
		clrscr();
		
		if(opc!='d'){
			
			switch(opc){
			
			case'a':
			   mostrar();
			   clrscr();
			break;
			case'b':
			   eliminado();
			   clrscr();
			break;
			case'c':
			   llenado();
			   clrscr();
			break;
			
			}
		
		}
	}while(opc!='d');
}

//////////////////////////////////////////////////////////////
void mostrar(){
	cout<<"Elementos del arreglo:"<<endl;
	for(i=0;max>i;i++){
		cout<<arre[i]<<" ";
	}
	getch();
}

bool llena(){
	if(tope==max-1){
		return true;
	}else{
		return false;
	}
}

bool vacia(){
	if(tope==-1){
		return true;
	}else{
		return false;
	}
}

void llenado(){
	if(llena()==true){
		cout<<"Cola llena"<<endl;
		cout<<"Presiones cualquier boton para continuar";
		getch();
		
	}else{
		cout<<"Insertar elemento: ";
		tope++;
		cin>>arre[tope];
	}
}

void eliminado(){
	if(vacia()==true){
		cout<<"Cola Vacia"<<endl;
		cout<<"Presiones cualquier boton para continuar";
		getch();
		
	}else{
		arre[0]=00;
		for(i=0;i<=tope;i++){
			arre[i]=arre[i+1];
		}
		arre[tope]=00;
		tope=tope-1;
	}
}