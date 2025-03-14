/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
// Copyright (C) 2001-2019 German Aerospace Center (DLR) and others.
// This program and the accompanying materials
// are made available under the terms of the Eclipse Public License v2.0
// which accompanies this distribution, and is available at
// http://www.eclipse.org/legal/epl-v20.html
// SPDX-License-Identifier: EPL-2.0
/****************************************************************************/
/// @file    GUIShortcutsSubSys.cpp
/// @author  Pablo Alvarez Lopez
/// @date    Feb 2019
/// @version $Id$
///
// Helper for Shortcuts
/****************************************************************************/


// ===========================================================================
// included modules
// ===========================================================================
#include <config.h>

#include <utils/gui/windows/GUIAppEnum.h>
#include <gui/GUIApplicationWindow.h>
#include <netedit/GNEApplicationWindow.h>

#include "GUIShortcutsSubSys.h"

// ===========================================================================
// member definitions
// ===========================================================================


void
GUIShortcutsSubSys::buildSUMOAccelerators(GUIApplicationWindow* GUIApp) {

    // initialize Ctrl hotkeys with Caps Lock enabled using decimal code (to avoid problems in Linux)

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_a, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_A_STARTSIMULATION_OPENADDITIONALS));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_A, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_A_STARTSIMULATION_OPENADDITIONALS));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_b, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_B_EDITBREAKPOINT));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_B, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_B_EDITBREAKPOINT));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_d, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_D_SINGLESIMULATIONSTEP_OPENDEMAND));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_D, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_D_SINGLESIMULATIONSTEP_OPENDEMAND));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_f, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_F_FULSCREENMODE));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_F, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_F_FULSCREENMODE));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_g, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_G_GAMINGMODE_TOOGLEGRID));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_G, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_G_GAMINGMODE_TOOGLEGRID));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_n, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_OPEN_NETWORK));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_N, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_OPEN_NETWORK));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_o, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_OPEN_CONFIG));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_O, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_OPEN_CONFIG));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_p, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_P));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_P, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_P));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_q, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_Q_CLOSE));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_Q, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_Q_CLOSE));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_r, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_R_RELOAD));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_R, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_R_RELOAD));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_s, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_S_STOPSIMULATION_SAVENETWORK));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_S, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_S_STOPSIMULATION_SAVENETWORK));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_w, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_W_CLOSESIMULATION));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_W, KEYMODIFIER_CONTROL), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_W_CLOSESIMULATION));

    // Shift Keys

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_a, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEADD));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_A, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEADD));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_e, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEEDGE));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_E, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEEDGE));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_j, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEJUNCTION));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_J, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEJUNCTION));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_l, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEPOLY));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_L, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEPOLY));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_o, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEPOI));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_O, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATEPOI));

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_t, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATETLS));
    GUIApp->getAccelTable()->addAccel(parseKey(KEY_T, KEYMODIFIER_SHIFT), GUIApp, FXSEL(SEL_COMMAND, MID_LOCATETLS));

    // Alt Keys

    GUIApp->getAccelTable()->addAccel(parseKey(KEY_F4, KEYMODIFIER_ALT), GUIApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_F4_CLOSE));
}


