#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    enable_raw_mode();
    init_editor();

    if (argc < 2 || argc > 2) {
        show_help();
    }

    editor_set_status_message(
            "HELP: Ctrl-S = save | Ctrl-Q = quit | Ctrl-F = find");

    while(1) {
        editor_refresh_screen();
        editor_process_key_press();
    }

    return 0;
}
