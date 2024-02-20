/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_prg.h
*/
#ifndef  _MY_RPG_
    #define _MY_RPG_
    #include "my.h"
    #include "printf.h"
    #include "sprintf.h"
    #include "csfml.h"
    #include <time.h>

    typedef struct elements {
        sfRenderWindow *win;
        sfEvent event;
        sfSprite *logo_menu;
        sfSprite *img_logo;
        sfText *play;
        sfText *replay;
        sfText *settings;
        sfText *quit;
        sfText *credit;
        sfText *fullscreen;
        sfText *screen;
        sfText *red_screen;
        sfText *return_screen;
        sfText *red_return_screen;
        short is_screen;
        sfText *red_fullscreen;
        sfText *red_window;
        sfSound *sound_button;
        sfVector2f pos_pp;
        sfVector2f pos2_pp;

        sfText *txt_skills;
        sfText *red_txt_skills;

        sfSprite *weapon_sword;
        sfSprite *weapon_popo;
        short is_skills;
        sfText *title_strlenght;
        sfText *title_life;
        sfRectangleShape *rect_strengh;
        sfRectangleShape *rect_life;
        sfText *return_skills;
        sfText *red_return_skills;

        int moove;

        sfText *winodw;
        sfSprite *wallpaper;

        short old_status;
        short status;
        short status_game;

        short state[7];
        short stateXp[7];

        sfText *red_play;
        sfText *red_replay;
        sfText *red_settings;
        sfText *red_quit;
        sfText *red_credit;

        sfText *cont_credit;
        sfText *quit_credit;
        sfText *red_quit_credit;
        short is_quit_credit;

        sfText *retour_settings;
        sfText *grand;
        sfText *txt_music;
        sfText *plus;
        sfText *minus;
        sfText *petit;

        sfText *red_retour_settings;
        sfText *red_grand;
        sfText *red_txt_music;
        sfText *red_plus;
        sfText *red_minus;
        sfText *red_petit;
        sfText *retour_credit;
        sfText *red_routour_credit;

        sfText *mess_dead;
        sfText *check;
        sfText *quit_dead;
        sfSprite *maps;

        short rect_pp;
        sfRectangleShape *rect_bwn_pp;

        sfVector2i mouse;
        short is_in_settings;
        short is_in_menu;
        short is_1366;
        short is_1920;
        short is_credit;

        char *char_satus_life;
        int int_status_life;
        char *char_max;
        int int_max;
        sfText *life_statue;
        sfSprite *hp30;
        sfSprite *hp31;
        sfSprite *hp32;
        sfSprite *hp33;
        sfSprite *hp34;
        sfSprite *hp35;
        int life_max;
        short strenght;

        char *char_satus_xp;
        int int_status_xp;
        int true_status_xp;
        char *char_maxXP;
        int int_maxXP;
        sfText *xp_statue;
        sfSprite *xp30;
        sfSprite *xp31;
        sfSprite *xp32;
        sfSprite *xp33;
        short skill_ptn;

        short nb_quest;
        char *a;
        float pitch_music;
        sfMusic *music;

        sfSprite *box;
        sfText *txt_box;
        sfText *who_txt;

        short is_attack;

        struct inventary *inv;
        short inv_is_active;
        short display_inventary;
        sfSprite *epee;
        short status_epee;
        short is_eneny[10];
        int life_enemy[10];

        sfView *view;
    } elements;

    typedef struct inventary {
        sfRectangleShape *rect;
        short is_occuped;
        struct inventary *next;
    } inventary;

    typedef void (*func_ptr)(elements *e);

    void destroy_text(elements *e);
    void destroy_all(elements *e);
    void free_linked_list(elements *e);
    void create_text_settings_red(elements *e);
    void create_text_settings(elements *e);
    void main_loop(void);
    void draw_menu(elements *e);
    void draw_settings_2(elements *e);
    void draw_settings(elements *e);
    void do_skills_points(elements *e);
    void init_dead_and_sprites(elements *e);
    void draw_bow(elements *e);
    void attack_demon(elements *e, int nb);
    void draw_intro(elements *e);
    void moove_pp(elements *e);
    void create_all_text_manu(elements *e);
    void create_all_text_survol(elements *e);
    void add_life(elements *e);
    void init_enemy(elements *e, sfVector2f pos, int nb);
    void down_life(elements *e);
    void draw_message_begin(elements *e);
    void draw_into(elements *e);
    void draw_life(elements *e);
    void click_dead_button(elements *e);
    void draw_dead(elements *e);
    void draw_game(elements *e);
    void click_game(elements *e);
    void draw_credit(elements *e);
    void click_credits(elements *e);
    void menu_is_click(elements *e);
    void init_inventary(elements *e);
    void draw_inventary(elements *e);
    void click_menu_settings(elements *e);
    void set_enemy(elements *e);
    void improve_strength(elements *e);
    void improve_life(elements *e);
    void create_screen_settings_red(elements *e);
    void draw_pp(elements *e);
    void display_settings(elements *e);
    void music_settings(elements *e);
    void bloc_settings(elements *e);
    void draw_menu2(elements *e);
    void create_screen_settings_white(elements *e);
    void initialisation2(elements *e);
    void init_life(elements *e);
    void move_up(elements *e);
    void move_down(elements *e);
    void move_left(elements *e);
    void move_right(elements *e);
    void add_rect_ender_pp(elements *e);
    void draw_rect_ender_pp(elements *e);
    void put_items_in_case(elements *e, sfSprite *sprite);
    void draw_in_map(elements *e);
    void move_pnj(elements *e);
    void attack(elements *e);
    void chose_warpon(elements *e);
    void draw_quest(elements *e);
    void index_quest(elements *e);
    void draw_items(elements *e, sfSprite *sprite);
    void walk_items(elements *e);
    void display_pnj(elements *e, int box);
    void move_pnj_down(elements *e);
    void move_pnj_up(elements *e);
    void init_xp(elements *e);
    void down_xp(elements *e);
    void add_xp(elements *e);
    void draw_xp(elements *e);
    void draw_screen_settings(elements *e);
    void init_skills_settings(elements *e);
    void draw_skills_settings(elements *e);
    void init_rectangle(elements *e);
    void display_menu_skills(elements *e);

    int is_survol_sprite(elements *e, sfSprite *sprite);
    int is_click_sprite(elements *e, sfSprite *sprite);
    int is_click_rect(elements *e, sfRectangleShape *rect);
    int is_survol_text(elements *e, sfText *text);
    int is_click_text(elements *e, sfText *text);

    char *which_tilesheet(elements *e);

    inventary *create_node(inventary *inv, sfVector2f pos);
    elements *initialisation(void);
    void display_str(elements *e, char *str, char *who);
    func_ptr* init_event_draw(void);
    func_ptr* init_event_ptr(void);

#endif /*_MY_RPG_*/
