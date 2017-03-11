/**
 * @file 	calcvolume.cpp
 * @brief 	Funções para solicitação das medidas das figuras geométricas espaciais ao usuário.
 * @author 	Nicolas Ghirello
 * @since 	09/03/2017
 * @data 	11/03/2017
 */

#include "calcVolume.h"
#include "volume.h"


/**
 * @brief		Função de redirecionamento para a função volumePiramide.
 * @details		A função dadosVolPiramide apenas encaminha para a função volumePiramide. 
 * @param[in] 	ladoQuadrado Valor da aresta da base da pirâmide, que forma um quadrado. 
 * @param[in] 	alturaTriangulo Valor das alturas dos triângulos da pirâmide.
 */
void dadosVolPiramide(float areaBase, float alturaTriangulo) {
	volumePiramide(areaBase, alturaTriangulo);
}

/**
 * @brief		Função de redirecionamento para a função volumeCubo.
 * @details		A função dadosVolCubo apenas encaminha para a função volumeCubo. 
 * @param[in] 	arestaCubo Valor da aresta do cubo. 
 */
void dadosVolCubo(float arestaCubo) {
	volumeCubo(arestaCubo);
}

/**
 * @brief		Função de redirecionamento para a função volumeParalelepipedo.
 * @details		A função dadosVolParalelepipedo apenas encaminha para a função volumeParalelepipedo. 
 * @param[in] 	aresta1 Primeiro valor das três arestas do paralelepípedo. 
 * @param[in]	aresta2 Segundo valor das três arestas do paralelepípedo.
 * @param[in]	aresta3 Terceiro valor das três arestas do paralelepípedo. 
 */
void dadosVolParalelepipedo(float &aresta1, float &aresta2, float &aresta3) {
	volumeParalelepipedo(aresta1, aresta2, aresta3);
}

/**
 * @brief		Função de redirecionamento para a função volumeEsfera.
 * @details		A função dadosVolEsfera apenas encaminha para a função volumeEsfera.
 * @param[in] 	raioEsfera Valor do raio de uma esfera.
 
 */
void dadosVolEsfera(float raioEsfera) {
	volumeEsfera(raioEsfera);	
}