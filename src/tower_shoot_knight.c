/*
** EPITECH PROJECT, 2019
** tower_shoot_knight.c
** File description:
** tower_shoot_knight.
*/

#include "../include/my_struct.h"
#include "../include/my_src.h"

void canon_tower_shoot_knight(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int i = 1; i < all->twr->nbr_canon_twr; i++) {
        pos = sfSprite_getPosition(all->enm->sprite_k[1]);
        if (pos.x > all->twr->v_canon_tower[i].x - 150 &&
            pos.x < all->twr->v_canon_tower[i].x + 150 &&
            pos.y > all->twr->v_canon_tower[i].y - 150 &&
            pos.y < all->twr->v_canon_tower[i].y + 200) {
            if (all->enm->seconds[16] > 2) {
                all->enm->life[3] = all->enm->life[3] - 1;
                sfClock_restart(all->enm->clock[16]);
            }
        }
    }
    fire_tower_shoot_knight(all, window);
}

void fire_tower_shoot_knight(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int i = 1; i < all->twr->nbr_fire_twr; i++) {
        pos = sfSprite_getPosition(all->enm->sprite_k[1]);
        if (pos.x > all->twr->v_fire_tower[i].x - 150 &&
            pos.x < all->twr->v_fire_tower[i].x + 150 &&
            pos.y > all->twr->v_fire_tower[i].y - 150 &&
            pos.y < all->twr->v_fire_tower[i].y + 200) {
            if (all->enm->seconds[16] > 2) {
                all->enm->life[3] = all->enm->life[3] - 2;
                sfClock_restart(all->enm->clock[16]);
            }
        }
    }
    ice_tower_shoot_knight(all, window);
}

void ice_tower_shoot_knight(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int i = 1; i < all->twr->nbr_ice_twr; i++) {
        pos = sfSprite_getPosition(all->enm->sprite_k[1]);
        if (pos.x > all->twr->v_ice_tower[i].x - 150 &&
            pos.x < all->twr->v_ice_tower[i].x + 150 &&
            pos.y > all->twr->v_ice_tower[i].y - 150 &&
            pos.y < all->twr->v_ice_tower[i].y + 200) {
            if (all->enm->seconds[16] > 2) {
                all->enm->life[3] = all->enm->life[3] - 3;
                sfClock_restart(all->enm->clock[16]);
            }
        }
    }
    thunder_tower_shoot_knight(all, window);
}

void thunder_tower_shoot_knight(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int i = 1; i < all->twr->nbr_thunder_twr; i++) {
        pos = sfSprite_getPosition(all->enm->sprite_k[1]);
        if (pos.x > all->twr->v_thunder_tower[i].x - 150 &&
            pos.x < all->twr->v_thunder_tower[i].x + 150 &&
            pos.y > all->twr->v_thunder_tower[i].y - 150 &&
            pos.y < all->twr->v_thunder_tower[i].y + 200) {
            if (all->enm->seconds[16] > 2) {
                all->enm->life[3] = all->enm->life[3] - 4;
                sfClock_restart(all->enm->clock[16]);
            }
        }
    }
}
