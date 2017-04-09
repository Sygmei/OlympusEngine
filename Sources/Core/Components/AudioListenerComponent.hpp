#ifndef OE_AUDIOLISTENERCOMPONENT_HPP
#define OE_AUDIOLISTENERCOMPONENT_HPP

#include <SFML/Audio/Listener.hpp>

#include "../SceneComponent.hpp"

namespace oe
{

class AudioListenerComponent : public SceneComponent
{
    public:
		AudioListenerComponent(Entity* entity);

		void setGlobalVolume(float volume);
		float getGlobalVolume() const;

		void setDirection(F32 x, F32 y, F32 z);
		void setDirection(const Vector3& dir);
		Vector3 getDirection() const;

		void setUpVector(F32 x, F32 y, F32 z);
		void setUpVector(const Vector3& up);
		Vector3 getUpVector() const;

		virtual void onSpawn();
		virtual void onDestroy();
};

} // namespace oe

#endif // OE_AUDIOLISTENERCOMPONENT_HPP
