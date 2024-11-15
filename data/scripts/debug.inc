Debug_ShowFieldMessageStringVar4::
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_CheatStart::
	lockall
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
	clearflag FLAG_DEFEATED_STINGWELL
	clearflag FLAG_DEFEATED_TROJOLIN
	closemessage
	release
	end
