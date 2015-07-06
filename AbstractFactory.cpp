// AbstractFactory.cpp
#include <iostream>

class ProductA1 : AbstractProductA {};

class ProductA2 : AbstractProductA {};

class AbstractProductB {};

class ProductB1 : AbstractProductB {};

class ProductB2 : AbstractProductB {};
class Client
{
private:
    AbstractProductA _productA;
    AbstractProductB _productB;
public:
    Client(AbstractFactory factory) { 
        _productA = factory.CreateProductA();
        _productB = factory.CreateProductB(); }
};

class AbstractFactory
{
public:
    AbstractProductA CreateProductA();
    AbstractProductB CreateProductB();
};

class ConcreteFactoryA : AbstractFactory
{
public:
    AbstractProductA CreateProductA()
    {
        return new ProductA1();
    }
    AbstractProductB CreateProductB()
    {
        return new _productB1();
    }
};

class ConcreteFactoryB : AbstractFactory
{
public:
    AbstractProductA CreateProductA()
    {
        return new ProductA2();
    }
    AbstractProductB CreateProductB()
    {
        return new ProductB2();
    }
};

class AbstractProductA
{

};


int main() 
{


    return 0;
}