void
GUIShortcutsSubSys::buildNETEDITAccelerators(GNEApplicationWindow* GNEApp) {

    // initialize single hotkeys using upper and lower Keys (to avoid problems in Linux)

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_a), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_A_ADDITIONALMODE_STOPMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_A), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_A_ADDITIONALMODE_STOPMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_c), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_C_CONNECTMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_C), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_C_CONNECTMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_d), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_D_DELETEMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_D), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_D_DELETEMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_e), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_E_EDGEMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_E), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_E_EDGEMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_i), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_I_INSPECTMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_I), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_I_INSPECTMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_m), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_M_MOVEMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_M), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_M_MOVEMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_p), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_P_POLYGONMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_P), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_P_POLYGONMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_r), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_R_CROSSINGMODE_ROUTEMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_R), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_R_CROSSINGMODE_ROUTEMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_s), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_S_SELECTMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_S), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_S_SELECTMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_t), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_T_TLSMODE_VTYPEMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_T), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_T_TLSMODE_VTYPEMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_v), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_V_VEHICLEMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_V), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_V_VEHICLEMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_w), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_W_PROHIBITIONMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_W), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_W_PROHIBITIONMODE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_z), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_Z_TAZMODE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_Z), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_Z_TAZMODE));

    // Control Keys

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_a, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_A_STARTSIMULATION_OPENADDITIONALS));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_A, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_A_STARTSIMULATION_OPENADDITIONALS));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_d, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_D_SINGLESIMULATIONSTEP_OPENDEMAND));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_D, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_D_SINGLESIMULATIONSTEP_OPENDEMAND));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_g, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_G_GAMINGMODE_TOOGLEGRID));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_G, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_G_GAMINGMODE_TOOGLEGRID));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_i, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_EDITVIEWPORT));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_I, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_EDITVIEWPORT));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_j, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_J_SAVEJOINEDJUNCTIONS));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_J, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_J_SAVEJOINEDJUNCTIONS));
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_k, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_K_OPENTLSPROGRAMS));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_K, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_K_OPENTLSPROGRAMS));
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_l, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_L_SAVEASPLAINXML));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_L, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_L_SAVEASPLAINXML));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_n, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_N_NEWNETWORK));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_N, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_N_NEWNETWORK));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_o, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_OPEN_NETWORK));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_O, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_OPEN_NETWORK));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_q, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_Q_CLOSE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_Q, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_Q_CLOSE));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_r, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_R_RELOAD));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_R, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_R_RELOAD));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_s, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_S_STOPSIMULATION_SAVENETWORK));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_S, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_S_STOPSIMULATION_SAVENETWORK));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_t, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_T_OPENSUMONETEDIT));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_T, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_T_OPENSUMONETEDIT));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_v, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_EDITVIEWSCHEME));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_V, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_EDITVIEWSCHEME));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_w, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_W_CLOSESIMULATION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_W, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_W_CLOSESIMULATION));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_y, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_Y_REDO));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_Y, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_Y_REDO));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_z, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_Z_UNDO));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_Z, KEYMODIFIER_CONTROL), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_Z_UNDO));

    // Shift Keys
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_a, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEADD));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_A, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEADD));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_e, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEEDGE));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_E, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEEDGE));
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_j, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEJUNCTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_J, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEJUNCTION));
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_l, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEPOLY));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_L, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEPOLY));
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_o, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEPOI));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_O, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATEPOI));
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_t, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATETLS));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_T, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_LOCATETLS));

    // Control + Shift Keys

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_a, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_SHIFT_A_SAVEADDITIONALS));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_A, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_SHIFT_A_SAVEADDITIONALS));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_d, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_SHIFT_D_SAVEDEMANDELEMENTS));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_D, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_SHIFT_D_SAVEDEMANDELEMENTS));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_k, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_SHIFT_K_SAVETLS));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_K, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_SHIFT_K_SAVETLS));
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_o, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_OPEN_CONFIG));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_O, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_OPEN_CONFIG));
    
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_s, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_SHIFT_S_SAVENETWORK_AS));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_S, KEYMODIFIER_CONTROL, KEYMODIFIER_SHIFT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_CTRL_SHIFT_S_SAVENETWORK_AS));

    // Alt Keys

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_0, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_0_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_1, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_1_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_2, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_2_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_3, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_3_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_4, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_4_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_5, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_5_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_6, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_6_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_7, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_7_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_8, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_8_TOOGLEEDITOPTION));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_9, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_9_TOOGLEEDITOPTION));

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_F4, KEYMODIFIER_ALT), GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_ALT_F4_CLOSE));

    // initialize Function Hotkeys

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_F3),  GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_F3_SUPERMODE_NETWORK));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_F4),  GNEApp, FXSEL(SEL_COMMAND, MID_HOTKEY_F4_SUPERMODE_DEMAND));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_F12), GNEApp, FXSEL(SEL_COMMAND, MID_GNE_HOTKEY_F12));

    // initialize rest of hotkeys

    GNEApp->getAccelTable()->addAccel(parseKey(KEY_ESC),        GNEApp, FXSEL(SEL_COMMAND, MID_GNE_HOTKEY_ESC));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_DEL),        GNEApp, FXSEL(SEL_COMMAND, MID_GNE_HOTKEY_DEL));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_ENTER),      GNEApp, FXSEL(SEL_COMMAND, MID_GNE_HOTKEY_ENTER));
    GNEApp->getAccelTable()->addAccel(parseKey(KEY_BACKSPACE),  GNEApp, FXSEL(SEL_COMMAND, MID_GNE_HOTKEY_BACKSPACE));
}


int
GUIShortcutsSubSys::parseKey(GUIShortcut key) {
    if ((key >= KEY_0) &&  key <= KEY_9) {
        return (key + 48); // 48 is '0' in ASCII
    } else if ((key >= KEY_a) &&  key <= KEY_z) {
        return (key - 10 + 97); // 97 is 'a' in ASCII
    } else if ((key >= KEY_A) &&  key <= KEY_Z) {
        return (key - 36 + 65); // 65 is 'A' in ASCII
    } else if ((key >= KEY_F1) &&  key <= KEY_F12) {
        return (key - 62 + 65470); // 65470 is 'F1' in ASCII
    } else if (key == KEY_ESC) {
        return parseAccel("Esc");
    } else if (key == KEY_ENTER) {
        return parseAccel("Enter");
    } else if (key == KEY_BACKSPACE) {
        return parseAccel("Back");
    } else if (key == KEY_DEL) {
        return parseAccel("Del");
    } else {
        return 0;
    }
}


int
GUIShortcutsSubSys::parseKey(GUIShortcut key, GUIShortcutModifier firstModifier) {
    int keyCode = parseKey(key);
    // add first modifier
    if (firstModifier == KEYMODIFIER_SHIFT) {
        keyCode += 65536;
    } else if (firstModifier == KEYMODIFIER_ALT) {
        keyCode += 524288;
    } else if (firstModifier == KEYMODIFIER_CONTROL) {
        keyCode += 262144;
    }
    return keyCode;
}


int
GUIShortcutsSubSys::parseKey(GUIShortcut key, GUIShortcutModifier firstModifier, GUIShortcutModifier secondModifier) {
    int keyCode = parseKey(key, firstModifier);
    // add second modifier
    if (secondModifier == KEYMODIFIER_SHIFT) {
        keyCode += 65536;
    } else if (secondModifier == KEYMODIFIER_ALT) {
        keyCode += 524288;
    } else if (secondModifier == KEYMODIFIER_CONTROL) {
        keyCode += 262144;
    }
    return keyCode;
}

/****************************************************************************/

