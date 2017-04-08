#ifndef OE_RENDERABLECOMPONENT_HPP
#define OE_RENDERABLECOMPONENT_HPP

#include "SceneComponent.hpp"

#include <SFML/Graphics/RenderTarget.hpp>

namespace oe
{

class RenderSystem;
class RenderableComponent : public SceneComponent
{
	public:
		RenderableComponent(Entity* entity);
		virtual ~RenderableComponent();
		
		virtual void render(sf::RenderTarget& target);

		const sf::FloatRect& getLocalAABB() const;
		const sf::FloatRect& getGlobalAABB() const;

		bool isVisible() const;
		void setVisible(bool visible);

		RenderSystem& getRenderSystem();

	protected:
		sf::FloatRect mLocalAABB;
		mutable sf::FloatRect mGlobalAABB;
		mutable bool mGlobalAABBUpdated;
		bool mVisible;
};

} // namespace oe

#endif // OE_RENDERABLECOMPONENT_HPP
