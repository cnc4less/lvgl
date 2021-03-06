/**
 * @file lv_app_kb.h
 *
 */

#ifndef LV_APP_KB_H
#define LV_APP_KB_H

/*********************
 *      INCLUDES
 *********************/
#include "../lv_app.h"
#if USE_LV_APP_KB != 0

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef enum
{
	LV_APP_KB_MODE_TXT = 0x01,
	LV_APP_KB_MODE_NUM = 0x02,
    LV_APP_KB_MODE_WIN_RESIZE = 0x04,
}lv_app_kb_mode_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the application keyboard
 */
void lv_app_kb_init(void);

/**
 * Open a keyboard for a text area object
 * @param ta pointer to a text area object
 * @param mode 'OR'd values of 'lv_app_kb_mode_t' enum
 * @param close a function to call when the keyboard is closed
 * @param ok a function to called when the "Ok" button is pressed
 * @return the created button matrix objects
 */
lv_obj_t * lv_app_kb_open(lv_obj_t * ta, lv_app_kb_mode_t mode, void (*close)(lv_obj_t *), void (*ok)(lv_obj_t *));

/**
 * Close the keyboard
 * @param ok true: call the ok function, false: call the close function
 */
void lv_app_kb_close(bool ok);

/**********************
 *      MACROS
 **********************/
#endif /*LV_APP_ENABLE != 0*/

#endif /*LV_APP_KB_H*/
