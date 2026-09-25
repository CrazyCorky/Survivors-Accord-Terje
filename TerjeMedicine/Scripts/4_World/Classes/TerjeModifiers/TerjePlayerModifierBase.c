modded class TerjePlayerModifierBase
{
	override float GetPlayerImmunity(PlayerBase player)
	{
		if (player.GetTerjeSkills())
		{
			float immunityMod;
			if (player.GetTerjeSkills().GetSkillModifierValue("immunity", "resdiseasesmod", immunityMod))
			{
				return Math.Clamp(immunityMod, 0, 1);
			}
		}
		
		return player.GetTerjeStats().GetInternalImmunity();
	}
}