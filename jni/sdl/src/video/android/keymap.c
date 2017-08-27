/* The license of this source code is public domain */

#include "SDL_config.h"

#include "SDL_version.h"
#include "SDL_androidinput.h"
#include "SDL_screenkeyboard.h"

void SDL_android_init_keymap(SDLKey *SDL_android_keymap)
{
  int i;
  SDLKey * keymap = SDL_android_keymap;

  for (i=0; i<SDL_arraysize(SDL_android_keymap); ++i)
    SDL_android_keymap[i] = SDL_KEY(UNKNOWN);

  keymap[KEYCODE_UNKNOWN] = SDL_KEY(UNKNOWN);

  keymap[KEYCODE_BACK] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_5));

  keymap[KEYCODE_MENU] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_4));

  keymap[KEYCODE_DPAD_CENTER] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_1));
  keymap[KEYCODE_SEARCH] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_7));

  keymap[KEYCODE_VOLUME_UP] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_2));
  keymap[KEYCODE_VOLUME_DOWN] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_3));
  
  keymap[KEYCODE_HOME] = SDL_KEY(HOME); // Cannot be used in application

  // On some devices pressing Camera key will generate Camera keyevent, but releasing it will generate Focus keyevent.
  keymap[KEYCODE_CAMERA] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_6));
  keymap[KEYCODE_FOCUS] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_6));

  keymap[KEYCODE_CALL] = SDL_KEY(TAB);

  keymap[KEYCODE_0] = SDL_KEY(0);
  keymap[KEYCODE_1] = SDL_KEY(1);
  keymap[KEYCODE_2] = SDL_KEY(2);
  keymap[KEYCODE_3] = SDL_KEY(3);
  keymap[KEYCODE_4] = SDL_KEY(4);
  keymap[KEYCODE_5] = SDL_KEY(5);
  keymap[KEYCODE_6] = SDL_KEY(6);
  keymap[KEYCODE_7] = SDL_KEY(7);
  keymap[KEYCODE_8] = SDL_KEY(8);
  keymap[KEYCODE_9] = SDL_KEY(9);
  keymap[KEYCODE_STAR] = SDL_KEY(KP_MULTIPLY);
  keymap[KEYCODE_POUND] = SDL_KEY(HASH);

  keymap[KEYCODE_DPAD_UP] = SDL_KEY(UP);
  keymap[KEYCODE_DPAD_DOWN] = SDL_KEY(DOWN);
  keymap[KEYCODE_DPAD_LEFT] = SDL_KEY(LEFT);
  keymap[KEYCODE_DPAD_RIGHT] = SDL_KEY(RIGHT);

  keymap[KEYCODE_SOFT_LEFT] = SDL_KEY(KP_4);
  keymap[KEYCODE_SOFT_RIGHT] = SDL_KEY(KP_6);
  keymap[KEYCODE_ENTER] = SDL_KEY(RETURN);


  keymap[KEYCODE_CLEAR] = SDL_KEY(CLEAR);
  keymap[KEYCODE_A] = SDL_KEY(A);
  keymap[KEYCODE_B] = SDL_KEY(B);
  keymap[KEYCODE_C] = SDL_KEY(C);
  keymap[KEYCODE_D] = SDL_KEY(D);
  keymap[KEYCODE_E] = SDL_KEY(E);
  keymap[KEYCODE_F] = SDL_KEY(F);
  keymap[KEYCODE_G] = SDL_KEY(G);
  keymap[KEYCODE_H] = SDL_KEY(H);
  keymap[KEYCODE_I] = SDL_KEY(I);
  keymap[KEYCODE_J] = SDL_KEY(J);
  keymap[KEYCODE_K] = SDL_KEY(K);
  keymap[KEYCODE_L] = SDL_KEY(L);
  keymap[KEYCODE_M] = SDL_KEY(M);
  keymap[KEYCODE_N] = SDL_KEY(N);
  keymap[KEYCODE_O] = SDL_KEY(O);
  keymap[KEYCODE_P] = SDL_KEY(P);
  keymap[KEYCODE_Q] = SDL_KEY(Q);
  keymap[KEYCODE_R] = SDL_KEY(R);
  keymap[KEYCODE_S] = SDL_KEY(S);
  keymap[KEYCODE_T] = SDL_KEY(T);
  keymap[KEYCODE_U] = SDL_KEY(U);
  keymap[KEYCODE_V] = SDL_KEY(V);
  keymap[KEYCODE_W] = SDL_KEY(W);
  keymap[KEYCODE_X] = SDL_KEY(X);
  keymap[KEYCODE_Y] = SDL_KEY(Y);
  keymap[KEYCODE_Z] = SDL_KEY(Z);
  keymap[KEYCODE_COMMA] = SDL_KEY(COMMA);
  keymap[KEYCODE_PERIOD] = SDL_KEY(PERIOD);
  keymap[KEYCODE_TAB] = SDL_KEY(TAB);
  keymap[KEYCODE_SPACE] = SDL_KEY(SPACE);
  keymap[KEYCODE_DEL] = SDL_KEY(BACKSPACE);
  keymap[KEYCODE_GRAVE] = SDL_KEY(GRAVE);
  keymap[KEYCODE_MINUS] = SDL_KEY(MINUS);
  keymap[KEYCODE_PLUS] = SDL_KEY(PLUS);
  keymap[KEYCODE_EQUALS] = SDL_KEY(EQUALS);
  keymap[KEYCODE_LEFT_BRACKET] = SDL_KEY(LEFTBRACKET);
  keymap[KEYCODE_RIGHT_BRACKET] = SDL_KEY(RIGHTBRACKET);
  keymap[KEYCODE_BACKSLASH] = SDL_KEY(BACKSLASH);
  keymap[KEYCODE_SEMICOLON] = SDL_KEY(SEMICOLON);
  keymap[KEYCODE_APOSTROPHE] = SDL_KEY(APOSTROPHE);
  keymap[KEYCODE_SLASH] = SDL_KEY(SLASH);
  keymap[KEYCODE_AT] = SDL_KEY(AT);

  keymap[KEYCODE_MEDIA_PLAY_PAUSE] = SDL_KEY(KP_2);
  keymap[KEYCODE_MEDIA_STOP] = SDL_KEY(HELP);
  keymap[KEYCODE_MEDIA_NEXT] = SDL_KEY(KP_8);
  keymap[KEYCODE_MEDIA_PREVIOUS] = SDL_KEY(KP_5);
  keymap[KEYCODE_MEDIA_REWIND] = SDL_KEY(KP_1);
  keymap[KEYCODE_MEDIA_FAST_FORWARD] = SDL_KEY(KP_3);
  keymap[KEYCODE_MUTE] = SDL_KEY(KP_0);

  keymap[KEYCODE_SYM] = SDL_KEY(LGUI);
  keymap[KEYCODE_NUM] = SDL_KEY(NUMLOCKCLEAR);

  keymap[KEYCODE_ALT_LEFT] = SDL_KEY(LALT);
  keymap[KEYCODE_ALT_RIGHT] = SDL_KEY(RALT);

  keymap[KEYCODE_SHIFT_LEFT] = SDL_KEY(LSHIFT);
  keymap[KEYCODE_SHIFT_RIGHT] = SDL_KEY(RSHIFT);

  keymap[KEYCODE_EXPLORER] = SDL_KEY(F3);
  keymap[KEYCODE_ENVELOPE] = SDL_KEY(F4);

  keymap[KEYCODE_HEADSETHOOK] = SDL_KEY(F5);
  keymap[KEYCODE_NOTIFICATION] = SDL_KEY(F6);

  // Cannot be received by application, OS internal
  keymap[KEYCODE_ENDCALL] = SDL_KEY(LSHIFT);
  keymap[KEYCODE_POWER] = SDL_KEY(RALT);

  keymap[KEYCODE_PAGE_UP] = SDL_KEY(PAGEUP);
  keymap[KEYCODE_PAGE_DOWN] = SDL_KEY(PAGEDOWN);
  keymap[KEYCODE_PICTSYMBOLS] = SDL_KEY(LSHIFT);
  keymap[KEYCODE_SWITCH_CHARSET] = SDL_KEY(LSHIFT);
  keymap[KEYCODE_BUTTON_A] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_0));
  keymap[KEYCODE_BUTTON_B] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_1));
  keymap[KEYCODE_BUTTON_C] = SDL_KEY(C);
  keymap[KEYCODE_BUTTON_X] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_2));
  keymap[KEYCODE_BUTTON_Y] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_3));
  keymap[KEYCODE_BUTTON_Z] = SDL_KEY(Z);
  keymap[KEYCODE_BUTTON_L1] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_4));
  keymap[KEYCODE_BUTTON_R1] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_5));
  keymap[KEYCODE_BUTTON_L2] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_6));
  keymap[KEYCODE_BUTTON_R2] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_7));
  keymap[KEYCODE_BUTTON_THUMBL] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_8));
  keymap[KEYCODE_BUTTON_THUMBR] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_9));
  keymap[KEYCODE_BUTTON_START] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_5));
  keymap[KEYCODE_BUTTON_SELECT] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_4));
  keymap[KEYCODE_BUTTON_MODE] = SDL_KEY(SPACE);
  keymap[KEYCODE_ESCAPE] = SDL_KEY(ESCAPE);
  keymap[KEYCODE_FORWARD_DEL] = SDL_KEY(DELETE);
  keymap[KEYCODE_CTRL_LEFT] = SDL_KEY(LCTRL);
  keymap[KEYCODE_CTRL_RIGHT] = SDL_KEY(RCTRL);
  keymap[KEYCODE_CAPS_LOCK] = SDL_KEY(CAPSLOCK);
  keymap[KEYCODE_SCROLL_LOCK] = SDL_KEY(SCROLLLOCK);
  keymap[KEYCODE_META_LEFT] = SDL_KEY(LGUI);
  keymap[KEYCODE_META_RIGHT] = SDL_KEY(RGUI);
  keymap[KEYCODE_FUNCTION] = SDL_KEY(RGUI);
  keymap[KEYCODE_SYSRQ] = SDL_KEY(PRINT);
  keymap[KEYCODE_BREAK] = SDL_KEY(PAUSE);
  keymap[KEYCODE_MOVE_HOME] = SDL_KEY(HOME);
  keymap[KEYCODE_MOVE_END] = SDL_KEY(END);
  keymap[KEYCODE_INSERT] = SDL_KEY(INSERT);
  keymap[KEYCODE_FORWARD] = SDL_KEY(RIGHT);
  keymap[KEYCODE_MEDIA_PLAY] = SDL_KEY(F1);
  keymap[KEYCODE_MEDIA_PAUSE] = SDL_KEY(F2);
  keymap[KEYCODE_MEDIA_CLOSE] = SDL_KEY(F3);
  keymap[KEYCODE_MEDIA_EJECT] = SDL_KEY(F4);
  keymap[KEYCODE_MEDIA_RECORD] = SDL_KEY(F5);
  keymap[KEYCODE_F1] = SDL_KEY(F1);
  keymap[KEYCODE_F2] = SDL_KEY(F2);
  keymap[KEYCODE_F3] = SDL_KEY(F3);
  keymap[KEYCODE_F4] = SDL_KEY(F4);
  keymap[KEYCODE_F5] = SDL_KEY(F5);
  keymap[KEYCODE_F6] = SDL_KEY(F6);
  keymap[KEYCODE_F7] = SDL_KEY(F7);
  keymap[KEYCODE_F8] = SDL_KEY(F8);
  keymap[KEYCODE_F9] = SDL_KEY(F9);
  keymap[KEYCODE_F10] = SDL_KEY(F10);
  keymap[KEYCODE_F11] = SDL_KEY(F11);
  keymap[KEYCODE_F12] = SDL_KEY(F12);
  keymap[KEYCODE_NUM_LOCK] = SDL_KEY(NUMLOCKCLEAR);
  keymap[KEYCODE_NUMPAD_0] = SDL_KEY(KP_0);
  keymap[KEYCODE_NUMPAD_1] = SDL_KEY(KP_1);
  keymap[KEYCODE_NUMPAD_2] = SDL_KEY(KP_2);
  keymap[KEYCODE_NUMPAD_3] = SDL_KEY(KP_3);
  keymap[KEYCODE_NUMPAD_4] = SDL_KEY(KP_4);
  keymap[KEYCODE_NUMPAD_5] = SDL_KEY(KP_5);
  keymap[KEYCODE_NUMPAD_6] = SDL_KEY(KP_6);
  keymap[KEYCODE_NUMPAD_7] = SDL_KEY(KP_7);
  keymap[KEYCODE_NUMPAD_8] = SDL_KEY(KP_8);
  keymap[KEYCODE_NUMPAD_9] = SDL_KEY(KP_9);
  keymap[KEYCODE_NUMPAD_DIVIDE] = SDL_KEY(KP_DIVIDE);
  keymap[KEYCODE_NUMPAD_MULTIPLY] = SDL_KEY(KP_MULTIPLY);
  keymap[KEYCODE_NUMPAD_SUBTRACT] = SDL_KEY(KP_MINUS);
  keymap[KEYCODE_NUMPAD_ADD] = SDL_KEY(KP_PLUS);
  keymap[KEYCODE_NUMPAD_DOT] = SDL_KEY(KP_PERIOD);
  keymap[KEYCODE_NUMPAD_COMMA] = SDL_KEY(KP_PERIOD);
  keymap[KEYCODE_NUMPAD_ENTER] = SDL_KEY(KP_ENTER);
  keymap[KEYCODE_NUMPAD_EQUALS] = SDL_KEY(KP_EQUALS);
  keymap[KEYCODE_NUMPAD_LEFT_PAREN] = SDL_KEY(KP_DIVIDE);
  keymap[KEYCODE_NUMPAD_RIGHT_PAREN] = SDL_KEY(KP_MULTIPLY);
  keymap[KEYCODE_VOLUME_MUTE] = SDL_KEY(F13);
  keymap[KEYCODE_INFO] = SDL_KEY(F14);
  keymap[KEYCODE_CHANNEL_UP] = SDL_KEY(UP);
  keymap[KEYCODE_CHANNEL_DOWN] = SDL_KEY(DOWN);
  keymap[KEYCODE_ZOOM_IN] = SDL_KEY(PAGEUP);
  keymap[KEYCODE_ZOOM_OUT] = SDL_KEY(PAGEDOWN);
  keymap[KEYCODE_TV] = SDL_KEY(F15);
  keymap[KEYCODE_WINDOW] = SDL_KEY(F1);
  keymap[KEYCODE_GUIDE] = SDL_KEY(F2);
  keymap[KEYCODE_DVR] = SDL_KEY(F3);
  keymap[KEYCODE_BOOKMARK] = SDL_KEY(F4);
  keymap[KEYCODE_CAPTIONS] = SDL_KEY(F5);
  keymap[KEYCODE_SETTINGS] = SDL_KEY(F6);
  keymap[KEYCODE_TV_POWER] = SDL_KEY(F7);
  keymap[KEYCODE_TV_INPUT] = SDL_KEY(F8);
  keymap[KEYCODE_STB_POWER] = SDL_KEY(F9);
  keymap[KEYCODE_STB_INPUT] = SDL_KEY(F10);
  keymap[KEYCODE_AVR_POWER] = SDL_KEY(F11);
  keymap[KEYCODE_AVR_INPUT] = SDL_KEY(F12);
  keymap[KEYCODE_PROG_RED] = SDL_KEY(F13);
  keymap[KEYCODE_PROG_GREEN] = SDL_KEY(F14);
  keymap[KEYCODE_PROG_YELLOW] = SDL_KEY(F15);
  keymap[KEYCODE_PROG_BLUE] = SDL_KEY(F1);
  keymap[KEYCODE_APP_SWITCH] = SDL_KEY(F2);
  // Key layout of my cheap crappy Datex gamepad, USB identifier is "DragonRise Inc."
  keymap[KEYCODE_BUTTON_1] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_3));
  keymap[KEYCODE_BUTTON_2] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_1));
  keymap[KEYCODE_BUTTON_3] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_0));
  keymap[KEYCODE_BUTTON_4] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_2));
  keymap[KEYCODE_BUTTON_5] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_4));
  keymap[KEYCODE_BUTTON_6] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_5));
  keymap[KEYCODE_BUTTON_7] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_6));
  keymap[KEYCODE_BUTTON_8] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_7));
  keymap[KEYCODE_BUTTON_9] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_5));
  keymap[KEYCODE_BUTTON_10] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_KEYCODE_4));
  keymap[KEYCODE_BUTTON_11] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_8));
  keymap[KEYCODE_BUTTON_12] = SDL_KEY(SDL_KEY_VAL(SDL_ANDROID_GAMEPAD_KEYCODE_9));
  keymap[KEYCODE_BUTTON_13] = SDL_KEY(M);
  keymap[KEYCODE_BUTTON_14] = SDL_KEY(N);
  keymap[KEYCODE_BUTTON_15] = SDL_KEY(O);
  keymap[KEYCODE_BUTTON_16] = SDL_KEY(P);
  keymap[KEYCODE_MEDIA_TOP_MENU] = SDL_KEY(MENU);
  keymap[KEYCODE_TV_CONTENTS_MENU] = SDL_KEY(MENU);
  keymap[KEYCODE_TV_MEDIA_CONTEXT_MENU] = SDL_KEY(MENU);

  keymap[KEYCODE_MOUSE_LEFT] = SDL_KEY(MOUSE_LEFT);
  keymap[KEYCODE_MOUSE_MIDDLE] = SDL_KEY(MOUSE_MIDDLE);
  keymap[KEYCODE_MOUSE_RIGHT] = SDL_KEY(MOUSE_RIGHT);
  keymap[KEYCODE_MOUSE_WHEEL_UP] = SDL_KEY(MOUSE_WHEEL_UP);
  keymap[KEYCODE_MOUSE_WHEEL_DOWN] = SDL_KEY(MOUSE_WHEEL_DOWN);
  keymap[KEYCODE_MOUSE_X1] = SDL_KEY(MOUSE_X1);
  keymap[KEYCODE_MOUSE_X2] = SDL_KEY(MOUSE_X2);
}

