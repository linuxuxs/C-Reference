How to use Makefiles  
------------  

Makefiles are used to tell the **make** tool how to build your program.

On windows, you need to install **make**, but on linux and macOS are already installed by default.

Make files **must** be indented using TABs.

Create a Makefile ( it can be either uppercase or lowercase m).

The syntax:  
```
target: prerequisites
  command
  command  
```

================	

The target can be ANY name.

================	

Prerequisites: tells where the file comes from ( or what it depends on ). These needs to exists before the command gets executed.	

You can use object code, but make sure to create those too.	

Also, if you have header files, include them in here too, because if any of the prerequisites changes, **make** will recompile the .o file.		

================

The commands can be anything you desire to make.

================	

quick example:
```
main: myFile.o
  g++ myFile.o -o outputName

myFile.o: myFile.cpp
  g++ -c myFile.cpp
```

The -c flag tells the compiler to create an object code for it.
Then, just run **make** in the terminal, and it will compile into the outputName.


you can also create :
```
clear:
  rm *.o main
```

The clear command, will delete all files that ends with o ( *. means all) then the **main** output file.

Variables  
-----
They can only be strings, for example store the flags you want to use in a variable, and just use that variable when needed ``` &(varName) ```
You can either assign by using the = or the :=
```
files = file1.o file2.o
main: $(files)
  echo "Look at this!: " $(files)
  g++ $(files) -o mainFile

file1.o: file1.cpp
  g++ -c file1.cpp

file2.o: file2.cpp
  g++ -c file2.cpp
  
```

.PHONY  
------

.PHONY tells make that a target is not a real file, but just a label for a command or action.

```
clean:
	rm -f *.o main

.PHONY: clean
```

