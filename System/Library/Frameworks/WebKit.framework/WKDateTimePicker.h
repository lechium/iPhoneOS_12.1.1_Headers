/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class NSString, WKContentView;

@interface WKDateTimePicker : NSObject <WKFormControl> {

	RetainPtr<UIDatePicker>* _datePicker;
	NSString* _formatString;
	BOOL _shouldRemoveTimeZoneInformation;
	BOOL _isTimeInput;
	WKContentView* _view;

}
-(RetainPtr<NSDateFormatter>*)dateFormatterForPicker;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
-(id)datePicker;
-(void)dealloc;
-(long long)_timeZoneOffsetFromGMT:(id)arg1 ;
-(void)_dateChangedSetAsString;
-(void)_dateChangedSetAsNumber;
-(void)_dateChanged;
-(void)_dateChangeHandler:(id)arg1 ;
-(id)_sanitizeInputValueForFormatter:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
@end

