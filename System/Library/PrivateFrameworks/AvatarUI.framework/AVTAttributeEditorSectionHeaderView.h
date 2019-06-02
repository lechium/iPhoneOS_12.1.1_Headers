/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSString;

@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                     //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * displayString; 
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
@end

