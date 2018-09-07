#include QMK_KEYBOARD_H

// Macro Declarations
enum {
  LCK_SCR = 0 // Lock screen
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ╔═══════╦═══════╦═══════╗
 * ║  Mute ║ Vol ↓ ║ Vol ↑ ║
 * ╠═══════╬═══════╬═══════╣
 * ║  ◄ ◄  ║  ► ►  ║ Play  ║
 * ╠═══════╩═══════╣       ║
 * ║  Lock screen  ║ Pause ║
 * ╚═══════════════╩═══════╝
 */
[0] = LAYOUT( \
  KC_MUTE,    KC_VOLD,   KC_VOLU,    \
  KC_MPRV,    KC_MNXT,   KC_MPLY,    \
  M(LCK_SCR)                         \
)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  if (record->event.pressed) {
      switch(id) {
          case LCK_SCR:
              SEND_STRING(SS_LGUI("l"));  // Win+L -> Lock screen
              return false;
      }
  }
  return MACRO_NONE;
};

void matrix_init_user(void) {
}
