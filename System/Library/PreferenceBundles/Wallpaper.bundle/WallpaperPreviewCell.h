/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <Preferences/PSTableCell.h>

@class UIButton;

@interface WallpaperPreviewCell : PSTableCell {

	UIButton* __homeScreenThumbnailButton;
	UIButton* __lockScreenThumbnailButton;
	CGSize __thumbnailSize;

}

@property (setter=_setHomeScreenThumbnailButton:,nonatomic,retain) UIButton * _homeScreenThumbnailButton;              //@synthesize _homeScreenThumbnailButton=__homeScreenThumbnailButton - In the implementation block
@property (setter=_setLockScreenThumbnailButton:,nonatomic,retain) UIButton * _lockScreenThumbnailButton;              //@synthesize _lockScreenThumbnailButton=__lockScreenThumbnailButton - In the implementation block
@property (assign,setter=_setThumbnailSize:,nonatomic) CGSize _thumbnailSize;                                          //@synthesize _thumbnailSize=__thumbnailSize - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UIButton *)_homeScreenThumbnailButton;
-(void)_setHomeScreenThumbnailButton:(id)arg1 ;
-(UIButton *)_lockScreenThumbnailButton;
-(void)_setLockScreenThumbnailButton:(id)arg1 ;
-(void)_setThumbnailSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)_thumbnailSize;
@end

