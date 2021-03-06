/*
 *	Copyright (C) 2007-2009 Gabest
 *	http://www.gabest.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#pragma once

class CRC
{
public:
	enum Title
	{
		NoTitle,
		AceCombatZero,
		AceCombat4,
		AceCombat5,
		ApeEscape2,
		ArTonelico2,
		Barnyard,
		BigMuthaTruckers,
		BlackHawkDown,
		BleachBladeBattlers,
		BrianLaraInternationalCricket,
		Bully,
		BurnoutDominator,
		BurnoutRevenge,
		BurnoutTakedown,
		CastlevaniaCoD,
		CastlevaniaLoI,
		Clannad,
		CrashBandicootWoC,
		CrashNburn,
		DarkCloud,
		DBZBT2,
		DBZBT3,
		DeathByDegreesTekkenNinaWilliams,
		DemonStone,
		DestroyAllHumans,
		DestroyAllHumans2,
		DevilMayCry3,
		DuelSaviorDestiny,
		EternalPoison,
		EvangelionJo,
		FFX,
		FFX2,
		FFXII,
		FIFA03,
		FIFA04,
		FIFA05,
		FightingBeautyWulong,
		Genji,
		GetaWay,
		GetaWayBlackMonday,
		GiTS,
		GodHand,
		GodOfWar,
		GodOfWar2,
		Grandia3,
		GT3,
		GT4,
		GTASanAndreas,
		GTConcept,
		HarleyDavidson,
		HarryPotterATCOS,
		HarryPotterATHBP,
		HarryPotterATPOA,
		HarryPotterOOTP,
		HauntingGround,
		ICO,
		IkkiTousen,
		ItadakiStreet,
		JackieChanAdv,
		Jak1,
		Jak2,
		Jak3,
		JakX,
		KazokuKeikakuKokoroNoKizuna,
		KnightsOfTheTemple2,
		Kunoichi,
		KyuuketsuKitanMoonties,
		Lamune,
		LegacyOfKainDefiance,
		LegoBatman,
		LordOfTheRingsThirdAge,
		MajokkoALaMode2,
		Manhunt2,
		MetalGearSolid3,
		MetalSlug6,
		MidnightClub3,
		NanoBreaker,
		NarutimateAccel,
		Naruto,
		NicktoonsUnite,
		Okami,
		Oneechanbara2Special,
		OnePieceGrandAdventure,
		OnePieceGrandBattle,
		Onimusha3,
		PiaCarroteYoukosoGPGakuenPrincess,
		Quake3Revolution,
		RadiataStories,
		RatchetAndClank,
		RatchetAndClank2,
		RatchetAndClank3,
		RatchetAndClank4,
		RatchetAndClank5,
		RedDeadRevolver,
		ResidentEvil4,
		RickyPontingInternationalCricket,
		RozenMaidenGebetGarden,
		SacredBlaze,
		SakuraTaisen,
		SakuraWarsSoLongMyLove,
		SFEX3,
		ShadowHearts,
		ShadowofRome,
		ShinOnimusha,
		Shox,
		Simple2000Vol114,
		SimpsonsGame,
		SkyGunner,
		Sly2,
		Sly3,
		SMTDDS1,
		SMTDDS2,
		SMTNocturne,
		SonicUnleashed,
		SoTC,
		SoulReaver2,
		Spartan,
		StarOcean3,
		StarWarsForceUnleashed,
		SteambotChronicles,
		SuperManReturns,
		SVCChaos,
		TalesOfAbyss,
		TalesOfLegendia,
		TalesofSymphonia,
		Tekken5,
		TenchuFS,
		TenchuWoH,
		TheIncredibleHulkUD,
		TimeSplitters2,
		TombRaiderAnniversary,
		TombRaiderLegend,
		TombRaiderUnderworld,
		TribesAerialAssault,
		TomoyoAfter,
		TouristTrophy,
		UltramanFightingEvolution,
		UrbanReign,
		ValkyrieProfile2,
		Whiplash,
		WildArms4,
		WildArms5,
		XenosagaE3,
		Yakuza,
		Yakuza2,
		ZettaiZetsumeiToshi2,
		TitleCount,
	};

	enum Region
	{
		NoRegion,
		US,
		EU,
		JP,
		JPUNDUB,
		RU,
		FR,
		DE,
		IT,
		ES,
		CH,
		ASIA,
		KO,
		RegionCount,
	};

	enum Flags
	{
		PointListPalette = 1,
	};

	struct Game
	{
		uint32 crc;
		Title title;
		Region region;
		uint32 flags;
	};

private:
	static Game m_games[];
	static std::map<uint32, Game*> m_map;

public:
	static Game Lookup(uint32 crc);
};
