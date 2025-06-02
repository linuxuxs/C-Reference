C++ overloading functions	
-----	

As you know, in c++ the names of the functions needs to be unique. In case of having 2 functions with the same name, you may get an error.	

But, there's a way to overload them, which means to have 2 functions with identical names, but they perform different code.			
This is a form and an example of the polymorphism principle ( many forms for a single concept)	

All you have to do is:	

* Have different argument types.  *(1)*	
* You can even have 2 types or more ( like int and float ), and just change their order. *(2)*		
* The return type is a restriction, even if you have 2 functions with the same name but different return type, that **WON'T** work. *(3)*	
* The name of the argument is a restriction, just like the return type, it **WON'T** work, because the compiler won't know which one to use. *(4)*		

Examples: 

--------- 1 -----------
```
int add_itself(int x){  //the return type does NOT matter.
	return x + x;
}

double add_itself(double x){
	return x + x + x + x;
}

```

--------- 2 -----------
```
void test(int num, float another_num){	
	//code1	
}

void test(float num, int another_num){	
	//code2
}
```

--------- 3 -----------	
```
int will_it_work(int x){  //no, it won't.
	//code
}

void will_it_work(int x){
	//code
}
```
--------- 4 -----------
```
int please_work( int num ){  //it won't.
	//code
}

int please_work( int abc ) {
	//code
}
```

So, in conclusion, to be able to overload two or more functions, all it matters is **the type of the arguments**, nothing else (and of course to have the same name, but if not, that won't be a function overload anymore).	
	
Also, be careful if you use function overloading with default arguments.	
----------

