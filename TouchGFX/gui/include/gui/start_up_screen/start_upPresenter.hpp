#ifndef START_UPPRESENTER_HPP
#define START_UPPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class start_upView;

class start_upPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    start_upPresenter(start_upView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~start_upPresenter() {}

private:
    start_upPresenter();

    start_upView& view;
};

#endif // START_UPPRESENTER_HPP
