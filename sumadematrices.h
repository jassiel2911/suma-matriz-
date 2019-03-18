void CapturarM(){
	int mat1[3][3], mat2[3][3];
	int x,y;
	printf("\n\t**Introduzca primera matriz**\n\n");
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
		printf("Captura 1 [%d][%d]: ",x+1,y+1);
		scanf("%d",&mat1[x][y]);
		}
	}
	printf("\n\n");
	
	printf("\n\t**Introduzca segunda matriz**\n\n");
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
		printf("Captura 2[%d][%d]: ",x+1,y+1);
			scanf("%d",&mat2[x][y]);
		}
	}

}

void sumar(int a[3][3],int b[3][3]){
	int suma[3][3],x,y;
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			suma[x][y] = a[x][y] + b[x][y]; 
		}
	}
	
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			printf("%i ",suma[x][y]);
		}
		printf("\n");
	}
}

void Resultado(){
	int mat1[3][3], mat2[3][3];
	printf("\nSuma: \n");
	sumar(mat1,mat2);
}
