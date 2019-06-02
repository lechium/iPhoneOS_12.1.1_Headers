/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleEditingCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class CNInstantMessageAddress, NSString;

@interface CNPropertyInstantMessageEditingCell : CNPropertySimpleEditingCell <CNPickerControllerDelegate>

@property (nonatomic,readonly) CNInstantMessageAddress * imAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)labelButtonClicked:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
@end
