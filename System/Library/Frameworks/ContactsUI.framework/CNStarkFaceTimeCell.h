/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>

@protocol CNPropertyCellDelegate;
@class NSDictionary, UILabel, CNTransportButton;

@interface CNStarkFaceTimeCell : CNContactCell {

	id<CNPropertyCellDelegate> _delegate;
	NSDictionary* _labelTextAttributes;
	UILabel* _faceTimeLabel;
	CNTransportButton* _transportIcon;

}

@property (nonatomic,retain) UILabel * faceTimeLabel;                                 //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (nonatomic,readonly) CNTransportButton * transportIcon;                     //@synthesize transportIcon=_transportIcon - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                        //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)_cnui_applyContactStyle;
-(CNTransportButton *)transportIcon;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(id)constantConstraints;
-(void)performDefaultAction;
-(NSDictionary *)labelTextAttributes;
-(UILabel *)faceTimeLabel;
-(void)transportButtonClicked:(id)arg1 ;
-(void)setFaceTimeLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
-(void)tintColorDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

