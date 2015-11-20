#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje
{
protected:
	int x, y;
	int identificador;
	char img;
	
public:
	virtual bool rev_pared(int** map, int movX, int movY) = 0;
	virtual void movimiento(bool pared, int movX, int movY) = 0;
	char getImg(){ return img; }
	int getIdentificador(){ return identificador; }
	int getX(){ return x; }
	int getY(){ return y; }
};

#endif // PERSONAJE_H
