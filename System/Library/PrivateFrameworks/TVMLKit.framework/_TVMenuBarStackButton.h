/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSDictionary;

@interface _TVMenuBarStackButton : UIButton {

	NSDictionary* _tabBarItem;

}

@property (nonatomic,retain) NSDictionary * tabBarItem;              //@synthesize tabBarItem=_tabBarItem - In the implementation block
-(void)_setSelectedOrHighlighted:(BOOL)arg1 ;
-(void)_updateImageEdgeInsets;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
-(void)_configureSubviews;
-(NSDictionary *)tabBarItem;
-(void)setTabBarItem:(NSDictionary *)arg1 ;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
@end

