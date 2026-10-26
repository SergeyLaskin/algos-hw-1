#include "menu_items.hpp"
#include "menu_functions.hpp"


namespace {
const MenuItem* const art_children[] = {
    &BACK_ART, &NAME1, &NAME2, &NAME3
};
const int art_size = sizeof(art_children) / sizeof(art_children[0]);


const MenuItem* const mus_children[] = {
    &BACK_MUS, &NOTHING1
};
const int mus_size = sizeof(mus_children) / sizeof(mus_children[0]);


const MenuItem* const study_children[] = {
    &BACK_STUDY, &ART, &MUS
};
const int study_size = sizeof(study_children) / sizeof(study_children[0]);


const MenuItem* const main_children[] = {
    &EXIT, &STUDY
};
const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}


const MenuItem NAME1 = {"1 - Андрей Иванов сын Рублёв", name1, &ART};
const MenuItem NAME2 = {"2 - Василий Дмитриевич Поленов", name2, &ART};
const MenuItem NAME3 = {"3 - Иван Константинович Айвазовский", name3, &ART};
const MenuItem BACK_ART = {"0 - Назад", go_back, &ART};

const MenuItem NOTHING1 = {"Здесь пока ничего нет", nothing1, &MUS};
const MenuItem BACK_MUS = {"0 - Назад", go_back, &MUS};

const MenuItem ART = {"1 - Русские художники", show_menu, &STUDY, art_children, art_size};
const MenuItem MUS = {"2 - Русские Музыканты", show_menu, &STUDY, mus_children, mus_size};

const MenuItem BACK_STUDY = {"0 - В главное меню", go_back, &STUDY};

const MenuItem STUDY = {"1 - Искусство России", show_menu, &MAIN, study_children, study_size};
const MenuItem EXIT = {"0 - Выход", exit_menu, &MAIN};
const MenuItem MAIN = {nullptr, show_menu, nullptr, main_children, main_size};