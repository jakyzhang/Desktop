//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYAdvertisementModelState-Protocol.h"

@class IMYAdStatisticsAction, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface IMYAdvertisementModel : NSObject <IMYAdvertisementModelState>
{
    _Bool _is_full_screen;
    _Bool _is_disappeared;
    _Bool _is_download;
    _Bool _tag_backpic_on;
    _Bool _closed;
    _Bool _is_follow;
    _Bool _isnotad;
    _Bool _is_share;
    _Bool _is_collect;
    _Bool _is_cool;
    _Bool _show_ping_posted;
    _Bool _click_ping_posted;
    _Bool _load_ping_posted;
    _Bool _icon_click_unfold_ping_posted;
    _Bool _start_ping_posted;
    _Bool _firstQuartile_ping_posted;
    _Bool _midpoint_ping_posted;
    _Bool _thirdQuartile_ping_posted;
    _Bool _complete_ping_posted;
    _Bool _is_mute;
    _Bool _auto_play;
    _Bool _showDownloadIcon;
    _Bool _adIsAdd;
    _Bool _isShowRadius;
    int _image_style;
    int _icon_style;
    unsigned long long _requestState;
    unsigned long long _statisticsState;
    IMYAdStatisticsAction *_statisticsAction;
    NSString *_bannerId;
    long long _positionId;
    NSString *_pid;
    NSString *_pid_type;
    unsigned long long _material_id;
    NSString *_source;
    long long _source_type;
    unsigned long long _stay_seconds;
    NSArray *_images;
    NSDictionary *_pic_max_size;
    NSDictionary *_pic_size;
    NSString *_title;
    NSString *_sub_title;
    NSString *_content;
    long long _priority;
    unsigned long long _ordinal;
    NSNumber *_sub_ordinal;
    NSString *_recommed_icon;
    unsigned long long _tips_position;
    unsigned long long _type;
    NSString *_scheme_uri;
    NSString *_download_scheme_uri;
    long long _attr_id;
    NSString *_attr_text;
    double _price;
    NSString *_share_title;
    NSString *_share_content;
    NSString *_share_icon;
    NSString *_share_picture;
    NSString *_share_url;
    NSString *_screen_name;
    NSString *_avatar;
    NSString *_publisherId;
    NSString *_extraparam;
    NSString *_response;
    NSString *_deeplink;
    long long _has_shut_action;
    NSString *_btn_name;
    NSString *_cancel_btn;
    NSNumber *_opacity;
    unsigned long long _show_times;
    unsigned long long _readCount;
    NSString *_iconpos;
    unsigned long long _expires;
    NSDate *_createDate;
    unsigned long long _login_out_time;
    NSString *_request_time;
    long long _iswake;
    NSDictionary *_float_img;
    long long _trigger_type;
    NSString *_download_url;
    long long _content_type;
    NSString *_mini_img;
    unsigned long long _times_type;
    NSDictionary *_custom;
    NSString *_planid;
    NSString *_video;
    NSString *_video_finish_title;
    NSString *_video_duration;
    NSString *_file_size;
    unsigned long long _padding_type;
    NSDictionary *_rn_param;
    NSDictionary *_live_params;
    NSArray *_dialog_action;
    NSNumber *_record_action;
    long long _record_degree;
    NSDictionary *_animate_config;
    NSDictionary *_animates;
    NSString *_monitor_url;
    NSString *_view_tracking_url;
    NSString *_tag_title;
    NSArray *_show_ping;
    NSArray *_exposure_ratio;
    NSArray *_click_ping;
    NSArray *_load_ping;
    NSArray *_icon_click_unfold_ping;
    NSArray *_start_ping;
    NSArray *_firstQuartile_ping;
    NSArray *_midpoint_ping;
    NSArray *_thirdQuartile_ping;
    NSArray *_complete_ping;
    NSArray *_pause_ping;
    NSArray *_resume_ping;
    NSString *_logo;
    long long _logo_pos;
    double _sdk_timeout;
    NSString *_telephone;
    NSString *_call_down_title;
    NSString *_btn_txt;
    NSString *_lead_title;
    NSArray *_picture_hot_zone;
    NSString *_hotspot_picture;
    long long _red_spot_init;
    NSString *_my_js_adid;
    NSString *_forum_tab_name;
    NSString *_zip_file;
    long long _close_ad_stream;
    struct CGSize _imageSize;
}

