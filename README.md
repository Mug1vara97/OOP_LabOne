# Классы на С++

## Вектор(Vector)

![vector](/vector/vector.jpg)

### "Vector" описывает вектор в трехмерном пространстве и предоставляет операции для работы с ним. Имеет следующие методы и функции::

- Конструкторы: Vector() и Vector(double x, double y, double z) - создают объект вектора с заданными значениями координат.
- Методы для вычисления длины вектора и угла между вектором и осями координат (getLength, getAngleX, getAngleY, getAngleZ).
- Перегруженные операторы для выполнения операций над векторами: сложение (+), вычитание (-) и умножение на скаляр (*).
- Методы для сохранения и загрузки вектора из файла (saveToFile, loadFromFile).
- Перегруженный оператор сравнения (==), который позволяет проверить, равны ли два вектора.

## Время(Time)

![time](/time/time.jpg)

### "Time" абстрактная реализациия времени.Она содержит в себе данные о часах, минутах и секундах, а также методы для работы с этими данными:

- Конструкторы: Time() и Time(int hours, int minutes, int seconds) конструктор с аргументами, инициализирует объект заданными значениями часов, минут и секунд.
- Методы установки и получения значения времени:  
getCurrentTime() заполняет объект текущим значением времени.  
setTime(int hours, int minutes, int seconds) устанавливает значения часов, минут и секунд объекта  
getHours(), setHours(int hours) получают и устанавливают значение часов объекта.  
getMinutes(), setMinutes(int minutes) получают и устанавливают значение минут объекта.
getSeconds(), setSeconds(int seconds) получают и устанавливают значение секунд объекта.
- Методы изменения значения времени:  
addHours(int hours) добавляет заданное количество часов к текущему значению часов.  
addMinutes(int minutes) добавляет заданное количество минут к текущему значению минут.  
addSeconds(int seconds) добавляет заданное количество секунд к текущему значению секунд.
- Методы получения значения времени в разных форматах:  
toSeconds() возвращает значение времени в секундах.  
toHours() возвращает значение часов текущего времени.  
toMinutes() возвращает значение времени в минутах.  
toString() возвращает строковое представление времени в формате "часы:минуты:секунды".
- Методы сравнения времени:  
isEqual(Time other) проверяет что текущий объект времени равен другому объекту времени. 

## Дробь(fraction)

![vector](/fraction/fraction.jpg)

### "Fraction" представляет собой дробь с числителем и знаменателем. Он предоставляет различные операции для управления дробями. Имеет следующие методы и функции: 

- Конструктор: fraction(int num, int den) принимает значения числителя и знаменателя дроби
- Метооды возвращения:  
int getNumerator() - метод возвращающий числитель дроби  
int getDenominator() - метод возвращающий знаменатель дроби
- Методы устанавливающие новое заначения:  
void setNumerator(int num) - метод устанавливающий новое значение числителя дроби  
void setDenominator(int den) - метод устанавливающий новое значение знаменателя дроби 
- Метод сложения:  
fraction add(fraction frac) - метод выполняющий сложение двух дробей и возвращающий результат в виде новой дроби 
- Метод вычитания:  
fraction subtract(fraction frac) - метод выполняющий вычитание одной дроби из другой и возвращающий результат в виде новой дроби
- Метод умножения:  
fraction multiply(fraction frac) - метод выполняющий умножение двух дробей и возвращающий результат в виде новой дроби
- Метод деления:  
fraction divide(fraction frac) - метод выполняющий деление одной дроби на другую и возвращающий результат в виде новой дроби
- Методы сравнения времени:  
isEqual(fraction frac) - метод проверяющий равенство двух дробей и возвращающий true, если они равны, и false в противном случае

## Геометрическая фигура(Shape)

![vector](/shape/shape.jpg)

### "Shape" представляет геометрическую фигуру, которая определяется своей шириной и высотой. Имеет следующие методы и функции: 
- Конструктор:  
Shape(width, height) инициализирует объект фигуры с заданной шириной и высотой 
- Методы:  
Методы getWidth() и getHeight() возвращают ширину и высоту фигуры соответственно  
Методы setWidth(width) и setHeight(height) устанавливают новые значения ширины и высоты фигуры.  
Методы getArea() и getPerimeter() возвращают площадь и периметр фигуры соответственно  
Перегруженный оператор (==) сравнивает текущий объект фигуры с другим объектом Shape на равенств  
Метод saveToFile(fileName) сохраняет ширину и высоту фигуры в текстовый файл с заданным именем  
Метод loadFromFile(fileName) загружает ширину и высоту фигуры из текстового файла с заданным именем  
Метод checkConsistency() проверяет, что ширина и высота фигуры положительны 
