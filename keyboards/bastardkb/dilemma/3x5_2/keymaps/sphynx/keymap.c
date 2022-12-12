/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H


#define LAYOUT_KC(                             \
  k00, k01, k02, k03, k04,     k44, k43, k42, k41, k40, \
  k10, k11, k12, k13, k14,     k54, k53, k52, k51, k50, \
  k20, k21, k22, k23, k24,     k64, k63, k62, k61, k60, \
                 k30, k32,     k72, k70                 \
)                                                       \
{                                                       \
  {   KC_##k00,   KC_##k01,   KC_##k02,   KC_##k03,   KC_##k04 },                \
  {   KC_##k10,   KC_##k11,   KC_##k12,   KC_##k13,   KC_##k14 },                \
  {   KC_##k20,   KC_##k21,   KC_##k22,   KC_##k23,   KC_##k24 },                \
  {   KC_##k30, KC_NO,   KC_##k32, KC_NO, KC_NO },                \
  {   KC_##k40,   KC_##k41,   KC_##k42,   KC_##k43,   KC_##k44 },                \
  {   KC_##k50,   KC_##k51,   KC_##k52,   KC_##k53,   KC_##k54 },                \
  {   KC_##k60,   KC_##k61,   KC_##k62,   KC_##k63,   KC_##k64 },                \
  {   KC_##k70, KC_NO,   KC_##k72, KC_NO, KC_NO },                \
}

enum dilemma_layers {
    _DVO = 0
    , _NBR
    , _FCN
    , _ADJ
};

enum dilemma_keycode {
  DVO = SAFE_RANGE
  , NBR
  , FCN
  , ADJ
  , DYNAMIC_MACRO_RANGE
  , UPWD
  , UMLD
  , UTAG
  , TBEN
  , FHOM
  , SLNE

}; 

#define KC_ KC_TRNS 

#define KC_CWTG CW_TOGG
#define KC_RSET QK_BOOT
#define KC_ECLR EE_CLR

#define KC_MREC DYN_REC_START1
#define KC_MDAT DYN_MACRO_PLAY1

#define KC_MRE2 DYN_REC_START2
#define KC_MDA2 DYN_MACRO_PLAY2

#define KC_MSTO DYN_REC_STOP

#define LSPO_KEY KC_9
#define RSPC_KEY KC_0

#define KC_MCTL LCTL_T(KC_ENT)
#define KC_MALT RALT_T(KC_BSPC)

#define KC_BOOT LCTL(LALT(KC_DEL))
#define KC_TSKM LCTL(LSFT(KC_ESC))
#define KC_SHUT LALT(KC_F4)

#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD

#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD

#define KC_CPY LCTL(KC_C)
#define KC_PST LCTL(KC_V)
#define KC_CUT LCTL(KC_X)
#define KC_UND LCTL(KC_Z)


#define KC_UMLD UMLD
#define KC_UPWD UPWD
#define KC_UTAG UTAG
#define KC_TBEN TBEN

#define KC_FHOM FHOM
#define KC_SLNE SLNE

#define KC_DIT  LCTL(LSFT(KC_A))
#define KC_SCR  LCTL(LSFT(KC_Z))

#define LONGPRESS_DELAY 150
#define LAYER_TOGGLE_DELAY 300

#define KC_GU_3 MT(MOD_LGUI, KC_3)  // Tap for 3, hold for GUI
#define KC_GU_H MT(MOD_RGUI, KC_HOME)  // Tap for Home, hold for GUI

#define KC_CT_U MT(MOD_LCTL, KC_U)  // Tap for U, hold for Control
#define KC_CT_H MT(MOD_LCTL, KC_H)  // Tap for H, hold for Control

#define KC_SF_E MT(MOD_RSFT, KC_E)  // Tap for E, hold for Shift
#define KC_SF_T MT(MOD_RSFT, KC_T)  // Tap for T, hold for Shift

#define KC_AL_O MT(MOD_LALT, KC_O)  // Tap for O, hold for Alt
#define KC_AL_N MT(MOD_LALT, KC_N)  // Tap for N, hold for Alt


#define KC_CT_6 MT(MOD_LCTL, KC_6)	// Tap for 6, hold for Control
#define KC_CT_L MT(MOD_LCTL, KC_LEFT)	// Tap for LEFT, hold for Control

#define KC_SF_5 MT(MOD_RSFT, KC_5)	// Tap for 5, hold for Shift
#define KC_SF_D MT(MOD_RSFT, KC_DOWN)	// Tap for DOWN, hold for Shift

#define KC_AL_4 MT(MOD_LALT, KC_4)	// Tap for 4, hold for Alt
#define KC_AL_R MT(MOD_LALT, KC_RGHT)	// Tap for RGHT, hold for Alt


#define KC_C_F6 MT(MOD_LCTL, KC_F6)	// Tap for F6, hold for Control
#define KC_C_12 MT(MOD_LCTL, KC_F12)	// Tap for F12, hold for Control

#define KC_S_F5 MT(MOD_RSFT, KC_F5)	// Tap for F5, hold for Shift
#define KC_S_11 MT(MOD_RSFT, KC_F11)	// Tap for F11, hold for Shift

#define KC_A_F4 MT(MOD_LALT, KC_F4)	// Tap for F4, hold for Alt
#define KC_A_10 MT(MOD_LALT, KC_F10)	// Tap for F10, hold for Alt

#define KC_CENT MT(MOD_LCTL, KC_ENT)
#define KC_ABSP MT(MOD_RALT, KC_BSPC)

#define KC_CESC MT(MOD_LCTL, KC_ESC)
#define KC_ATAB MT(MOD_RALT, KC_TAB)

#define KC_NBR LT(_NBR, KC_SPC)  // Tap for Space, hold for Number layer
#define KC_FCN LT(_FCN, KC_SPC)  // Tap for Space, hold for Function layer

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DVO] = LAYOUT_KC(
  QUOT, COMM,  DOT,    P,    Y,                F,    G,    C,    R,    L,  
     A, AL_O, SF_E, CT_U,    I,                D, CT_H, SF_T, AL_N,    S,  
  SCLN,    Q,    J,    K,    X,                B,    M,    W,    V,    Z,  
                          CENT,  NBR,  FCN, ABSP
  ),

  [_NBR] = LAYOUT_KC(
     0,    1,    2, GU_3, LBRC,             RBRC, GU_H,   UP,  END, RSET,  
  TBEN, AL_4, SF_5, CT_6, SLSH,             BSLS, CT_L, SF_D, AL_R,  DEL,
   DIT,    7,    8,    9, MINS,              EQL, UMLD, UPWD, UTAG,  SCR, 
                           CPY,     ,     ,  PST    
  ),

  [_FCN] = LAYOUT_KC(
  RSET,   F1,   F2,   F3,  CUT,              UND,   F9,   F8,   F7, MSTO, 
  FHOM, A_F4, S_F5, C_F6, MREC,             MRE2, C_12, S_11, A_10, SLNE,  
  RHUI, RSAI, RVAI,  GRV, MDAT,             MDA2, BOOT, RVAD, RSAD, RHUD,
                          CESC,     ,     , ATAB   
   ),

  [_ADJ] = LAYOUT_KC(
      ,     ,     ,     ,     ,                 ,     ,     ,     ,     , 
      ,     ,     ,     , SHUT,             BOOT,     ,     ,     ,     ,
      ,     ,     ,     , RTOG,             RMOD,     ,     ,     ,     ,
                          RSET,     ,     , RSET
  ),
};



void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

	inline void tap(uint16_t keycode) {
		register_code(keycode);
		unregister_code(keycode);
	};


	static uint16_t key_timer;

  switch (keycode) {
  
    case DVO:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistant_default_layer_set(1UL<<_DVO);
      }
      return false;
      break;
      
    case NBR:  
      if (record->event.pressed) {
        layer_on(_NBR);
        update_tri_layer(_NBR, _FCN,  _ADJ);
      } else {
        layer_off(_NBR);
        update_tri_layer(_NBR, _FCN,  _ADJ);
      }
      return false;
      break;
      
    case FCN:     
      if (record->event.pressed) {
        layer_on(_FCN);
        update_tri_layer(_NBR, _FCN,  _ADJ);
      } else {
        layer_off(_FCN);
        update_tri_layer(_NBR, _FCN,  _ADJ);
      }
      return false;
      break;
      
    case ADJ:
      if (record->event.pressed) {
        layer_on( _ADJ);
      } else {
        layer_off( _ADJ);
      }
      return false;
      break;
	  
    case UPWD: 
	if (record->event.pressed) {
		key_timer = timer_read();
	} else {
		if (timer_elapsed(key_timer) > LONGPRESS_DELAY) {
			SEND_STRING("misy@K3=") ;
		} else {
			SEND_STRING("nylgH4!+") ;
		}
	}
	break;	
	
    case UMLD: 
	if (record->event.pressed) {
		key_timer = timer_read();
	} else {
		if (timer_elapsed(key_timer) > LONGPRESS_DELAY) {
			SEND_STRING("daviala@mfcgd.com") ;
		} else {
			SEND_STRING("alexander_david@manulife.ca") ;
		}
	}
	break;	


 
    case UTAG: 
	if (record->event.pressed) {
		key_timer = timer_read();
	} else {
		if (timer_elapsed(key_timer) > LONGPRESS_DELAY) {
			SEND_STRING("qmk compile -kb bastardkb/dilemma/3x5_2/splinky -km sphynx") ;
		} else {
			SEND_STRING("daviala") ;
		}
	}
	break;
 
    case TBEN: 
	if (record->event.pressed) {
		key_timer = timer_read();
	} else {
		if (timer_elapsed(key_timer) > LONGPRESS_DELAY) {
			SEND_STRING( SS_TAP(X_TAB) SS_TAP(X_ENTER)) ;
		} else {
			SEND_STRING( SS_TAP(X_DOT) ) ;
		}
	}
	break;

 
    case FHOM: 
	if (record->event.pressed) {
		key_timer = timer_read();
	} else {
		if (timer_elapsed(key_timer) > LONGPRESS_DELAY) {
			SEND_STRING(SS_TAP(X_END)) ;
		} else {
			SEND_STRING(SS_TAP(X_HOME)) ;
		}
	}
	break;

    case SLNE: 
	if (record->event.pressed) {
		key_timer = timer_read();
	} else {
		if (timer_elapsed(key_timer) > LONGPRESS_DELAY) {
			SEND_STRING(SS_LCTL(SS_TAP(X_A) SS_TAP(X_C))) ;
		} else {
			SEND_STRING(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END)) SS_LCTL(SS_TAP(X_C)));
		}
	}
	break;	




      
  }
  
  return true;
  
}


// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _NBR, _FCN, _ADJ);
}
