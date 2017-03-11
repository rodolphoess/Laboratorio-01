/**
 * @file 	menu.cpp
 * @brief 	Função para exibir o menu ao usuário e fazêlo escolher entre uma das figuras geométricas.
 * @author 	Rodolpho Erick
 * @since 	10/03/2017
 * @data 	11/03/2017
 */

#include <iostream>
#include "menu.h"
#include "calcArea.h"

using namespace std;


/**
 * @brief		Função que será a responsável por encaminhar para o restante do programa de acordo com a solicitação do usuário.
 * @details		A função menu calcula de imediato a área da figura geométrica e encaminha para as demais funções para cálculo 
 *				do perímetro ou do volume.
 */
void menu() {
	int opcaoEscolhida;

	//Figuras planas (área + perimetro)
	cout << "_________________________________" << endl;
	cout << "\n(1) Triangulo equilatero" << endl;
	cout << "(2) Retangulo" << endl;
	cout << "(3) Quadrado" << endl;
	cout << "(4) Circulo" << endl;
	//Figuras geométricas (área + volume)
	cout << "(5) Piramide com base quadrangular" << endl;
	cout << "(6) Cubo" << endl;
	cout << "(7) Paralelepipedo" << endl;
	cout << "(8) Esfera" << endl;
	cout << "(0) Sair" << endl;
	cout << "\nDigite sua opcao: ";

	cin >> opcaoEscolhida;

	switch(opcaoEscolhida){
		case 1:				
			dadosArTriangulo();						
			break;
		case 2:
			dadosArRetangulo();						
			break;
		case 3:
			dadosArQuadrado();					
			break;
		case 4:
			dadosArCirculo();				
			break;
		case 5:
			dadosArPiramide();						
			break;
		case 6:
			dadosArCubo();						
			break;
		case 7:
			dadosArParalelepipedo();						
			break;
		case 8:
			dadosArEsfera();				
			break;		
		case 0:	
			cout << "\nPrograma encerrado. Obrigado!" << endl;					
			break;
		default:
			cout << "\n:::::: Digite uma opcao valida! ::::::" << endl;
			menu();		
	}
}