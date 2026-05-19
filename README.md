# CheatPractice

CheatPractice is a simple Windows practice tool designed to improve file searching speed and attention.

The program creates a random file on the Desktop with a custom extension, opens it, waits a few seconds, and automatically deletes it.
Your goal is to quickly identify and remember the file name before it disappears.

## Features

* Random file name generation
* Custom file extensions
* Automatic file opening using Windows start
* Automatic deletion timer
* Simple validation system
* Lightweight and fast
* Written in C using MinGW/GCC

## Requirements

* Windows 10/11
* GCC / MinGW installed

## Compile

```bash
gcc main.c -o CheatPractice.exe
```

## Usage

Run the executable:

```bash
CheatPractice.exe
```

Choose a file extension when prompted.

Example:

```text
txt
```

The program will:

1. Create a random file
2. Open it automatically
3. Wait 10 seconds
4. Delete the file
5. Ask you to enter the correct filename

## Example

```text
=== CheatPractice ===

File extension (txt/log/dat): txt

File created and opened.
You have 10 seconds to find it.

File automatically deleted.

Enter the full file name:
```

## Notes

* Files are created on the Desktop.
* Only one file is generated per session.
* The project is intended for practice and learning purposes.

## Author

By: Leeyiers
