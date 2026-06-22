## What is Docker?

Docker is a platform that packages an application and all its dependencies into a **container**, allowing it to run consistently across different systems.

---

### Dockerfile

A text file containing instructions for building a Docker image.

### Image

A read-only template, a blueprint, containing:

* Application code
* Dependencies
* Runtime environment
* Configuration

### Container

A running instance of an image (so called blueprint).

### Registry

A service for storing and sharing images, such as Docker Hub.

---

# Dockerfile Example

```dockerfile
FROM python:3.12

WORKDIR /app

COPY . .

RUN pip install -r requirements.txt

CMD ["python", "app.py"]
```
Another example:
```dockerfile
FROM gcc:latest

WORKDIR /app

COPY . .

RUN g++ main.cpp -o main

CMD ["./main"]
```
---

## Explaining

### FROM

```dockerfile
1. FROM python:3.12
or
2. FROM gcc:latest
```
1 and 2. Specifies the base image used to build the container.
Examples:
- FROM python:3.12 → image with Python 3.12 installed
- FROM gcc:latest → image with the GCC compiler installed


### WORKDIR

```dockerfile
WORKDIR /app
```

Sets the working directory inside the container.

Equivalent idea:

```bash
cd /app
```

### COPY

```dockerfile
COPY . .
```

Copies files from the project folder into the container.

### RUN

```dockerfile
1. RUN pip install -r requirements.txt
or
2. RUN g++ main.cpp -o main
```

RUN executes a command while building the image.

Examples:
- RUN pip install -r requirements.txt → installs dependencies
- RUN g++ main.cpp -o main → compiles the C++ source code and creates an executable named main

### CMD

```dockerfile
1. CMD ["python", "app.py"]
or
2. CMD ["./main"]
```

1 and 2. Specifies the default command executed when the container starts.

---

# Build vs Run

## Build Time

Instructions executed while creating the image:

```dockerfile
FROM
WORKDIR
COPY
RUN
```

```text
Dockerfile -> docker build -> Image
```

## Run Time

Instruction executed when starting a container:

```dockerfile
CMD
```

```text
Image -> docker run -> Container
```

---

# Commands that you can use

## Build an Image

```bash
docker build -t myapp .
```

* `build` → create image
* `-t myapp` → image name
* `.` → current directory

---

## List Images

```bash
docker images
```

---

## Run a Container

```bash
docker run myapp
```

---

## Run with Port Mapping

```bash
docker run -p 5000:5000 myapp
```

Format:

```text
host_port:container_port
```

---

## List Running Containers

```bash
docker ps
```

---

## List All Containers

```bash
docker ps -a
```

---

## Stop a Container

```bash
docker stop <container_id>
```

---

## Remove a Container

```bash
docker rm <container_id>
```

---

## Remove an Image

```bash
docker rmi <image_name>
```
