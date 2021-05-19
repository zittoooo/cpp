#include "Enemy.hpp"

Enemy::Enemy(void) {}
Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
}
Enemy::Enemy(const Enemy& enemy)
{
    *this = enemy;
}
Enemy::~Enemy() {}
Enemy& Enemy::operator= (const Enemy& enemy)
{
    hp = enemy.hp;
    type = enemy.type;
}
std::string const& Enemy::getType() const { return (type); }
int Enemy::getHP() const { return (hp); }
void Enemy::takeDamage(int damage) 
{
    if (hp <= damage)
        hp = 0;
    else
    {
        hp -= damage;
    }
}