/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSMutableDictionary;

@interface SUTabBarAppearance : NSObject <NSCopying> {

	UIImage* _backgroundImage;
	UIImage* _dividerImage;
	UIImage* _selectedDividerImage;
	UIImage* _selectionIndicatorImage;
	double _tabBarButtonSpacing;
	double _tabBarButtonWidth;
	NSMutableDictionary* _titleTextAttributes;

}

@property (nonatomic,retain) UIImage * backgroundImage;                      //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * dividerImage;                         //@synthesize dividerImage=_dividerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedDividerImage;                 //@synthesize selectedDividerImage=_selectedDividerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectionIndicatorImage;              //@synthesize selectionIndicatorImage=_selectionIndicatorImage - In the implementation block
@property (assign,nonatomic) double tabBarButtonSpacing;                     //@synthesize tabBarButtonSpacing=_tabBarButtonSpacing - In the implementation block
@property (assign,nonatomic) double tabBarButtonWidth;                       //@synthesize tabBarButtonWidth=_tabBarButtonWidth - In the implementation block
-(double)tabBarButtonWidth;
-(double)tabBarButtonSpacing;
-(UIImage *)dividerImage;
-(UIImage *)selectedDividerImage;
-(void)enumerateTitleTextAttributesUsingBlock:(/*^block*/id)arg1 ;
-(void)setDividerImage:(UIImage *)arg1 ;
-(void)setSelectedDividerImage:(UIImage *)arg1 ;
-(void)setTabBarButtonSpacing:(double)arg1 ;
-(void)setTabBarButtonWidth:(double)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
@end

