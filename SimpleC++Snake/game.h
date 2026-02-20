#ifndef GAME_H
#define GAME_H

#include "utilities.h"
#include "renderer.h"
#include "platform_commands.h"
#include "object_manager.h"

/**
* @brief Класс игры
* Класс игры содержит всю логику игры и функции для её управления.
*/
class Game {

private:
	ObjectManager* objectManager;
	FoodObject* food;
	PlayerObject* player;
	ScoreObject* score;

	HWND* window;
	HDC* hdc;
	int finalScore;

public:
	/**
	* @brief Конструктор класса
	* @params window Окно для отрисовки игры
	* @params hdc ???
	* @params objectManager Менеджер объектов
	* @params food Объект еды
	* @params player Объект игрока
	* @params score Объект счёта
	*/
	Game(HWND* window, HDC* hdc, ObjectManager* objectManager, FoodObject* food, PlayerObject* player, ScoreObject* score);
	
	/**
	* @brief Деконструктор класса
	*/
	~Game();

	/**
	* @brief Получает счёт игры.
	* @return finalScore финальные очки игрока
	*/
	inline int getScore() { return finalScore; }

	/**
	* @brief Инициализация игры.
	* @note Функция сбрасывает игру, если она до этого была запущена .
	*/
	void init();

	/**
	* @brief Выводит счёт и останавливает игру.
	*/
	void gameOver();

	/**
	* @brief Обработка ввода игрока
	*/
	void input();

	/**
	* @brief Обновляет игру
	* @note Обновляются размеры экрана, счёт и т.п. (Не сбрасывает прогресс)
	*/
	void update();

	/**
	* @brief Отрисовка всего на экран
	*/
	void draw();
};


#endif