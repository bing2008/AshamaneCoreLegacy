/*
 * Copyright (C) 2017-2018 AshamaneProject <https://github.com/AshamaneProject>
 * Copyright (C) 2008-2017 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:

// Zones
void AddSC_azsuna();
void AddSC_highmountain();
void AddSC_stormheim();
void AddSC_suramar();
void AddSC_valsharah();

// Demon Hunter start zone
void AddSC_mardum();

// Class Halls
void AddSC_class_hall_dh();
void AddSC_class_hall_dk();
void AddSC_class_hall_druid();
void AddSC_class_hall_hunter();
void AddSC_class_hall_mage();
void AddSC_class_hall_monk();
void AddSC_class_hall_paladin();
void AddSC_class_hall_priest();
void AddSC_class_hall_rogue();
void AddSC_class_hall_shaman();
void AddSC_class_hall_warlock();
void AddSC_class_hall_warrior();

// WorldBoss
void AddSC_boss_nitthogg();
void AddSC_boss_ana_mouz();
void AddSC_boss_calamir();
void AddSC_boss_drugon_the_frostblood();
void AddSC_boss_flotsam();
void AddSC_boss_humongris();
void AddSC_boss_levantus();
void AddSC_boss_nazak_the_fiend();
void AddSC_boss_sharthos();
void AddSC_boss_the_soultakers();
void AddSC_boss_withered_jim();

// Black Rook Hold
//void AddSC_instance_black_rook_hold();
//void AddSC_black_rook_hold();
//void AddSC_boss_amalgam_of_souls();
//void AddSC_boss_illysanna_ravencrest();
//void AddSC_boss_smashspite_the_hateful();
//void AddSC_boss_lord_kurtalos_ravencrest();

// Darkheart Thicket
void AddSC_instance_darkheart_thicket();
void AddSC_darkheart_thicket();
void AddSC_boss_archdruid_glaidalis();
void AddSC_boss_oakheart();
void AddSC_boss_dresaron();
void AddSC_boss_shade_of_xavius();

// Eye of Azshara
//void AddSC_instance_eye_of_azshara();
//void AddSC_eye_of_azshara();
//void AddSC_boss_warlord_parjesh();
//void AddSC_boss_lady_hatecoil();
//void AddSC_boss_serpentrix();
//void AddSC_boss_king_deepbeard();
//void AddSC_boss_wrath_of_azshara();

// Halls of Valor
//void AddSC_instance_halls_of_valor();
//void AddSC_halls_of_valor();
//void AddSC_boss_hymdall();
//void AddSC_boss_hyrja();
//void AddSC_boss_fenryr();
//void AddSC_boss_godking_skovald();
//void AddSC_boss_odyn();

// Maw of Souls
void AddSC_instance_maw_of_souls();
void AddSC_boss_ymiron_maw();
void AddSC_boss_harbaron_maw();
void AddSC_boss_helya_maw();

// Neltharion's Lair
//void AddSC_instance_neltharions_lair();
//void AddSC_neltharions_lair();
//void AddSC_boss_rokmora();
//void AddSC_boss_ularogg_cragshaper();
//void AddSC_boss_naraxas();
//void AddSC_boss_dargrul_the_underking();

// Vault of the Wardens
//void AddSC_instance_vault_of_the_wardens();
//void AddSC_vault_of_the_wardens();
//void AddSC_boss_tirathon_saltheril();
//void AddSC_boss_inquisitor_tormentorum();
//void AddSC_boss_glazer();
//void AddSC_boss_ashgolm();
//void AddSC_boss_cordana_felsong();

// Violet Hold
//void AddSC_instance_violet_hold_legion();
//void AddSC_violet_hold_legion();
//void AddSC_boss_anubesset();
//void AddSC_boss_bloodprincess_thalena();
//void AddSC_boss_festerface();
//void AddSC_boss_millificent_manastorm();
//void AddSC_boss_mindflayer_kaahrj();
//void AddSC_boss_shivermaw();
//void AddSC_boss_saelorn();
//void AddSC_boss_fel_lord_betrug();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddBrokenIslesScripts()
{
    // Zones
    AddSC_azsuna();
    AddSC_highmountain();
    AddSC_stormheim();
    AddSC_suramar();
    AddSC_valsharah();

    // Demon Hunter start zone
    AddSC_mardum();

    // Class Halls
    AddSC_class_hall_dh();
    AddSC_class_hall_dk();
    AddSC_class_hall_druid();
    AddSC_class_hall_hunter();
    AddSC_class_hall_mage();
    AddSC_class_hall_monk();
    AddSC_class_hall_paladin();
    AddSC_class_hall_priest();
    AddSC_class_hall_rogue();
    AddSC_class_hall_shaman();
    AddSC_class_hall_warlock();
    AddSC_class_hall_warrior();

    // WorldBoss
    AddSC_boss_ana_mouz();
    AddSC_boss_calamir();
    AddSC_boss_drugon_the_frostblood();
    AddSC_boss_flotsam();
    AddSC_boss_humongris();
    AddSC_boss_levantus();
    AddSC_boss_nazak_the_fiend();
    AddSC_boss_nitthogg();
    AddSC_boss_sharthos();
    AddSC_boss_the_soultakers();
    AddSC_boss_withered_jim();

    // Black Rook Hold
    //AddSC_instance_black_rook_hold();
    //AddSC_black_rook_hold();
    //AddSC_boss_amalgam_of_souls();
    //AddSC_boss_illysanna_ravencrest();
    //AddSC_boss_smashspite_the_hateful();
    //AddSC_boss_lord_kurtalos_ravencrest();

    // Darkheart Thicket
    AddSC_instance_darkheart_thicket();
    AddSC_darkheart_thicket();
    AddSC_boss_archdruid_glaidalis();
    AddSC_boss_oakheart();
    AddSC_boss_dresaron();
    AddSC_boss_shade_of_xavius();

    // Eye of Azshara
    //AddSC_instance_eye_of_azshara();
    //AddSC_eye_of_azshara();
    //AddSC_boss_warlord_parjesh();
    //AddSC_boss_lady_hatecoil();
    //AddSC_boss_serpentrix();
    //AddSC_boss_king_deepbeard();
    //AddSC_boss_wrath_of_azshara();

    // Halls of Valor
    //AddSC_instance_halls_of_valor();
    //AddSC_halls_of_valor();
    //AddSC_boss_hymdall();
    //AddSC_boss_hyrja();
    //AddSC_boss_fenryr();
    //AddSC_boss_godking_skovald();
    //AddSC_boss_odyn();

    // Maw of Souls
    AddSC_instance_maw_of_souls();
    AddSC_boss_ymiron_maw();
    AddSC_boss_harbaron_maw();
    AddSC_boss_helya_maw();

    // Neltharion's Lair
    //AddSC_instance_neltharions_lair();
    //AddSC_neltharions_lair();
    //AddSC_boss_rokmora();
    //AddSC_boss_ularogg_cragshaper();
    //AddSC_boss_naraxas();
    //AddSC_boss_dargrul_the_underking();

    // Vault of the Wardens
    //AddSC_instance_vault_of_the_wardens();
    //AddSC_vault_of_the_wardens();
    //AddSC_boss_tirathon_saltheril();
    //AddSC_boss_inquisitor_tormentorum();
    //AddSC_boss_glazer();
    //AddSC_boss_ashgolm();
    //AddSC_boss_cordana_felsong();

    // Violet Hold
    //AddSC_instance_violet_hold_legion();
    //AddSC_violet_hold_legion();
    //AddSC_boss_anubesset();
    //AddSC_boss_bloodprincess_thalena();
    //AddSC_boss_festerface();
    //AddSC_boss_millificent_manastorm();
    //AddSC_boss_mindflayer_kaahrj();
    //AddSC_boss_shivermaw();
    //AddSC_boss_saelorn();
    //AddSC_boss_fel_lord_betrug();
}