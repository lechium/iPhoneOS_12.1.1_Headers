/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, HUGridLayoutOptions, UILabel, NSArray, NSString;

@interface HUInstructionsCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	HUGridLayoutOptions* _layoutOptions;
	double _contentBottomMargin;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) double contentBottomMargin;                                       //@synthesize contentBottomMargin=_contentBottomMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(double)contentBottomMargin;
-(void)setContentBottomMargin:(double)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(UILabel *)titleLabel;
-(HFItem *)item;
-(void)updateConstraints;
-(NSArray *)constraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
@end