unsigned char SDL_android_keysym_to_scancode[SDLK_LAST] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	22, // SDLK_BACKSPACE = 8
	23, // SDLK_TAB = 9
	0,
	0,
	0,
	36, // SDLK_RETURN
	0,
	0,
	0,
	0,
	0,
	127, // SDLK_PAUSE
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9, // SDLK_ESCAPE = 27
	0,
	0,
	0,
	0,
	65, // SDLK_SPACE = 32
	0,
	0,
	0,
	0,
	0,
	0,
	48, // SDLK_QUOTE = 39
	0,
	0,
	0,
	0,
	59, // SDLK_COMMA = 44
	20, // SDLK_MINUS
	60, // SDLK_PERIOD
	61, // SDLK_SLASH
	19, // SDLK_0 = 48
	10, // SDLK_1 = 49
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18, // SDLK_9 = 57
	0,
	47, // SDLK_SEMICOLON = 59
	0,
	21, // SDLK_EQUALS = 61
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0, // 70
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0, // 80
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0, // 90
	34, // SDLK_LEFTBRACKET = 91
	51, // SDLK_BACKSLASH = 92
	35, // SDLK_RIGHTBRACKET = 93
	0,
	0,
	49, // SDLK_BACKQUOTE = 96
	38, // SDLK_a = 97
	56,
	54,
	40,
	26,
	41,
	42,
	43,
	31,
	44,
	45,
	46,
	58,
	57,
	32,
	33,
	24,
	27,
	39,
	28,
	30,
	55,
	25,
	53,
	29,
	52, // SDLK_z = 122
	0,
	0,
	0,
	0,
	119, // SDLK_DELETE = 127
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	90,
	87,
	88,
	89,
	83,
	84,
	85,
	79,
	80,
	81,
	91,
	106,
	63,
	82,
	86,
	104, // SDLK_KP_ENTER = 271
	0, // SDLK_KP_EQUALS = 272
	111, // SDLK_UP = 273
	116, // SDLK_DOWN = 274
	114, // SDLK_RIGHT = 275
	113, // SDLK_LEFT = 276
	118, // SDLK_INSERT = 277
	110, // SDLK_HOME = 278
	115, // SDLK_END = 279
	112, // SDLK_PAGEUP = 280
	117, // SDLK_PAGEDOWN = 281
	67, // SDLK_F1 = 282
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	95,
	96, // SDLK_F12 = 293
	0,
	0,
	0,
	0,
	0,
	0,
	77, // SDLK_NUMLOCK = 300
	66, // SDLK_CAPSLOCK = 301
	78, // SDLK_SCROLLOCK = 302
	62, // SDLK_RSHIFT = 303
	50, // SDLK_LSHIFT = 304
	105, // SDLK_RCTRL = 305
	37, // SDLK_LCTRL = 306
	108, // SDLK_RALT = 307
	64, // SDLK_LALT = 308
	0,
	0,
	133, // SDLK_LSUPER = 311 /**< Left "Windows" key */
	134, // SDLK_RSUPER = 312 /**< Right "Windows" key */
	0,
	0,
	0,
	107, // SDLK_PRINT = 316
	0,
	0,
	135, // SDLK_MENU = 319
	0,
	0,
	0,
};
