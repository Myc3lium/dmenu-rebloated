/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"terminus:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel]  = { "#eeeeee", "#005577" },
	[SchemeOut]  = { "#000000", "#00ffff" },
    // patch highlight
    [SchemeSelHighlight]  = { "#00b383", "#005577" },
    [SchemeNormHighlight] = { "#00b383", "#222222" },
    // patch END
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
// patch lineheight
static unsigned int lineheight = 0;
// patch END

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

// patch border
static unsigned int border_width = 1;
// patch END

// patch symbols
static const char *symbol_left  = "←";
static const char *symbol_right = "→";
// patch END

// patch fuzzymatch
static int fuzzy = ~0;
// patch END

// patch numbers
static int display_number = ~0;
// patch END

// patch highlight
static int highlight = ~0;
// patch END

// patch highlight
static unsigned int dmx = 0;
static unsigned int dmy = 0;
static unsigned int dmw = 0;
// patch END
