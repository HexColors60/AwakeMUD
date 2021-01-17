/**************************************************************************/
/*  file: memory.h  -  1/21/96 -- Christopher J. Dickey                   */
/*    This is a set of classes to handle memory for the mud.  There's     */
/*    not a whole lot of fancy stuff behind them, but they do help in     */
/*    efficiency.  Basically, we never really delete any memory unless    */
/*    absolutely necessary, and we keep stacks of the most used           */
/*    objects.                                                            */
/**************************************************************************/

#ifndef _string_safety_h_
#define _string_safety_h_

#define STRCAT(a, b) strlcat((a), (b), sizeof((a)) - strlen((a)))
#define STRCPY(a, b) strlcpy((a), (b), sizeof((a)))

#endif
