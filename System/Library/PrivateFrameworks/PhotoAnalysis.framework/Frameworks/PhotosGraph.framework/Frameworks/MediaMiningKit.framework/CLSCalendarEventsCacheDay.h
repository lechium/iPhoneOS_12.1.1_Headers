/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject {

	long long _day;
	NSMutableSet* _events;

}

@property (assign,nonatomic) long long day;                        //@synthesize day=_day - In the implementation block
@property (nonatomic,readonly) NSMutableSet * events;              //@synthesize events=_events - In the implementation block
-(NSMutableSet *)events;
-(id)initWithDay:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(long long)day;
-(void)setDay:(long long)arg1 ;
@end
