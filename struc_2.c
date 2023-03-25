#include <stdio.h>
struct user
{
	char *name;
	char *email;
	int age;
};
int main(void)
{
	struct user user;
	struct user *ptr;

	ptr = &user;

	(*ptr).name = "Foo Bar";
	ptr->email = "foo@hbtn.com";

	printf("user.name : %p\n", (*ptr).name);
	printf("user.email : %p\n", ptr->email);
	return (0);
}
