#include <iostream>

class based
{
    public:
        based(){};
        virtual ~based(){};
};

class A : public based
{
    public:
        A(){};
        ~A(){};
};

class B : public based
{
    public:
        B(){};
        ~B(){};
};

class C : public based
{
    public:
        C(){};
        ~C(){};
};