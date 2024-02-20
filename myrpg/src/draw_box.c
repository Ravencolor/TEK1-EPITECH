/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** draw_box.c
*/

#include "../include/my_rpg.h"

void draw_bow(elements *e)
{
    if (e->status_game == 0) {
        e->a = "Z, Q, S, D pour te deplacer.";
        display_str(e, e->a, "Didacticiel");
    }
    if (e->status_game == 1) {
        e->a = "Mais tu peux aussi utilisser les fleches directionnels.";
        display_str(e, e->a, "Didacticiel");
    }
    if (e->status_game == 2) {
        e->a = "Appuye sur E pour recuperer un objet.";
        display_str(e, e->a, "Didacticiel");
    }
    if (e->status_game == 3) {
        e->a = "Appuye sur ESCAPE pour afficher les parametres \nainsi que les competences";
        display_str(e, e->a, "Didacticiel");
    }
}

void draw_intro(elements *e)
{
    if (e->status_game == 4) {
        e->a = "Pascal c'est retrouver ici, il ne sait pas pourquoi.";
        display_str(e, e->a, "Narrateur");
    }
    if (e->status_game == 5) {
        e->a = "Fouille les horizons pour retrouver qui il est.";
        display_str(e, e->a, "Narrateur");
    }
    if (e->status_game == 6) {
        e->a = "Bonne chance.";
        display_str(e, e->a, "Narrateur");
        e->nb_quest = 0;
    }
    return;
}
