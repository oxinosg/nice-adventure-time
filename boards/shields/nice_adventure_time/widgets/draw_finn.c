#include <stdlib.h>
#include <zephyr/kernel.h>
#include "draw_finn.h"

LV_IMG_DECLARE(finn);

void draw_finn(lv_obj_t *canvas, const struct status_state *state) {
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &finn);

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}

