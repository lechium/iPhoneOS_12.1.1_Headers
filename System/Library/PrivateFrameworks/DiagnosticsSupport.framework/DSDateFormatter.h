/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DSDateFormatter : NSObject {

	NSMutableDictionary* _dateFormatters;

}

@property (nonatomic,retain) NSMutableDictionary * dateFormatters;              //@synthesize dateFormatters=_dateFormatters - In the implementation block
+(id)sharedFormatter;
-(NSMutableDictionary *)dateFormatters;
-(id)formatterWithType:(long long)arg1 ;
-(void)setDateFormatters:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
