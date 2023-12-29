
#ifndef AGECAL_H
#define AGECAL_H


#include<QObject>

class AgeCal
{
public:
    AgeCal();
    int age() const;
    void setAge(int newAge);

    QString getName() const;
    void setName(const QString &newName);

    int dogAge();

private:
    //we can quickly define 'setter' and 'getter' for private members using 'refactor' tool of this IDE.
    int m_age;

    QString name;
};

#endif // AGECAL_H
