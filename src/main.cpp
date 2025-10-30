#include "bn_core.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_items_box_4.h"
#include "bn_sprite_items_box_6.h"
#include "bn_sprite_items_plate_r.h"
#include "bn_sprite_items_plate_o.h"
#include "bn_sprite_items_plate_y.h"
#include "bn_sprite_items_plate_g.h"
#include "bn_sprite_items_plate_b.h"
#include "bn_sprite_items_plate_v.h"
#include "bn_sprite_items_clear_box.h"
#include "bn_sprite_items_player_up.h"
#include "bn_sprite_items_player_down.h"

int main()
{
    bn::core::init();
    bn::sprite_ptr box1_sprite = bn::sprite_items::box_4.create_sprite(0,0);
    bn::sprite_ptr box2_sprite = bn::sprite_items::box_6.create_sprite(16,0);
    bn::sprite_ptr plate1_sprite = bn::sprite_items::plate_b.create_sprite(0,-12);
    bn::sprite_ptr plate2_sprite = bn::sprite_items::plate_v.create_sprite(0,-4);
    bn::sprite_ptr plate3_sprite = bn::sprite_items::plate_y.create_sprite(0,4);
    bn::sprite_ptr plate4_sprite = bn::sprite_items::plate_g.create_sprite(0,12);
    bn::sprite_ptr plate5_sprite = bn::sprite_items::plate_r.create_sprite(0,-36);
    bn::sprite_ptr plate6_sprite = bn::sprite_items::plate_o.create_sprite(0,-44);
    bn::sprite_ptr clear_sprite = bn::sprite_items::clear_box.create_sprite(-32,12);
    bn::sprite_ptr up_sprite = bn::sprite_items::player_up.create_sprite(0,-24);
    bn::sprite_ptr down_sprite = bn::sprite_items::player_down.create_sprite(16,-32);   

    while(true)
    {
        bn::core::update();
    }
}
