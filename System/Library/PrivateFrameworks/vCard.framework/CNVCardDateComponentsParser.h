/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject {

	CNVCardDateComponentsFormatter* _formatter;
	NSCalendar* _gregorianCalendar;

}
-(id)gregorianDateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2 ;
-(id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2 ;
-(id)init;
@end
