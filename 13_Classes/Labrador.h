#pragma once
#include "Dog.h"

namespace Animals {
class Labrador : public Animals::Dog
{
private:
    bool m_IsBlackLab;

public:
    Labrador();
    virtual ~Labrador();

    void Bark() override;
    void BegForFood() override;

    bool GetIsBlackLab();
    void SetIsBlackLab( bool isBlackLab );

    void ChaseBirds();
};
}