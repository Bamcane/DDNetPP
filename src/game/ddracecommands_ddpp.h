// DDNet++

// This file can be included several times.

#ifndef CONSOLE_COMMAND
#define CONSOLE_COMMAND(name, params, flags, callback, userdata, help)
#endif

CONSOLE_COMMAND("hammer", "", CFGFLAG_SERVER, ConHammer, this, "Gives a hammer to you") //added by ChillerDragon and not as a cheat... because a hammer comon xd

// cosmetics
CONSOLE_COMMAND("OldRainbow", "v", CFGFLAG_SERVER, ConOldRainbow, this, "(old) activates rainbow until death")
CONSOLE_COMMAND("InfRainbow", "v", CFGFLAG_SERVER, ConInfRainbow, this, "activates rainbow until disconnect")
CONSOLE_COMMAND("OldBloody", "v", CFGFLAG_SERVER, ConOldBloody, this, "(old) activates bloody until death")
CONSOLE_COMMAND("InfBloody", "v", CFGFLAG_SERVER, ConInfBloody, this, "activates bloody until disconnect")
CONSOLE_COMMAND("OldAtom", "v", CFGFLAG_SERVER, ConOldAtom, this, "(old) activates atom until death")
CONSOLE_COMMAND("InfAtom", "v", CFGFLAG_SERVER, ConInfAtom, this, "activates atom until disconnect")
CONSOLE_COMMAND("OldAutoSpreadGun", "v", CFGFLAG_SERVER, ConOldAutoSpreadGun, this, "activates spread gun until death")
CONSOLE_COMMAND("InfAutoSpreadGun", "v", CFGFLAG_SERVER, ConInfAutoSpreadGun, this, "activates spread gun until disconnect")
CONSOLE_COMMAND("OldTrail", "v", CFGFLAG_SERVER, ConOldTrail, this, "(old) activates trail until death")
CONSOLE_COMMAND("InfTrail", "v", CFGFLAG_SERVER, ConInfTrail, this, "activates trail until disconnect")

CONSOLE_COMMAND("HomingMissile", "v", CFGFLAG_SERVER, ConHomingMissile, this, "toggles homing missile activate/deactive (grenade launcher)")

CONSOLE_COMMAND("disarm", "v", CFGFLAG_SERVER, Condisarm, this, "disarm a evil tee to prevent him doing evil stuff :)")
CONSOLE_COMMAND("dummymode", "vi", CFGFLAG_SERVER, Condummymode, this, "0 default, 23 cb5(racer), 29 cb5(blocker), 103 ctf5, 27 blmapchill(policebot), 32 blmapchill(solo policebot)")
CONSOLE_COMMAND("dummy_color", "vi", CFGFLAG_SERVER, ConDummyColor, this, "changes the color of a specific dummy")
CONSOLE_COMMAND("dummy_skin", "vr", CFGFLAG_SERVER, ConDummySkin, this, "changes the skin of a specific dummy")
CONSOLE_COMMAND("force_color", "vi", CFGFLAG_SERVER, ConForceColor, this, "changes the color of a specific player")
CONSOLE_COMMAND("force_skin", "vr", CFGFLAG_SERVER, ConForceSkin, this, "changes the skin of a specific player")
CONSOLE_COMMAND("heal", "v", CFGFLAG_SERVER, Conheal, this, "heals a tee's Health to 10 hp")
CONSOLE_COMMAND("ForceUnJail", "v", CFGFLAG_SERVER, ConForceUnJail, this, "unjails player instantly")
CONSOLE_COMMAND("ForceJail", "vi", CFGFLAG_SERVER, ConForceJail, this, "jails player by adminforce")
CONSOLE_COMMAND("ninjasteam", "v", CFGFLAG_SERVER, Conninjasteam, this, "activates a awesome NINJASTEAM")
CONSOLE_COMMAND("hammerfightmode", "v", CFGFLAG_SERVER, ConHammerfightMode, this, "activates hammerfightmode for a player")
CONSOLE_COMMAND("freezeShotgun", "v", CFGFLAG_SERVER, ConfreezeShotgun, this, "Gives you a freeze Shotgun")
CONSOLE_COMMAND("Damage", "v", CFGFLAG_SERVER, ConDamage, this, "Makes a player vulnerable")

