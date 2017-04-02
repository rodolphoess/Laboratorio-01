# Exemplo mais completo de um Makefile, separando os diferentes elementos da aplicacao
# como codigo (src), cabecalhos (include), executaveis (build), bibliotecas (lib), etc.
# Cada elemento e alocado em uma pasta especifica, organizando melhor seu codigo fonte.
#
# Algumas variaveis sao usadas com significado especial:
#
# $@ nome do alvo (target)
# $^ lista com os nomes de todos os pre-requisitos sem duplicatas
# $< nome do primeiro pre-requisito
#

# Comandos do sistema operacional
# Linux: rm -rf
# Windows: cmd //C del
RM = rm -rf

# Compilador
CC=g++

# Variaveis para os subdiretorios
LIB_DIR=lib
INC_DIR=include
SRC_DIR=src
OBJ_DIR=build
BIN_DIR=bin
DOC_DIR=doc
TEST_DIR=test

# Nome do programa
PROG=geometrica

# Opcoes de compilacao
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy init

# Define o alvo (target) para a compilacao completa.
# Define os alvos questao01, questao02 e questao03 como dependencias.
# Ao final da compilacao, remove os arquivos objeto.
all: $(PROG)

debug: CFLAGS += -g -O0
debug: $(PROG)

# Alvo (target) para a criação da estrutura de diretorios
# necessaria para a geracao dos arquivos objeto 
init:
	@mkdir -p $(OBJ_DIR)/

# Alvo (target) para a construcao do executavel geometrica
# Define os arquivos area.o, calcArea.o, calcPerimetro.o, calcVolume.o, menu.o, perimetro.o, volume.o e main.o como dependencias
$(PROG): $(OBJ_DIR)/area.o $(OBJ_DIR)/calcArea.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/calcPerimetro.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/calcVolume.o $(OBJ_DIR)/menu.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel geometrica criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto main.o
# Define os arquivos main.cpp como dependencias.
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp 
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto menu.o
# Define os arquivos menu.cpp e menu.h como dependencias.
$(OBJ_DIR)/menu.o: $(SRC_DIR)/menu.cpp $(INC_DIR)/menu.h 
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto calcVolume.o
# Define os arquivos calcVolume.cpp e calcVolume.h como dependencias.
$(OBJ_DIR)/calcVolume.o: $(SRC_DIR)/calcVolume.cpp $(INC_DIR)/calcVolume.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto volume.o
# Define os arquivos volume.cpp e volume.h como dependencias.
$(OBJ_DIR)/volume.o: $(SRC_DIR)/volume.cpp $(INC_DIR)/volume.h 
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto calcPerimetro.o
# Define os arquivos calcPerimetro.cpp e calcPerimetro.h como dependencias.
$(OBJ_DIR)/calcPerimetro.o: $(SRC_DIR)/calcPerimetro.cpp $(INC_DIR)/calcPerimetro.h 
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto perimetro.o
# Define os arquivos perimetro.cpp e perimetro.h como dependencias.
$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/perimetro.cpp $(INC_DIR)/perimetro.h 
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto calcArea.o
# Define os arquivos calcArea.cpp e calcArea.h como dependencias.
$(OBJ_DIR)/calcArea.o: $(SRC_DIR)/calcArea.cpp $(INC_DIR)/calcArea.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto area.o
# Define os arquivos area.cpp e area.h como dependencias.
$(OBJ_DIR)/area.o: $(SRC_DIR)/area.cpp $(INC_DIR)/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*