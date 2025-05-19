C++ namespaces!	
----

In C++, a namespace is a way to prevent name conflicts! Lets say we have two teams, and each team has a function named calculcate(). 
In order to access each function from the teams, we need to specify which one. If you didnt have a namespace, there would be a name conflict,
because there would be two functions with the same name and the compiler wouldnt know which one to run.	

So, namespaces come in handy!

	namespace hello{
		//code
	}

This is it! You can create your own namespaces, and put everything in its own scope.	
In order to use the code, you will have to use the name of the namespace, followed by the double scope operator ( :: ) then the name of the thing you want to use from that namespace - for example a function.	

Up until now, we been using std::cout for output. The std is actually a namespace.	
You can also import the namespace, so you wont need to write it everytime you wanna use something from it - but sometimes it can lead to name conflicts!		

	using namespace std;	

Youre telling the compiler that you wanna use the ENTIRE **std** namespace, and there wont be a need to type std::cout everytime you wanna use cout or something else from the standard library template! 	

You can also use specific things from the library. For example, lets say you wanna keep writing the namespace, but you want to use the std::endl without the namespace:		

	using std::endl;	
			
You can put there either at the top of the program, or even in functions.	
The namespaces are limited to the scopes, which means if you declare a using namespace inside a function, it will only be visible within that function, unless its global ( placed outside any function ).	
