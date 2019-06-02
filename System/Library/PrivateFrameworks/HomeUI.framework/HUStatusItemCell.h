/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, HUGridLayoutOptions, UILabel, NSLayoutConstraint, NSArray, UIView, NSString;

@interface HUStatusItemCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	HUGridLayoutOptions* _gridLayoutOptions;
	UILabel* _titleLabel;
	NSLayoutConstraint* _firstBaselineToTopAnchorConstraint;
	NSArray* _staticConstraints;
	UIView* _titleLabelSnapshot;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * firstBaselineToTopAnchorConstraint;              //@synthesize firstBaselineToTopAnchorConstraint=_firstBaselineToTopAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                                            //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) UIView * titleLabelSnapshot;                                            //@synthesize titleLabelSnapshot=_titleLabelSnapshot - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * gridLayoutOptions;                                //@synthesize gridLayoutOptions=_gridLayoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                          //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(BOOL)requiresConstraintBasedLayout;
-(void)_updateTitleLabel;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)firstBaselineToTopAnchorConstraint;
-(void)setTitleLabelSnapshot:(UIView *)arg1 ;
-(UIView *)titleLabelSnapshot;
-(HUGridLayoutOptions *)gridLayoutOptions;
-(void)setGridLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(UILabel *)titleLabel;
-(HFItem *)item;
-(void)updateConstraints;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
