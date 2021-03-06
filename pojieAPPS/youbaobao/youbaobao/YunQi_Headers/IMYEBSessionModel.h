//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol IMYEBSessionDetailModel, IMYEBSesstionBannerModel, IMYEBSesstionPicModel;

@interface IMYEBSessionModel : NSObject
{
    NSString *_name;
    NSString *_category_name;
    NSArray<IMYEBSesstionBannerModel> *_banner;
    NSArray<IMYEBSesstionPicModel> *_banner_picture_array;
    long long _banner_type;
    long long _list_style;
    long long _brand_area_id;
    NSString *_brand_picture;
    NSArray<IMYEBSessionDetailModel> *_items;
    long long _next_brand_area_id;
    NSString *_next_brand_area_name;
    long long _is_timer;
    long long _timer_type;
    NSString *_curr_time;
    NSString *_start_time;
    NSString *_end_time;
    long long _bp_link_type;
    NSString *_bp_link_value;
    long long _bp_redirect_type;
    long long _page;
    long long _has_more;
    NSString *_message;
    long long _code;
    NSString *_top_tag;
    NSString *_top_description;
    NSString *_layer_tab;
    NSString *_pay_error_message;
    NSString *_toast;
    long long _coupon_id;
    NSString *_coupon_url;
    NSString *_coupon_start_at;
    NSString *_coupon_end_at;
    long long _coupon_type;
}

+ (void)initialize;
@property(nonatomic) long long coupon_type; // @synthesize coupon_type=_coupon_type;
@property(copy, nonatomic) NSString *coupon_end_at; // @synthesize coupon_end_at=_coupon_end_at;
@property(copy, nonatomic) NSString *coupon_start_at; // @synthesize coupon_start_at=_coupon_start_at;
@property(copy, nonatomic) NSString *coupon_url; // @synthesize coupon_url=_coupon_url;
@property(nonatomic) long long coupon_id; // @synthesize coupon_id=_coupon_id;
@property(copy, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(copy, nonatomic) NSString *pay_error_message; // @synthesize pay_error_message=_pay_error_message;
@property(copy, nonatomic) NSString *layer_tab; // @synthesize layer_tab=_layer_tab;
@property(copy, nonatomic) NSString *top_description; // @synthesize top_description=_top_description;
@property(copy, nonatomic) NSString *top_tag; // @synthesize top_tag=_top_tag;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long has_more; // @synthesize has_more=_has_more;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long bp_redirect_type; // @synthesize bp_redirect_type=_bp_redirect_type;
@property(copy, nonatomic) NSString *bp_link_value; // @synthesize bp_link_value=_bp_link_value;
@property(nonatomic) long long bp_link_type; // @synthesize bp_link_type=_bp_link_type;
@property(copy, nonatomic) NSString *end_time; // @synthesize end_time=_end_time;
@property(copy, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
@property(copy, nonatomic) NSString *curr_time; // @synthesize curr_time=_curr_time;
@property(nonatomic) long long timer_type; // @synthesize timer_type=_timer_type;
@property(nonatomic) long long is_timer; // @synthesize is_timer=_is_timer;
@property(copy, nonatomic) NSString *next_brand_area_name; // @synthesize next_brand_area_name=_next_brand_area_name;
@property(nonatomic) long long next_brand_area_id; // @synthesize next_brand_area_id=_next_brand_area_id;
@property(retain, nonatomic) NSArray<IMYEBSessionDetailModel> *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *brand_picture; // @synthesize brand_picture=_brand_picture;
@property(nonatomic) long long brand_area_id; // @synthesize brand_area_id=_brand_area_id;
@property(nonatomic) long long list_style; // @synthesize list_style=_list_style;
@property(nonatomic) long long banner_type; // @synthesize banner_type=_banner_type;
@property(retain, nonatomic) NSArray<IMYEBSesstionPicModel> *banner_picture_array; // @synthesize banner_picture_array=_banner_picture_array;
@property(retain, nonatomic) NSArray<IMYEBSesstionBannerModel> *banner; // @synthesize banner=_banner;
@property(copy, nonatomic) NSString *category_name; // @synthesize category_name=_category_name;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;

@end

