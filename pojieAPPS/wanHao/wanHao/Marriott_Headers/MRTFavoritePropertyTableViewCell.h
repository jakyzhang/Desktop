//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTProperty, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface MRTFavoritePropertyTableViewCell : UITableViewCell
{
    UIImageView *_favoriteImageView;
    UILabel *_favoriteLabel;
    UIView *_bookView;
    UIButton *_bookButton;
    UITableView *_tableView;
    MRTProperty *_property;
}

@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIButton *bookButton; // @synthesize bookButton=_bookButton;
@property(nonatomic) __weak UIView *bookView; // @synthesize bookView=_bookView;
@property(nonatomic) __weak UILabel *favoriteLabel; // @synthesize favoriteLabel=_favoriteLabel;
@property(nonatomic) __weak UIImageView *favoriteImageView; // @synthesize favoriteImageView=_favoriteImageView;
- (void).cxx_destruct;
- (void)bookButtonTapped:(id)arg1;
- (void)populateWithProperty:(id)arg1 tableView:(id)arg2;
- (void)awakeFromNib;

@end

