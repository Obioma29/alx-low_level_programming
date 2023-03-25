#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};
int main(void)
{
	struct User user;
	user.name = "Foo Bar";
	user.email = "foo@hbtn.io";
	user.age = 98;

	printf("User.name %s\n", user.name);
	printf("User.email %s\n", user.email);
	printf("User.age %d\n", user.age);
	return (0);
}
