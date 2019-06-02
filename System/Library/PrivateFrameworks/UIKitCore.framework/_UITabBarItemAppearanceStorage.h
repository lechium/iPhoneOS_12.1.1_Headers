/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor;

@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* _badgeTextAttributesForState;
	UIColor* _badgeColor;
	UIOffset _titleOffset;

}

@property (assign,nonatomic) UIOffset titleOffset;              //@synthesize titleOffset=_titleOffset - In the implementation block
@property (nonatomic,copy) UIColor * badgeColor;                //@synthesize badgeColor=_badgeColor - In the implementation block
-(void)setBadgeColor:(UIColor *)arg1 ;
-(UIColor *)badgeColor;
-(UIOffset)titleOffset;
-(void)setTitleOffset:(UIOffset)arg1 ;
-(id)badgeTextAttributesForState:(unsigned long long)arg1 ;
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)enumerateBadgeTextAttributesWithBlock:(/*^block*/id)arg1 ;
@end

