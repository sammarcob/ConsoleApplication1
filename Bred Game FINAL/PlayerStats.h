#pragma once

struct PlayerStats
{
    int Health = 100;
    int attackDamage;
    int stamina = 2;
    int doDamage()
    {
        stamina--;
        if (stamina <= 0)
        {
            stamina = -1;
            return 0;
        }
        else
        {
            return attackDamage;
        }
        
    }
    int relax()
    {
        stamina += 2;

        return stamina;
    }

};