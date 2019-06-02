/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>
#import <libobjc.A.dylib/CNUIGeminiDataSourceDelegate.h>

@class CNGeminiPickerController, NSString;

@interface CNPropertyGeminiEditingCell : CNPropertySimpleCell <CNPickerControllerDelegate, CNUIGeminiDataSourceDelegate> {

	CNGeminiPickerController* _geminiPicker;

}

@property (nonatomic,retain) CNGeminiPickerController * geminiPicker;              //@synthesize geminiPicker=_geminiPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
-(id)variableConstraints;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(CNGeminiPickerController *)geminiPicker;
-(void)setGeminiPicker:(CNGeminiPickerController *)arg1 ;
-(void)geminiDataSourceDidUpdate:(id)arg1 ;
-(id)geminiItem;
-(BOOL)shouldIndentWhileEditing;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

