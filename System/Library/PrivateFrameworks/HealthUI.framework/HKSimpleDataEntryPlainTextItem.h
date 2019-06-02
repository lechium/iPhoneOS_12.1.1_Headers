/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKSimpleDataEntryItem.h>
#import <libobjc.A.dylib/HKSimpleDataEntryCellDelegate.h>

@class HKSimpleDataEntryPlainTextCell, NSString;

@interface HKSimpleDataEntryPlainTextItem : HKSimpleDataEntryItem <HKSimpleDataEntryCellDelegate> {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	NSString* _text;
	long long _intention;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)doneButtonTapped:(id)arg1 ;
-(void)updateCellDisplay;
-(id)formattedKeyAndValue;
-(void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2 ;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 defaultText:(id)arg3 intention:(long long)arg4 ;
-(id)cell;
@end

