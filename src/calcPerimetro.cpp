/**
 * @file 	calcPerimetro.cpp
  * @brief 	Funções para solicitação das medidas das figuras geométricas planas ao usuário.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	11/03/2017
 */

#include "calcPerimetro.h"
#include "perimetro.h"


/**
 * @brief		Função de redirecionamento para a função perimetroTriangulo.
 * @details		A função dadosPerTriangulo apenas encaminha para a função perimetroTriangulo. 
 * @param[in] 	ladoTriangulo Valor do lado do triângulo.
 */
void dadosPerTriangulo(float ladoTriangulo) {
	perimetroTriangulo(ladoTriangulo);	
}

/**
 * @brief		Função de redirecionamento para a função perimetroRetangulo.
 * @details		A função dadosPerRetangulo apenas encaminha para a função perimetroRetangulo. 
 * @param[in] 	baseRetangulo Valor da base do retângulo.
 * @param[in] 	alturaRetangulo Valor da altura do retângulo.
 */
void dadosPerRetangulo(float baseRetangulo, float alturaRetangulo) {
	perimetroRetangulo(baseRetangulo, alturaRetangulo);
}

/**
 * @brief		Função de redirecionamento para a função perimetroQuadrado.	
 * @details		A função dadosPerQuadrado apenas encaminha para a função perimetroQuadrado. 
 * @param[in] 	ladoQuadrado Valor do lado do retângulo. 
 */
void dadosPerQuadrado(float ladoQuadrado) {
	perimetroQuadrado(ladoQuadrado);
}

/**
 * @brief		Função de redirecionamento para a função perimetroCirculo.
 * @details		A função dadosPerCirculo apenas encaminha para a função perimetroCirculo.
 * @param[in] 	raioCirculo Valor do raio do circulo.
 */
void dadosPerCirculo(float raioCirculo) {
	perimetroCirculo(raioCirculo);
}