#include <kamek.hpp>
#include <MarioKartWii/Race/RaceData.hpp>
#include <Settings/UI/SettingsPanel.hpp>
#include <BKW.hpp>

namespace BKW {
namespace MiscCodes {

//Show Battle Map Icons [CLF78]
kmWrite8(0x8088BFF7, 0x00000001);

//Allow Looking Backwards During Respawn [Ro]
kmWrite32(0x805A228C, 0x60000000);

//Allow looking backwards during the countdown [Gaberboo]
kmWrite32(0x805A225C, 0x38800001);

//Can Always Drift [Supastarrio]
kmWrite32(0x808B5B1C, 0x00000000);

//No Bullet Bill Icon [Anarion]
kmWrite32(0x807BA5D0, 0x60000000);

//Accurate Explosion Damage [MrBean, CLF78]
kmWrite16(0x80572690, 0x00004800);
kmWrite16(0x80569F68, 0x00004800);

//Allow Mega in a Mega [Unnamed]
kmWrite32(0x807BB764, 0x60000000);

//Better Bullet Bill Curve Tightness [davidevgen]
kmWrite32(0x80891FCC, 0x447A0000);

//Faster Points Increase [CLF78]
kmWrite8(0x807F57F7, 1);

//Never Burn Out [JoshuaMK]
//DOESN'T WORK
//kmWrite16(0x80595B18, 0x00004800);

//Allow All Vehicles in Battle Mode [Nameless / Scruffy]
kmWrite32(0x805DE7B4, 0x38000000);
kmWrite32(0x80553F98, 0x3880000A);
kmWrite32(0x8084FEF0, 0x48000044);
kmWrite32(0x80860A90, 0x38600000);

//Show Minimap Topography [Mu1hwu]
kmWrite8(0x80389060, 0);

//Disable Low Battery Notification [Diamond]
kmWrite16(0x805C379A, 0xFFFF);

//Remove Mushroom Bug [Vega]
kmWrite8(0x807BA077, 0);

//Disable Data Save Reset For Region ID Change [Vega]
kmWrite32(0x80544928, 0x7C601B78);

/*u8 GetMirrorModeTTsSetting() {
	return Pulsar::Settings::Mgr::GetSettingValue(static_cast<Pulsar::Settings::Type>(SETTINGSTYPE_BKW), SETTINGBKW_RADIO_MIRRORTTS);
}*/

//Mirror Mode TTs
/*static void MirrorModeTTs() {
	//u8 mirror = Pulsar::Settings::Mgr::GetSettingValue(static_cast<Pulsar::Settings::Type>(SETTINGSTYPE_BKW), SETTINGBKW_RADIO_MIRRORTTS);
	
	//const GameMode gameMode = RaceData::sInstance->racesScenario.settings.gamemode;
	//const GameMode menuGameMode = RaceData::sInstance->menusScenario.settings.gamemode;
	//const bool isTTs = gameMode == MODE_TIME_TRIAL || menuGameMode == MODE_TIME_TRIAL;
	//if (isTTs) {
	//	RaceData::sInstance->racesScenario.settings.modeFlags = 1;
	//}
	
	u8 val = GetMirrorModeTTsSetting();
	asm("cmpwi r24,2\n\t"
		"bne end\n\t"
		"li r7, %[val]\n\t"
		"end:\n\t"
		"stw r7,0xb90(r31)" : : [val] "r" (val));
	
}
kmCall(0x8053056C, MirrorModeTTs);*/

} // namespace MiscCodes
} // namespace BKW