/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSMutableDictionary, NSNumberFormatter;

@interface IKFormatting : NSObject {

	NSMutableDictionary* _dateFormatters;
	os_unfair_lock_s _dateFormattersLock;
	NSMutableDictionary* _numberFormatters;
	os_unfair_lock_s _numberFormattersLock;
	NSNumberFormatter* _durationFormatter;
	NSNumberFormatter* _durationPaddedFormatter;

}
+(id)isoDateFormatter;
+(id)rfc1123DateFormatter;
+(id)sharedInstance;
-(id)formatDate:(id)arg1 format:(id)arg2 ;
-(id)formatDuration:(id)arg1 ;
-(id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 ;
-(id)init;
@end
