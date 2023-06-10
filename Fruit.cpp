#include "Fruit.h"


Fruit::Fruit(int sugar) : _sugar(sugar)
{
}

void Fruit::Show()
{
    std::cout << "Basic Fruit sugar: " << _sugar << std::endl;
}


Apple::Apple(int sugar, std::string color) : Fruit(sugar), _color(color)
{
}

void Apple::Show()
{
    std::cout << _color << " Apple, sugar per 100g: " << _sugar << std::endl;
}

Banana::Banana(int sugar, int ripeness) : Fruit(sugar), _ripeness(ripeness)
{
}

void Banana::Show()
{
    std:: cout << " Banana, ripeness: " << _ripeness << "sugar per 100g: " << _sugar << std::endl;
}
