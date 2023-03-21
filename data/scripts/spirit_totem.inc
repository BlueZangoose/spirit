Text_SpiritTotemIntro::
	.string "I am a Spirit Totem.\n"
	.string "I boop your snoot.$"

Text_SpiritTotemChosen::
	.string "You chose me.$"

EventScript_SpiritTotem::
	msgbox Text_SpiritTotemIntro, MSGBOX_SIGN
	waitmessage
	yesnobox 5, 5
	goto_if_eq VAR_RESULT, YES, EventScript_TotemChosen
	end

EventScript_TotemChosen::
	msgbox Text_SpiritTotemChosen, MSGBOX_SIGN
	end
