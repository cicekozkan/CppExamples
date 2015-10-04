// In this example enum class is introduced. Without an enum class enumarators of different enums with same value may be mixed
// enum class prevents this mix. Also "Scope resolution operator" is introduced first time.


#include <stdlib.h>
#include <assert.h>

enum class Color {White, Yellow, Green};
enum class TrafficLight {Yellow, Green, Red};

int main()
{
	Color c;

	c = Color::White;

	TrafficLight tl = TrafficLight::Green;


	return 0;
}