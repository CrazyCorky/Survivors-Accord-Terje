modded class CraftFishingRod
{
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return super.CanDo(ingredients, player);
	}
	
	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		super.Do(ingredients, player, results, specialty_weight);
		if (g_Game.IsDedicatedServer() && player && player.IsAlive() && player.GetTerjeSkills())
		{
			player.GetTerjeSkills().AddSkillExperience("fish", 10);
		}
	}
}

modded class CraftFishNetTrap
{
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return super.CanDo(ingredients, player);
	}
	
	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		super.Do(ingredients, player, results, specialty_weight);
		if (g_Game.IsDedicatedServer() && player && player.IsAlive() && player.GetTerjeSkills())
		{
			player.GetTerjeSkills().AddSkillExperience("fish", 10);
		}
	}
}

modded class CraftBoneHook
{
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return super.CanDo(ingredients, player);
	}
	
	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		super.Do(ingredients, player, results, specialty_weight);
		if (g_Game.IsDedicatedServer() && player && player.IsAlive() && player.GetTerjeSkills())
		{
			player.GetTerjeSkills().AddSkillExperience("fish", 3);
		}
	}
}

modded class CraftWoodenHook
{
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return super.CanDo(ingredients, player);
	}
	
	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		super.Do(ingredients, player, results, specialty_weight);
		if (g_Game.IsDedicatedServer() && player && player.IsAlive() && player.GetTerjeSkills())
		{
			player.GetTerjeSkills().AddSkillExperience("fish", 3);
		}
	}
}