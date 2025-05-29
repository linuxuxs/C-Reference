C++ enumeration type!	
-----	

The enums in c++ are just a way to name values.	
At the end of the day, enums are just integers. You can aswell specify what kind of integer you wanna use by adding ':' after the name, followed by the type (it needs to be an integer, so you can choose unsigned, char, long int...)		
Each enumerator or enum constants (the items inside the enum) needs to be followed by a comma, NOT a semicolon.		

There are 3 ways to create an enumeration:		

* enum Name; - the classic enum (C-style),it can implicity convert to an integer.			

* enum class Name; - safer, scoped, no convertion.		

* enum struct Name; - same as enum class, but it has public members.		

Here are some examples:

```
enum Days{
	MONDAY, TUESDAY, WEDNESDAY
};
```
MONDAY has a default value of 0,TUESDAY 1, WEDNESDAY 2 and so on...		
If you want, you can manually assign values:

```
enum RESULT : unsigned int{
	no_error = 0,  generic_error = 1, file_not_found = 2,
	access_denied = 3, not_found = 404
};
```
You can also store characters:	

```
enum class Color : char {  //specifying type
    Red = 'R',
    Green = 'G',
    Blue = 'B'
};
```