+ (id)getPrimaryKey;
+ (void)initialize;
@property(nonatomic) long long close_ad_stream; // @synthesize close_ad_stream=_close_ad_stream;
@property(nonatomic) _Bool isShowRadius; // @synthesize isShowRadius=_isShowRadius;
@property(copy, nonatomic) NSString *zip_file; // @synthesize zip_file=_zip_file;
@property(nonatomic) _Bool adIsAdd; // @synthesize adIsAdd=_adIsAdd;
@property(copy, nonatomic) NSString *forum_tab_name; // @synthesize forum_tab_name=_forum_tab_name;
@property(copy, nonatomic) NSString *my_js_adid; // @synthesize my_js_adid=_my_js_adid;
@property(nonatomic) long long red_spot_init; // @synthesize red_spot_init=_red_spot_init;
@property(copy, nonatomic) NSString *hotspot_picture; // @synthesize hotspot_picture=_hotspot_picture;
@property(copy, nonatomic) NSArray *picture_hot_zone; // @synthesize picture_hot_zone=_picture_hot_zone;
@property(copy, nonatomic) NSString *lead_title; // @synthesize lead_title=_lead_title;
@property(copy, nonatomic) NSString *btn_txt; // @synthesize btn_txt=_btn_txt;
@property(copy, nonatomic) NSString *call_down_title; // @synthesize call_down_title=_call_down_title;
@property(nonatomic) _Bool showDownloadIcon; // @synthesize showDownloadIcon=_showDownloadIcon;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(nonatomic) double sdk_timeout; // @synthesize sdk_timeout=_sdk_timeout;
@property(nonatomic) _Bool auto_play; // @synthesize auto_play=_auto_play;
@property(nonatomic) long long logo_pos; // @synthesize logo_pos=_logo_pos;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(nonatomic) _Bool is_mute; // @synthesize is_mute=_is_mute;
@property(copy, nonatomic) NSArray *resume_ping; // @synthesize resume_ping=_resume_ping;
@property(copy, nonatomic) NSArray *pause_ping; // @synthesize pause_ping=_pause_ping;
@property(nonatomic) _Bool complete_ping_posted; // @synthesize complete_ping_posted=_complete_ping_posted;
@property(copy, nonatomic) NSArray *complete_ping; // @synthesize complete_ping=_complete_ping;
@property(nonatomic) _Bool thirdQuartile_ping_posted; // @synthesize thirdQuartile_ping_posted=_thirdQuartile_ping_posted;
@property(copy, nonatomic) NSArray *thirdQuartile_ping; // @synthesize thirdQuartile_ping=_thirdQuartile_ping;
@property(nonatomic) _Bool midpoint_ping_posted; // @synthesize midpoint_ping_posted=_midpoint_ping_posted;
@property(copy, nonatomic) NSArray *midpoint_ping; // @synthesize midpoint_ping=_midpoint_ping;
@property(nonatomic) _Bool firstQuartile_ping_posted; // @synthesize firstQuartile_ping_posted=_firstQuartile_ping_posted;
@property(copy, nonatomic) NSArray *firstQuartile_ping; // @synthesize firstQuartile_ping=_firstQuartile_ping;
@property(nonatomic) _Bool start_ping_posted; // @synthesize start_ping_posted=_start_ping_posted;
@property(copy, nonatomic) NSArray *start_ping; // @synthesize start_ping=_start_ping;
@property(nonatomic) _Bool icon_click_unfold_ping_posted; // @synthesize icon_click_unfold_ping_posted=_icon_click_unfold_ping_posted;
@property(copy, nonatomic) NSArray *icon_click_unfold_ping; // @synthesize icon_click_unfold_ping=_icon_click_unfold_ping;
@property(nonatomic) _Bool load_ping_posted; // @synthesize load_ping_posted=_load_ping_posted;
@property(copy, nonatomic) NSArray *load_ping; // @synthesize load_ping=_load_ping;
@property(nonatomic) _Bool click_ping_posted; // @synthesize click_ping_posted=_click_ping_posted;
@property(copy, nonatomic) NSArray *click_ping; // @synthesize click_ping=_click_ping;
@property(retain, nonatomic) NSArray *exposure_ratio; // @synthesize exposure_ratio=_exposure_ratio;
@property(nonatomic) _Bool show_ping_posted; // @synthesize show_ping_posted=_show_ping_posted;
@property(copy, nonatomic) NSArray *show_ping; // @synthesize show_ping=_show_ping;
@property(copy, nonatomic) NSString *tag_title; // @synthesize tag_title=_tag_title;
@property(copy, nonatomic) NSString *view_tracking_url; // @synthesize view_tracking_url=_view_tracking_url;
@property(copy, nonatomic) NSString *monitor_url; // @synthesize monitor_url=_monitor_url;
@property(retain, nonatomic) NSDictionary *animates; // @synthesize animates=_animates;
@property(retain, nonatomic) NSDictionary *animate_config; // @synthesize animate_config=_animate_config;
@property(nonatomic) long long record_degree; // @synthesize record_degree=_record_degree;
@property(retain, nonatomic) NSNumber *record_action; // @synthesize record_action=_record_action;
@property(retain, nonatomic) NSArray *dialog_action; // @synthesize dialog_action=_dialog_action;
@property(retain, nonatomic) NSDictionary *live_params; // @synthesize live_params=_live_params;
@property(retain, nonatomic) NSDictionary *rn_param; // @synthesize rn_param=_rn_param;
@property(nonatomic) _Bool is_cool; // @synthesize is_cool=_is_cool;
@property(nonatomic) unsigned long long padding_type; // @synthesize padding_type=_padding_type;
@property(copy, nonatomic) NSString *file_size; // @synthesize file_size=_file_size;
@property(copy, nonatomic) NSString *video_duration; // @synthesize video_duration=_video_duration;
@property(copy, nonatomic) NSString *video_finish_title; // @synthesize video_finish_title=_video_finish_title;
@property(copy, nonatomic) NSString *video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *planid; // @synthesize planid=_planid;
@property(retain, nonatomic) NSDictionary *custom; // @synthesize custom=_custom;
@property(nonatomic) unsigned long long times_type; // @synthesize times_type=_times_type;
@property(copy, nonatomic) NSString *mini_img; // @synthesize mini_img=_mini_img;
@property(nonatomic) long long content_type; // @synthesize content_type=_content_type;
@property(copy, nonatomic) NSString *download_url; // @synthesize download_url=_download_url;
@property(nonatomic) long long trigger_type; // @synthesize trigger_type=_trigger_type;
@property(retain, nonatomic) NSDictionary *float_img; // @synthesize float_img=_float_img;
@property(nonatomic) long long iswake; // @synthesize iswake=_iswake;
@property(copy, nonatomic) NSString *request_time; // @synthesize request_time=_request_time;
@property(nonatomic) unsigned long long login_out_time; // @synthesize login_out_time=_login_out_time;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(nonatomic) unsigned long long expires; // @synthesize expires=_expires;
@property(nonatomic) _Bool is_collect; // @synthesize is_collect=_is_collect;
@property(nonatomic) _Bool is_share; // @synthesize is_share=_is_share;
@property(copy, nonatomic) NSString *iconpos; // @synthesize iconpos=_iconpos;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
@property(nonatomic) unsigned long long show_times; // @synthesize show_times=_show_times;
@property(nonatomic) _Bool isnotad; // @synthesize isnotad=_isnotad;
@property(retain, nonatomic) NSNumber *opacity; // @synthesize opacity=_opacity;
@property(copy, nonatomic) NSString *cancel_btn; // @synthesize cancel_btn=_cancel_btn;
@property(copy, nonatomic) NSString *btn_name; // @synthesize btn_name=_btn_name;
@property(nonatomic) long long has_shut_action; // @synthesize has_shut_action=_has_shut_action;
@property(nonatomic) _Bool is_follow; // @synthesize is_follow=_is_follow;
@property(copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
@property(copy, nonatomic) NSString *response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *extraparam; // @synthesize extraparam=_extraparam;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSString *share_picture; // @synthesize share_picture=_share_picture;
@property(retain, nonatomic) NSString *share_icon; // @synthesize share_icon=_share_icon;
@property(retain, nonatomic) NSString *share_content; // @synthesize share_content=_share_content;
@property(retain, nonatomic) NSString *share_title; // @synthesize share_title=_share_title;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *attr_text; // @synthesize attr_text=_attr_text;
@property(nonatomic) long long attr_id; // @synthesize attr_id=_attr_id;
@property(retain, nonatomic) NSString *download_scheme_uri; // @synthesize download_scheme_uri=_download_scheme_uri;
@property(retain, nonatomic) NSString *scheme_uri; // @synthesize scheme_uri=_scheme_uri;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool tag_backpic_on; // @synthesize tag_backpic_on=_tag_backpic_on;
@property(nonatomic) unsigned long long tips_position; // @synthesize tips_position=_tips_position;
@property(nonatomic) _Bool is_download; // @synthesize is_download=_is_download;
@property(nonatomic) int icon_style; // @synthesize icon_style=_icon_style;
@property(nonatomic) int image_style; // @synthesize image_style=_image_style;
@property(nonatomic) _Bool is_disappeared; // @synthesize is_disappeared=_is_disappeared;
@property(copy, nonatomic) NSString *recommed_icon; // @synthesize recommed_icon=_recommed_icon;
@property(retain, nonatomic) NSNumber *sub_ordinal; // @synthesize sub_ordinal=_sub_ordinal;
@property(nonatomic) unsigned long long ordinal; // @synthesize ordinal=_ordinal;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *sub_title; // @synthesize sub_title=_sub_title;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *pic_size; // @synthesize pic_size=_pic_size;
@property(retain, nonatomic) NSDictionary *pic_max_size; // @synthesize pic_max_size=_pic_max_size;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) _Bool is_full_screen; // @synthesize is_full_screen=_is_full_screen;
@property(nonatomic) unsigned long long stay_seconds; // @synthesize stay_seconds=_stay_seconds;
@property(nonatomic) long long source_type; // @synthesize source_type=_source_type;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) unsigned long long material_id; // @synthesize material_id=_material_id;
@property(retain, nonatomic) NSString *pid_type; // @synthesize pid_type=_pid_type;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(nonatomic) long long positionId; // @synthesize positionId=_positionId;
@property(copy, nonatomic) NSString *bannerId; // @synthesize bannerId=_bannerId;
@property(retain, nonatomic) IMYAdStatisticsAction *statisticsAction; // @synthesize statisticsAction=_statisticsAction;
@property(nonatomic) unsigned long long statisticsState; // @synthesize statisticsState=_statisticsState;
@property(nonatomic) unsigned long long requestState; // @synthesize requestState=_requestState;
- (void).cxx_destruct;
- (id)init;

@end

