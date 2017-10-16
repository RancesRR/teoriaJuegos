#include "Zombie.h"



Zombie::Zombie()
{

}

void Zombie::init(float speed, glm::vec2 position) {
	_speed = speed;
	_position = position;
	color.set(210, 62, 62, 255);
}

void Zombie::update(const std::vector<std::string>& levelData,
	std::vector<Human*>& humans,
	std::vector<Zombie*>& zombies){
}

Zombie::~Zombie()
{
}

void Zombie::move(float playerX, float playerY)
{
	//_position.y += _speed;
	//_position.x -= _speed;
	//_position.y = _position.y + sin(90) * 0.08;
	//_position.x = _position.x + cos(90) * 0.08;
	
	float direction_x = playerX - _position.x;
	float direction_y = playerY - _position.y;

	float hypotenuse = sqrt(direction_x*direction_x + direction_y*direction_y);
	direction_x /= hypotenuse;
	direction_y /= hypotenuse;

	_position.x += direction_x*_speed/16;
	_position.y += direction_y*_speed/16;
	
}
