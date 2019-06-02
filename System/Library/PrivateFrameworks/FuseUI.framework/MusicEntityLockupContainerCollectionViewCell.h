/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/MusicEntityVerticalLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityHorizontalLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>

@class UITraitCollection, UIImageView, MusicEntityVerticalLockupView, UIView, UIColor, MusicEntityViewContentDescriptor, NSString;

@interface MusicEntityLockupContainerCollectionViewCell : UICollectionViewCell <MusicEntityVerticalLockupViewDelegate, MusicEntityHorizontalLockupViewDelegate, MusicEntityContentDescriptorViewConfiguring> {

	UITraitCollection* _cachedTraitCollection;
	BOOL _entityDisabled;
	UIImageView* _highlightBackgroundView;
	BOOL _highlightBackgroundViewVisible;
	unsigned long long _highlightBackgroundVisibilityTransactionCount;
	MusicEntityVerticalLockupView* _lockupView;
	UIView* _hairlineView;
	double _textLateralEdgePadding;
	BOOL _showsHairline;
	UIColor* _hairlineColor;

}

@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
@property (nonatomic,copy) UIColor * hairlineColor;                                             //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic) BOOL showsHairline;                                                //@synthesize showsHairline=_showsHairline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(UIColor *)hairlineColor;
-(void)setEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)setEntityDisabled:(BOOL)arg1 ;
-(void)setTextLateralEdgePadding:(double)arg1 ;
-(void)updateForAsynchronousPropertyLoadCompleted;
-(void)_reloadHighlightImageViewAnimated:(BOOL)arg1 ;
-(void)_layoutHairlineView;
-(id)_parentCollectionView;
-(void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned long long)arg2 ;
-(void)horizontalLockupViewDidLayoutSubviews:(id)arg1 ;
-(void)setShowsHairline:(BOOL)arg1 ;
-(BOOL)showsHairline;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end
