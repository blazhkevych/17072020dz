﻿/*
Задание 2.
Создайте абстрактный класс Shape для рисования плоских фигур. Определите виртуальные методы:
• Show() — вывод на экран информации о фигуре,
• Save() — сохранение фигуры в файл,
• Load() — считывание фигуры из файла.
Определите производные классы:
• Square — квадрат, который характеризуется координатами левого верхнего угла и длиной стороны;
• Rectangle — прямоугольник с заданными координатами верхнего левого угла и размерами;
• Circle — окружность с заданными координатами центра и радиусом;
• Ellipse — эллипс с заданными координатами верхнего угла описанного вокруг него прямоугольника со сторонами, параллельными осям координат,
и размерами этого прямоугольника.
Создайте массив фигур, сохраните фигуры в файл, загрузите в другой массив и отобразите информацию о каждой из фигур.
*/
#include <iostream>
using namespace std;

class Shape {
public:
	virtual ~Shape() = default;
	virtual void Show() = 0;
	virtual void Save() = 0;
	virtual void Load() = 0;
};

class Square : public Shape { //— квадрат, который характеризуется координатами левого верхнего угла и длиной стороны;
	double A;//координатами левого верхнего угла
	double B;//длиной стороны
public:
	~Square();

};

class Rectangle : public Shape { //— прямоугольник с заданными координатами верхнего левого угла и размерами;
	double A;//координатами верхнего левого угла
	double B;//размерами
public:
	~Rectangle();

};

class Circle : public Shape { //— окружность с заданными координатами центра и радиусом;
	double A;//заданными координатами центра
	double B;//и радиусом
public:
	~Circle();

};

class Ellipse : public Shape { // — эллипс с заданными координатами верхнего угла описанного вокруг него прямоугольника со сторонами, 
	//параллельными осям координат,и размерами этого прямоугольника.
	double A;//заданными координатами центра
	double B;//и радиусом
public:
	~Ellipse();

};


int main() {



}

