/*
 ** Surge Synthesizer is Free and Open Source Software
 **
 ** Surge is made available under the Gnu General Public License, v3.0
 ** https://www.gnu.org/licenses/gpl-3.0.en.html
 **
 ** Copyright 2004-2022 by various individuals as described by the Git transaction log
 **
 ** All source at: https://github.com/surge-synthesizer/surge.git
 **
 ** Surge was a commercial product from 2004-2018, with Copyright and ownership
 ** in that period held by Claes Johanson at Vember Audio. Claes made Surge
 ** open source in September 2018.
 */

#ifndef SURGE_SURGEGUIEDITORKEYBOARDACTIONS_H
#define SURGE_SURGEGUIEDITORKEYBOARDACTIONS_H

#include <string>

namespace Surge
{
namespace GUI
{
enum KeyboardActions
{
    SAVE_PATCH,
    FIND_PATCH,
    FAVORITE_PATCH,

    PREV_PATCH,
    NEXT_PATCH,
    PREV_CATEGORY,
    NEXT_CATEGORY,

    ZOOM_TO_DEFAULT,
    ZOOM_PLUS_10,
    ZOOM_PLUS_25,
    ZOOM_MINUS_10,
    ZOOM_MINUS_25,

    SHOW_TUNING_EDITOR,
    SHOW_LFO_EDITOR,
    SHOW_MODLIST,
    TOGGLE_DEBUG_CONSOLE, // Windows only
    TOGGLE_VIRTUAL_KEYBOARD,

    OPEN_MANUAL,
    REFRESH_SKIN,
    TOGGLE_ABOUT,

    OSC_1,
    OSC_2,
    OSC_3,
    TOGGLE_SCENE,

    n_kbdActions
};

inline std::string keyboardActionName(KeyboardActions a)
{
    switch (a)
    {
    case OSC_1:
        return "OSC_1";

    case OSC_2:
        return "OSC_2";
    case OSC_3:
        return "OSC_3";

    case TOGGLE_SCENE:
        return "TOGGLE_SCENE";
    case SAVE_PATCH:
        return "SAVE_PATCH";
    case FIND_PATCH:
        return "FIND_PATCH";
    case FAVORITE_PATCH:
        return "FAVORITE_PATCH";

    case SHOW_TUNING_EDITOR:
        return "SHOW_TUNING_EDITOR";
    case SHOW_LFO_EDITOR:
        return "SHOW_LFO_EDITOR";
    case SHOW_MODLIST:
        return "SHOW_MODLIST";
    case TOGGLE_DEBUG_CONSOLE: // Windows only
        return "TOGGLE_DEBUG_CONSOLE";
    case TOGGLE_VIRTUAL_KEYBOARD:
        return "TOGGLE_VIRTUAL_KEYBOARD";

    case OPEN_MANUAL:
        return "OPEN_MANUAL";
    case REFRESH_SKIN:
        return "REFRESH_SKIN";

    case TOGGLE_ABOUT:
        return "TOGGLE_ABOUT";

    case ZOOM_TO_DEFAULT:
        return "ZOOM_TO_DEFAULT";
    case ZOOM_PLUS_10:
        return "ZOOM_PLUS_10";
    case ZOOM_PLUS_25:
        return "ZOOM_PLUS_25";
    case ZOOM_MINUS_10:
        return "ZOOM_MINUS_10";
    case ZOOM_MINUS_25:
        return "ZOOM_MINUS_25";
    case PREV_CATEGORY:
        return "PREV_CATEGORY";
    case NEXT_CATEGORY:
        return "NEXT_CATEGORY";
    case PREV_PATCH:
        return "PREV_PATCH";
    case NEXT_PATCH:
        return "NEXT_PATCH";
    case n_kbdActions:
        return "ERROR";
    }

    return "ERROR";
}

// This is the user-facing stringification of an action.
inline std::string keyboardActionDescription(KeyboardActions a)
{
    switch (a)
    {
    case SAVE_PATCH:
        return "Open Save Patch Dialog";
    case FIND_PATCH:
        return "Find Patch via Search";
    case FAVORITE_PATCH:
        return "Toggle Patch Favorite";
    case PREV_PATCH:
        return "Previous Patch";
    case NEXT_PATCH:
        return "Next Patch";
    case PREV_CATEGORY:
        return "Previous Patch Category";
    case NEXT_CATEGORY:
        return "Next Patch Category";
    case ZOOM_TO_DEFAULT:
        return "Zoom to Default Zoom";
    case ZOOM_PLUS_10:
        return "Zoom up by 10pts";
    case ZOOM_PLUS_25:
        return "Zoom up by 25pts";
    case ZOOM_MINUS_10:
        return "Zoom down by 10pts";
    case ZOOM_MINUS_25:
        return "Zoom down by 25pts";
    case SHOW_TUNING_EDITOR:
        return "Open Tuning Editor";
    case SHOW_LFO_EDITOR:
        return "Open LFO Editor (MSEG, Formula)";
    case SHOW_MODLIST:
        return "Open Modulation List Editor";
    case TOGGLE_DEBUG_CONSOLE:
        return "Toggle Debug Console (windows only)";
    case TOGGLE_VIRTUAL_KEYBOARD:
        return "Toggle Virtual Keyboard";
    case OPEN_MANUAL:
        return "Open Manual";
    case REFRESH_SKIN:
        return "Refresh Skin";
    case TOGGLE_ABOUT:
        return "About";
    case OSC_1:
        return "Select Oscillator 1";
    case OSC_2:
        return "Select Oscillator 2";
    case OSC_3:
        return "Select Oscillator 3";
    case TOGGLE_SCENE:
        return "Toggle Scene";
    case n_kbdActions:
        return "<ERROR>";
    };

    return "<ERROR>";
}

} // namespace GUI
} // namespace Surge

#endif // SURGE_SURGEGUIEDITORKEYBOARDACTIONS_H