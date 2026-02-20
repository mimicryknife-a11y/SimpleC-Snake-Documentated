#ifndef RENDERER_H
#define RENDERER_H

#include "utilities.h"

extern float widthPercent;
extern float heightPercent;
extern float startXPercent;
extern float startYPercent;

extern int rendererMin;
extern int rendererMax;
/**
* @brief рендеринг заднего фона
*/
void renderBackground();
/*
*	@brief  обновляет размер экрана
*/
void updateVars();
/*
	@brief рендерит клетку
	@params tilemap  клетка карты 
*/
void renderTilemap(std::array<std::array<uint32, tilemapSizeY>, tilemapSizeX>& tilemap);
/*
	@brief отображает счет в конце игры
	@params score счет 
	@params hWnd настолько очевидно что я даже обьяснять не буду
*/
void renderScore(HWND* hWnd, int score);
/*
	@brief очищает экран
	@params color цвет хз
*/
void clearScreen(uint32 color);
/*
* @brief рисует пиксели мб
* @params color читайте выще
* @params  x0 координата 0x
* @params  y0 координата 0y
* @params  x1 координата x1
* @params  y1 координата y1
*/
void drawRectInPixels(int x0, int y0, int x1, int y1, uint32 color);
/*
* @brief рисует пиксели мб
* @params color читайте выще
* @params  x0 координата 0x
* @params  y0 координата 0y
* @params  x1 координата x1
* @params  y1 координата y1
*/
void drawRectInPercent(float x0, float y0, float x1, float y1, uint32 color);

#endif