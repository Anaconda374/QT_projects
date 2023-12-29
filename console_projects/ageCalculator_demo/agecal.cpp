
#include "agecal.h"

AgeCal::AgeCal()
{

}

int AgeCal::age() const
{
    return m_age;
}

void AgeCal::setAge(int newAge)
{
    m_age = newAge;
}

QString AgeCal::getName() const
{
    return name;
}

void AgeCal::setName(const QString &newName)
{
    name = newName;
}

int AgeCal::dogAge()
{
    return m_age/7;
}



