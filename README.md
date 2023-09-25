# Text Editor in C

This is a simple text editor implemented in C using the ncurses library. The editor allows users to create, edit, and save text files, as well as customize the editor's appearance and behavior using keyboard shortcuts.

## Implement a simple text editor in C.

## Features

- Create, edit, and save text files
- Implement basic editing functions, such as inserting and deleting characters, moving the cursor, and undoing changes
- Support multiple views (or windows) of the same file
- Allow users to customize the editor's appearance and behavior (e.g., font size, line spacing, keyboard shortcuts)
- Use proper error handling and memory management techniques

## Requirements

- C compiler (GCC or Clang recommended)
- Make utility (to build the program)

## Usage

To build the program, run the following command:

```bash
make
```

To run the program, use the following command:

```bash
./text_editor [filename]
```

Replace [filename] with the name of the file you want to edit. If the file does not exist, a new file will be created. For example, to create or edit a file called test.txt, use the following command:

```bash
./text_editor test.txt
```

The editor's main window will open, displaying the contents of the file. You can use the keyboard to edit the text and navigate the file.

## Keyboard Shortcuts

The editor supports the following keyboard shortcuts:

- `Ctrl+S`: Save the current file
- `Ctrl+O`: Open a new file
- `Ctrl+X`: Cut the selected text
- `Ctrl+C`: Copy the selected text
- `Ctrl+V`: Paste the copied or cut text
- `Ctrl+Z`: Undo the last change
- `Ctrl+Shift+Z`: Redo the last change
- `Ctrl+Q`: Quit the editor

## Notes

- The code is well-organized and commented for readability.
- The editor uses a simple data structure to represent text (e.g., a linked list of lines).
- The editor uses the ncurses library to create a text-based user interface.

## Example

Here is an example of how to use the editor:

- Start the editor and open a file:

```bash
./text_editor test.txt
```

- Type some text into the editor:
```bash
This is a test file.
```

- Use the arrow keys to move the cursor around the text.

- Use the Ctrl+S shortcut to save the file.

- Use the Ctrl+O shortcut to open a new file.

- Edit the new file and save it.

- Use the Ctrl+Q shortcut to quit the editor.

## Authors

- Ahmadi
- Max Base

Copyright 2023, Max Base
