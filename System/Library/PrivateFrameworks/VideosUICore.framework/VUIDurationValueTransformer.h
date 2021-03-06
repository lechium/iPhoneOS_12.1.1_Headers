/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface VUIDurationValueTransformer : NSValueTransformer {

	NSDateComponentsFormatter* _hoursMinutesFormatter;
	NSDateComponentsFormatter* _secondsFormatter;

}

@property (nonatomic,retain) NSDateComponentsFormatter * hoursMinutesFormatter;              //@synthesize hoursMinutesFormatter=_hoursMinutesFormatter - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * secondsFormatter;                   //@synthesize secondsFormatter=_secondsFormatter - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
+(void)initialize;
-(id)transformedValue:(id)arg1 ;
-(id)init;
-(NSDateComponentsFormatter *)secondsFormatter;
-(NSDateComponentsFormatter *)hoursMinutesFormatter;
-(void)setHoursMinutesFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)setSecondsFormatter:(NSDateComponentsFormatter *)arg1 ;
@end

