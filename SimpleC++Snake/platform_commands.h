#ifndef PLATFORM_COMMANDS_H
#define PLATFORM_COMMANDS_H

#include "utilities.h"
#include "renderer.h"
#include "object_manager.h"
/**
*	@brief Ввод 
*/
struct Input;
/**
*	@brief положение кнопки 
*	@params is_down проверка на нажатие
*	@params changed проверка на измение я хз
*/
struct ButtonState {
	bool is_down = false;
	bool changed = false;
};
/**
*	@brief список кнопок 
*/

enum { // holds every button action in the game
	BUTTON_MOVEUP,
	BUTTON_MOVEDOWN,
	BUTTON_MOVELEFT,
	BUTTON_MOVERIGHT,

	// how many buttons actions there are in total
	BUTTON_COUNT 
};
/**
*	@brief Ввод
*/
struct Input {
	std::array<ButtonState, BUTTON_COUNT> buttons;
};
/**
*	@brief запрашивает положение кнопок  
*/
void getKeyStates(uint32& vk_code, bool& is_down, HWND* window);
/**
*	@brief В ДУШЕ НЕ ЧАЮ ЧЕС СЛОВО 
*/
void inputProcessing(uint32 vk_code, bool is_down);
/**
*	@brief читайте бриф выше 
*/
void updateVelocityFromInputs(PlayerObject& player);

extern Input inputs;

#endif