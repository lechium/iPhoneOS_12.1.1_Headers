/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextField, NSArray, UIImageView, NSDictionary;

@interface CNAddressComponentTextFieldCell : UITableViewCell {

	UITextField* _textFieldForChevron;
	NSArray* _componentConstraints;
	UITextField* _textField;
	UIImageView* _chevron;

}

@property (nonatomic,retain) UITextField * textField;                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                                 //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (assign,nonatomic,__weak) UITextField * textFieldForChevron;              //@synthesize textFieldForChevron=_textFieldForChevron - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes; 
@property (nonatomic,retain) NSArray * componentConstraints;                        //@synthesize componentConstraints=_componentConstraints - In the implementation block
+(id)cellIdentifier;
-(id)addTextField;
-(void)setupTextFields;
-(id)currentConstraintsForMetrics:(id)arg1 ;
-(void)setTextFieldForChevron:(UITextField *)arg1 ;
-(void)setComponentConstraints:(NSArray *)arg1 ;
-(NSArray *)componentConstraints;
-(UITextField *)textFieldForChevron;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(NSArray *)textFields;
-(UITextField *)textField;
-(void)updateConstraints;
-(void)prepareForReuse;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
@end

