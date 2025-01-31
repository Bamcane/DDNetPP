/* network.h scoped ddnet++ methods */
#include <base/hash_ctxt.h>
#include <base/system.h>

#include <engine/console.h>

#include "config.h"
#include "netban.h"
#include "network.h"
#include <engine/message.h>
#include <engine/shared/protocol.h>
#include <game/generated/protocol.h>

void CNetServer::BotInit(int BotID)
{
	m_aSlots[BotID].m_Connection.BotConnect();
}

void CNetServer::BotDelete(int BotID)
{
	m_aSlots[BotID].m_Connection.BotDrop();
}

void CNetConnection::BotConnect()
{
	m_State = NET_CONNSTATE_BOT;
}

void CNetConnection::BotDrop()
{
	m_State = NET_CONNSTATE_OFFLINE;
}
