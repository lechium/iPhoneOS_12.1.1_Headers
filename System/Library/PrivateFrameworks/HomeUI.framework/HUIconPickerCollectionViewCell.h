/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class HUIconButton;

@interface HUIconPickerCollectionViewCell : UICollectionViewCell {

	HUIconButton* _iconButton;

}

@property (nonatomic,retain) HUIconButton * iconButton;                        //@synthesize iconButton=_iconButton - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setIconButton:(HUIconButton *)arg1 ;
-(HUIconButton *)iconButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
@end

