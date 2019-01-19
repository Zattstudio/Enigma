# Enigma
A simple implementation of the enigma cipher machine in C++

## Introduction
The Enigma machine was used by the Germans in Word War II (WW2) to encrypt their secret messages.  Enigma was invented by the German engineer Arthur Scherbius. It works by using an electrical circuit with simple buttons for the keys and lamps for indicators. It also uses a set of three rotors for changing the encryption algorithm every time a key is pressed.
### This implementation
This implementation is not focused on fast encryption of words / sentences. It rather uses single commands to enter key after key. You can also check the setting of a rotor at every time. This gives you full control over what happens and how it works.
Note that as in the original Enigma machine, this program will ignore spaces and capitalised letters. This implementation is the Enigma machine is written in C++. 
Enjoy :smiley:

## Build
### Dependencies 
* gcc (g++)
* CMake
* git **(Optional)**

### Build on Linux
1. Clone the repository from github or download via the "Download ZIP" Button
```console
$ git clone https://github.com/Zattstudio/Enigma.git
```
2. Navigate into the directory
```console
$ cd Enigma
```
3. Generate CMake project files
```console
$ cmake .
```
4. Build project
```console
$ make
```
5. Execute
```console
$ ./Enigma
```
## Usage
Once you've successfully run the project, you'll be prompted with a welcome message. From here you can set up the configuration for your rotors or start entering keystrokes directly.
### Commands
|Command    |Parameters |Example    |Description|
|---        |---        |---        |---        |
|Insert Key |Key(letter)|**:IK** _'A'_    |This Command inserts a key into the algorithm. This is the equivalent to pressing a key on the device.
|Quit       |-          |**:Q**     | This will Quit the program
