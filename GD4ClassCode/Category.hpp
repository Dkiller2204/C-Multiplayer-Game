#ifndef BOOK_CATEGORY_HPP
#define BOOK_CATEGORY_HPP


// Entity/scene node category, used to dispatch commands
namespace Category
{
	enum Type
	{
		None				= 0,
		SceneAirLayer		= 1 << 0,
		PlayerCharacter		= 1 << 1,
		AlliedCharacter		= 1 << 2,
		EnemyCharacter		= 1 << 3,
		Pickup              = 1 << 4,
		AlliedProjectile    = 1 << 5, 
		EnemyProjectile     = 1 << 6,
		ParticleSystem		= 1 << 7,
		SoundEffect			= 1 << 8,
		Network				= 1 << 9,
		Platform			= 1 << 10,

		Character = PlayerCharacter | AlliedCharacter | EnemyCharacter,
		Projectile = AlliedProjectile | EnemyProjectile,
	};
}

#endif // BOOK_CATEGORY_HPP
