#ifndef mackie_button_handler_h
#define mackie_button_handler_h
/*
	Generated by scripts/generate-button-handlers.erb
*/

#include "types.h"

namespace Mackie
{

class MackieButtonHandler
{
public:
	virtual ~MackieButtonHandler() {}
	
	virtual LedState default_button_press( Button & button );
	virtual LedState default_button_release( Button & button );
	
	virtual void update_led( Button & button, LedState ls ) = 0;
	

	virtual LedState io_press( Button & );
	virtual LedState io_release( Button & );

	virtual LedState sends_press( Button & );
	virtual LedState sends_release( Button & );

	virtual LedState pan_press( Button & );
	virtual LedState pan_release( Button & );

	virtual LedState plugin_press( Button & );
	virtual LedState plugin_release( Button & );

	virtual LedState eq_press( Button & );
	virtual LedState eq_release( Button & );

	virtual LedState dyn_press( Button & );
	virtual LedState dyn_release( Button & );

	virtual LedState left_press( Button & );
	virtual LedState left_release( Button & );

	virtual LedState right_press( Button & );
	virtual LedState right_release( Button & );

	virtual LedState channel_left_press( Button & );
	virtual LedState channel_left_release( Button & );

	virtual LedState channel_right_press( Button & );
	virtual LedState channel_right_release( Button & );

	virtual LedState flip_press( Button & );
	virtual LedState flip_release( Button & );

	virtual LedState edit_press( Button & );
	virtual LedState edit_release( Button & );

	virtual LedState name_value_press( Button & );
	virtual LedState name_value_release( Button & );

	virtual LedState smpte_beats_press( Button & );
	virtual LedState smpte_beats_release( Button & );

	virtual LedState F1_press( Button & );
	virtual LedState F1_release( Button & );

	virtual LedState F2_press( Button & );
	virtual LedState F2_release( Button & );

	virtual LedState F3_press( Button & );
	virtual LedState F3_release( Button & );

	virtual LedState F4_press( Button & );
	virtual LedState F4_release( Button & );

	virtual LedState F5_press( Button & );
	virtual LedState F5_release( Button & );

	virtual LedState F6_press( Button & );
	virtual LedState F6_release( Button & );

	virtual LedState F7_press( Button & );
	virtual LedState F7_release( Button & );

	virtual LedState F8_press( Button & );
	virtual LedState F8_release( Button & );

	virtual LedState F9_press( Button & );
	virtual LedState F9_release( Button & );

	virtual LedState F10_press( Button & );
	virtual LedState F10_release( Button & );

	virtual LedState F11_press( Button & );
	virtual LedState F11_release( Button & );

	virtual LedState F12_press( Button & );
	virtual LedState F12_release( Button & );

	virtual LedState F13_press( Button & );
	virtual LedState F13_release( Button & );

	virtual LedState F14_press( Button & );
	virtual LedState F14_release( Button & );

	virtual LedState F15_press( Button & );
	virtual LedState F15_release( Button & );

	virtual LedState F16_press( Button & );
	virtual LedState F16_release( Button & );

	virtual LedState shift_press( Button & );
	virtual LedState shift_release( Button & );

	virtual LedState option_press( Button & );
	virtual LedState option_release( Button & );

	virtual LedState control_press( Button & );
	virtual LedState control_release( Button & );

	virtual LedState cmd_alt_press( Button & );
	virtual LedState cmd_alt_release( Button & );

	virtual LedState on_press( Button & );
	virtual LedState on_release( Button & );

	virtual LedState rec_ready_press( Button & );
	virtual LedState rec_ready_release( Button & );

	virtual LedState undo_press( Button & );
	virtual LedState undo_release( Button & );

	virtual LedState snapshot_press( Button & );
	virtual LedState snapshot_release( Button & );

	virtual LedState touch_press( Button & );
	virtual LedState touch_release( Button & );

	virtual LedState redo_press( Button & );
	virtual LedState redo_release( Button & );

	virtual LedState marker_press( Button & );
	virtual LedState marker_release( Button & );

	virtual LedState enter_press( Button & );
	virtual LedState enter_release( Button & );

	virtual LedState cancel_press( Button & );
	virtual LedState cancel_release( Button & );

	virtual LedState mixer_press( Button & );
	virtual LedState mixer_release( Button & );

	virtual LedState frm_left_press( Button & );
	virtual LedState frm_left_release( Button & );

	virtual LedState frm_right_press( Button & );
	virtual LedState frm_right_release( Button & );

	virtual LedState loop_press( Button & );
	virtual LedState loop_release( Button & );

	virtual LedState punch_in_press( Button & );
	virtual LedState punch_in_release( Button & );

	virtual LedState punch_out_press( Button & );
	virtual LedState punch_out_release( Button & );

	virtual LedState home_press( Button & );
	virtual LedState home_release( Button & );

	virtual LedState end_press( Button & );
	virtual LedState end_release( Button & );

	virtual LedState rewind_press( Button & );
	virtual LedState rewind_release( Button & );

	virtual LedState ffwd_press( Button & );
	virtual LedState ffwd_release( Button & );

	virtual LedState stop_press( Button & );
	virtual LedState stop_release( Button & );

	virtual LedState play_press( Button & );
	virtual LedState play_release( Button & );

	virtual LedState record_press( Button & );
	virtual LedState record_release( Button & );

	virtual LedState cursor_up_press( Button & );
	virtual LedState cursor_up_release( Button & );

	virtual LedState cursor_down_press( Button & );
	virtual LedState cursor_down_release( Button & );

	virtual LedState cursor_left_press( Button & );
	virtual LedState cursor_left_release( Button & );

	virtual LedState cursor_right_press( Button & );
	virtual LedState cursor_right_release( Button & );

	virtual LedState zoom_press( Button & );
	virtual LedState zoom_release( Button & );

	virtual LedState scrub_press( Button & );
	virtual LedState scrub_release( Button & );

	virtual LedState user_a_press( Button & );
	virtual LedState user_a_release( Button & );

	virtual LedState user_b_press( Button & );
	virtual LedState user_b_release( Button & );

	virtual LedState fader_touch_press( Button & );
	virtual LedState fader_touch_release( Button & );

	virtual LedState clicking_press( Button & );
	virtual LedState clicking_release( Button & );

	virtual LedState global_solo_press( Button & );
	virtual LedState global_solo_release( Button & );

	virtual LedState drop_press( Button & );
	virtual LedState drop_release( Button & );

	virtual LedState save_press( Button & );
	virtual LedState save_release( Button & );
};

}

#endif
