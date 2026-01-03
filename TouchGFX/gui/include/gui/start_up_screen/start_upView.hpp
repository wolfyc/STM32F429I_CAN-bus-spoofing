#ifndef START_UPVIEW_HPP
#define START_UPVIEW_HPP

#include <gui_generated/start_up_screen/start_upViewBase.hpp>
#include <gui/start_up_screen/start_upPresenter.hpp>

class start_upView : public start_upViewBase
{
public:
    start_upView();
    virtual ~start_upView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // START_UPVIEW_HPP
