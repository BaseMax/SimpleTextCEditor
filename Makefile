CC = cc
CFLAGS = -O2 -g -Wall -Werror

all: text_editor

text_editor:
	@echo "[+] Building project..."
	$(CC) $(CFLAGS) -o text_editor ./src/text_editor.c

clean:
	@echo "[+] Cleaning..."
	rm -f text_editor
