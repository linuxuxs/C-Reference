C++ OOP
--------------

OOP (Object-Oriented programming) it's a programming paradigm that focuses on classes that are literally blueprints that helps to create different objects with the same functionality. It's used to encapsulate chunks of code and wrap everything up and use it whenever you need.	
It's ADT (Abstract Data Type).

With OOP:	
			
* You can hide information		

* Abstraction	

* Reusability	

* Inheritance	

* Polymorphic classes (polymorphism)	


---------------	

CLASSES:	

-- are blueprints	  
-- it's kind of a user defined data type	    
-- it has attributes (data) and methods (functions)	  
-- it uses encapsulation to give the access for each member/method.	  
-- in c++,  are terminated by a ;  

Here's a player class with a health attribute and a sleep method:	

```
class Player{
private:
    int health;
public:	
    void Sleep(){
        std::cout << "Player is sleeping...";
    }
};
```
As you can see, the name of the class is Player, and we have one private attribute, the health of the player which is an int and a method that outputs "Player is sleeping..." into the console.   

Member access modifiers:			
	
* private: The members/methods that are private **won't** be able to be accessed outside the class.		

* public: The members/methods that are public can be accessed anywhere.		

* protected: The members/methods that are protected can be accessed inside that class, but is private if it's inherited (more on inheritance)	

So, if you try to change, set, or get the private attribute health outside the class, you will get an error.		
By default, a class is **private**, so if you don't specify any access modifier, it's going to be private.	


OBJECTS:	  
-- reprezents an instance of a class	  
-- you can as many objects as you need	    
-- each object has it's own identity	  
-- each object can use their own class methods 	  


```
Player Player1;
```

We have created an instance of the class Player. We named it Player1. Now, that "variable" holds everything that was inside the class (the health integer and the Sleep function).	

-- to call the sleep method we will use the dot operator:			
```
Player1.Sleep();
```

You can also create objects on the heap:	
```
Player *Player2 = new Player;	
delete Player2;   //dont forget to deallocate the memory after use	
```	
You can also call a method or access an attribute using the arrow operator (if we have an object on the heap):
```
Player2->Sleep();
```

Or if you really want, you can dereference it aswell:	
```
*(Player2).Sleep();
```	
-------------------	
The implementation of a class method:	


You can either implement the method implicitly inline (inside the class), using the scope resolution operator :: (outside the class) or in a different file (header file).	

Ex1, implicitly inline:	
```
class Test1{
    void method1(){
        std::cout << "Some implementation...";
    }
};
```
Ex2, using scope resolution operator:	
```
class Test2{
    void method2();
};

void Test2::method2(){
    ///some implementation...
}
```

In this example, we use the :: operator. When implementing a method using this operator, you need to specify the exact return type, followed by the name of the class, the :: operator and finally the method name.			
	
	