CONSOLE_COMMAND("register_ban", "", CFGFLAG_SERVER, ConRegisterBan, this, "");
CONSOLE_COMMAND("register_ban_id", "vi", CFGFLAG_SERVER, ConRegisterBanID, this, "");
CONSOLE_COMMAND("register_ban_ip", "si", CFGFLAG_SERVER, ConRegisterBanIP, this, "");
CONSOLE_COMMAND("unregister_ban", "v", CFGFLAG_SERVER, ConUnRegisterBan, this, "");
CONSOLE_COMMAND("register_bans", "", CFGFLAG_SERVER, ConRegisterBans, this, "");

CONSOLE_COMMAND("login_ban", "", CFGFLAG_SERVER, ConLoginBan, this, "");
CONSOLE_COMMAND("login_ban_id", "vi", CFGFLAG_SERVER, ConLoginBanID, this, "");
CONSOLE_COMMAND("login_ban_ip", "si", CFGFLAG_SERVER, ConLoginBanIP, this, "");
CONSOLE_COMMAND("unlogin_ban", "v", CFGFLAG_SERVER, ConUnLoginBan, this, "");
CONSOLE_COMMAND("login_bans", "", CFGFLAG_SERVER, ConLoginBans, this, "");

CONSOLE_COMMAND("namechange_mute", "", CFGFLAG_SERVER, ConNameChangeMute, this, "");
CONSOLE_COMMAND("namechange_mute_id", "vi", CFGFLAG_SERVER, ConNameChangeMuteID, this, "");
CONSOLE_COMMAND("namechange_mute_ip", "si", CFGFLAG_SERVER, ConNameChangeMuteIP, this, "");
CONSOLE_COMMAND("namechange_unmute", "v", CFGFLAG_SERVER, ConNameChangeUnmute, this, "");
CONSOLE_COMMAND("namechange_mutes", "", CFGFLAG_SERVER, ConNameChangeMutes, this, "");

CONSOLE_COMMAND("dummies", "", CFGFLAG_SERVER, ConDummies, this, "");

CONSOLE_COMMAND("destroylaser", "v", CFGFLAG_SERVER, ConDestroyLaser, this, "Gives a player Destroy Laser")
CONSOLE_COMMAND("freezelaser", "v", CFGFLAG_SERVER, ConFreezeLaser, this, "Gives a player Freeze Laser")

//SarKro
CONSOLE_COMMAND("unfreeze", "v", CFGFLAG_SERVER, ConUnFreeze, this, "Unfreezes player v")
CONSOLE_COMMAND("freeze", "v?i", CFGFLAG_SERVER, ConFreeze, this, "Freezes player v for i seconds (infinite by default)")

//HACK COMMAND ChillerDragon
//CONSOLE_COMMAND("hack", "vi", CFGFLAG_SERVER, ConHack, this, "dont use this command!")
CONSOLE_COMMAND("godmode", "v", CFGFLAG_SERVER, ConGodmode, this, "gives player i godmode (no damage in instagib)")

CONSOLE_COMMAND("logs", "?s[type]", CFGFLAG_SERVER, ConDDPPLogs, this, "shows ddnet++ logs (types: mastersrv)")

//ddpp sql
CONSOLE_COMMAND("sql_add", "?sss", CFGFLAG_SERVER, ConSQL_ADD, this, "adds an new column to the table")

CONSOLE_COMMAND("activate_shop_item", "?s[item]", CFGFLAG_SERVER, ConActivateShopItem, this, "activate shop item")
CONSOLE_COMMAND("deactivate_shop_item", "?s[item]", CFGFLAG_SERVER, ConDeactivateShopItem, this, "deactivate shop item")

//rcon api commands
CONSOLE_COMMAND("rcon_api_say_id", "vs", CFGFLAG_SERVER, ConRconApiSayID, this, "RCON API command dont use it") //sends a servermessage to player v
//adds the column with the name s and the type i. i=0 INTEGER i=1 VARCHAR(4) i=2 VARCHAR(16) i=3 VARCHAR(32) i=4 VARCHAR(64) i=5 VARCHAR(128)
CONSOLE_COMMAND("rcon_api_alter_table", "i[type]s[column]", CFGFLAG_SERVER, ConRconApiAlterTable, this, "RCON API command dont use it")
