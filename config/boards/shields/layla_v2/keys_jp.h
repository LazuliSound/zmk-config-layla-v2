/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Row 1
#define JP_ZKHK GRAVE // Zenkaku ↔ Hankaku ↔ Kanji (半角 ↔ 全角 ↔ 漢字)
#define JP_N1   N1    // 1
#define JP_N2   N2    // 2
#define JP_N3   N3    // 3
#define JP_N4   N4    // 4
#define JP_N5   N5    // 5
#define JP_N6   N6    // 6
#define JP_N7   N7    // 7
#define JP_N8   N8    // 8
#define JP_N9   N9    // 9
#define JP_N0   N0    // 0
#define JP_MINS MINUS // -
#define JP_CIRC EQUAL // ^
#define JP_YEN  INT3  // ¥

// Row 2
#define JP_Q    Q    // Q
#define JP_W    W    // W
#define JP_E    E    // E
#define JP_R    R    // R
#define JP_T    T    // T
#define JP_Y    Y    // Y
#define JP_U    U    // U
#define JP_I    I    // I
#define JP_O    O    // O
#define JP_P    P    // P
#define JP_AT   LBKT // @
#define JP_LBRC RBKT // [
// Row 3
#define JP_EISU CAPS // Eisū (英数)
#define JP_A    A    // A
#define JP_S    S    // S
#define JP_D    D    // D
#define JP_F    F    // F
#define JP_G    G    // G
#define JP_H    H    // H
#define JP_J    J    // J
#define JP_K    K    // K
#define JP_L    L    // L
#define JP_SCLN SEMI // ;
#define JP_COLN SQT  // :
#define JP_RBRC NUHS // ]
// Row 4
#define JP_Z    Z     // Z
#define JP_X    X     // X
#define JP_C    C     // C
#define JP_V    V     // V
#define JP_B    B     // B
#define JP_N    N     // N
#define JP_M    M     // M
#define JP_COMM COMMA // ,
#define JP_DOT  DOT   // .
#define JP_SLSH FSLH  // /
#define JP_BSLS INT1  // (backslash)
#define JP_MHEN INT5  // Muhenkan (無変換)
#define JP_HENK INT4  // Henkan (変換)
#define JP_KANA INT2  // Katakana ↔ Hiragana ↔ Rōmaji (カタカナ ↔ ひらがな ↔ ローマ字)

// Row 1
#define JP_EXLM LS(JP_N1)     // !
#define JP_DQUO LS(JP_N2)     // "
#define JP_HASH LS(JP_N3)     // #
#define JP_DLR  LS(JP_N4)     // $
#define JP_PERC LS(JP_N5)     // %
#define JP_AMPR LS(JP_N6)     // &
#define JP_QUOT LS(JP_N7)     // '
#define JP_LPRN LS(JP_N8)     // (
#define JP_RPRN LS(JP_N9)     // )
#define JP_EQL  LS(JP_MINS)   // =
#define JP_TILD LS(JP_CIRC)   // ~
#define JP_PIPE LS(JP_YEN)    // |
// Row 4
#define JP_GRV  LS(JP_AT)      // `
#define JP_LCBR LS(JP_LBRC)    // {
#define JP_CAPS LS(JP_EISU)    // Caps Lock
#define JP_PLUS LS(JP_SCLN)    // +
#define JP_ASTR LS(JP_COLN)    // *
#define JP_RCBR LS(JP_RBRC)    // }
#define JP_LABK LS(JP_COMM)    // <
#define JP_RABK LS(JP_DOT)     // >
#define JP_QUES LS(JP_SLSH)    // ?
#define JP_UNDS LS(JP_BSLS)    // _