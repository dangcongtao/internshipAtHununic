#ifndef include_acher_h
#define include_acher_h
#include "man.h"

class Archer : public Man
{
private:
    
public:
    Archer(char *_m_code, float _m_attack, float _m_defend, bool _m_equip, float _m_strength);


    /* Army_general = 1, Valiant = 2, Archer = 3, Knight = 4 */
    int get_kind_of_man () override;
};


#endif