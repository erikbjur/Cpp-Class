#include "Labrador.h"
#include <iostream>

Animals::Labrador::Labrador()
{
    std::cout << "Constructor for Labrador" << std::endl;
}

Animals::Labrador::~Labrador()
{
    std::cout << "Destructor for Labrador" << std::endl;
}

void Animals::Labrador::Bark()
{
    std::cout << "Hey, I'm a lab, Bark Bark Bark." << std::endl;
}

void Animals::Labrador::BegForFood()
{
    std::cout << "Seriously, I'm a lab and I will eat every piece of food here" << std::endl;
}

bool Animals::Labrador::GetIsBlackLab()
{
    return this->m_IsBlackLab;
}

void Animals::Labrador::SetIsBlackLab( bool isBlackLab )
{
    this->m_IsBlackLab = isBlackLab;
}

void Animals::Labrador::ChaseBirds()
{
    std::cout << "Where's the birds???  Labs like birds" << std::endl;
}
