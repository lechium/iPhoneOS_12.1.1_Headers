/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUCollectionViewCellSeparatorsProtocol.h>

@class HULinkedApplicationView, UIView, NSString, HFItem;

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol> {

	HULinkedApplicationView* _linkedApplicationView;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;

}

@property (nonatomic,readonly) HULinkedApplicationView * linkedApplicationView;                //@synthesize linkedApplicationView=_linkedApplicationView - In the implementation block
@property (nonatomic,readonly) UIView * topSeparatorView;                                      //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparatorView;                                   //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,nonatomic) BOOL topSeparatorVisible; 
@property (assign,nonatomic) BOOL bottomSeparatorVisible; 
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HULinkedApplicationView *)linkedApplicationView;
-(UIView *)topSeparatorView;
-(UIView *)bottomSeparatorView;
-(void)setTopSeparatorVisible:(BOOL)arg1 ;
-(void)setBottomSeparatorVisible:(BOOL)arg1 ;
-(BOOL)topSeparatorVisible;
-(BOOL)bottomSeparatorVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setItem:(HFItem *)arg1 ;
-(HFItem *)item;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)prepareForReuse;
@end

