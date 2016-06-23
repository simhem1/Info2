#ifndef __SPACESHIP_HPP__
#define __SPACESHIP_HPP__

#include <string>

class Spaceship {
 private:
	 int speed;
	 std::string type;
 public:
	 Spaceship(std::string, int);
	 virtual ~Spaceship();
	 bool operator==(Spaceship);
	 void setSpeed(const int);
	 const int getSpeed(void);
	 void setType(const std::string&);
	 const std::string& getType(void);
};

#endif

