#include QMK_KEYBOARD_H

// enum custom_keycodes {
//   CUSTOM_DAN = SAFE_RANGE,
//   CUSTOM_LGH
// };

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case CUSTOM_DAN:
//       if (record->event.pressed) {
//         SEND_STRING(">dancers>"); // US keyboard layout
//       } else {}
//       break;
//     case CUSTOM_LGH:
//       if (record->event.pressed) {
//         SEND_STRING(">D");
//       } else {}
//       break;

//   }
//   return true;
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		
	LAYOUT(																														
		KC_NUBS, 	KC_1,    	KC_2,    	KC_3,   	KC_4,   	KC_5,   	KC_6,  		KC_7,  					KC_8,    			KC_9,    			KC_0,    			KC_MINS, 	KC_EQL,  	KC_DEL, 	KC_BSPC,
		KC_TAB,  	KC_Q,    	KC_W,    	KC_E,   	KC_R,   	KC_T,   	KC_Y,  		KC_U,  					KC_I,    			KC_O,    			KC_P,    			KC_LBRC, 	KC_RBRC, 	KC_BSLS,
		KC_GESC, 	KC_A,    	KC_S,    	KC_D,   	KC_F,   	KC_G,   	KC_H,  		KC_J,  					KC_K,    			KC_L,    			KC_SCLN, 			KC_QUOT, 	KC_ENT,
		KC_LSFT, 	KC_GRV,  	KC_Z,    	KC_X,   	KC_C,   	KC_V,   	KC_B,  		KC_N,  					KC_M,    			KC_COMM, 			KC_DOT,  			KC_SLSH, 	KC_LSFT, 	KC_NO,
		KC_LCTL, 	KC_LALT, 	KC_LGUI, 	KC_SPC, 	KC_SPC, 	KC_SPC, 	MO(1), 		KC_MEDIA_PLAY_PAUSE, 	KC_TRNS, 			KC_AUDIO_VOL_DOWN, 	KC_AUDIO_VOL_UP),

	LAYOUT(
		KC_TRNS, 	KC_F1,    	KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,   	KC_F7,   				KC_F8,   			KC_F9,   			KC_F10,  			KC_F11,  	KC_F12,    	KC_TRNS, KC_TRNS,
		KC_TRNS, 	RGB_TOG,  	RGB_MOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD, 	RGB_VAI, 				RGB_VAD, 			KC_TRNS, 			KC_TRNS, 			KC_UP,   	KC_TRNS,   	KC_RIGHT,
		KC_TRNS, 	KC_TRNS,  	KC_TRNS,    KC_TRNS,    KC_TRNS,  	KC_TRNS,    KC_TRNS, 	KC_TRNS, 				KC_TRNS, 			KC_TRNS, 			KC_LEFT, 			KC_DOWN, 	KC_TRNS,
		KC_TRNS, 	KC__MUTE, 	KC__VOLDOWN,KC__VOLUP,  KC_TRNS,    KC_TRNS,    KC_TRNS, 	KC_TRNS, 				KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 	KC_TRNS,  	KC_TRNS,
		KC_TRNS, 	KC_TRNS,  	KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 	KC_TRNS, 				KC__MUTE, 			KC_TRNS, 			KC_TRNS),
};
