/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTStateModelEarliestLatestEl : NSObject <NSSecureCoding> {

	double _earliestEl_s;
	double _latestEl_s;

}

@property (assign,nonatomic) double earliestEl_s;              //@synthesize earliestEl_s=_earliestEl_s - In the implementation block
@property (assign,nonatomic) double latestEl_s;                //@synthesize latestEl_s=_latestEl_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithEarliest:(double)arg1 andLatest:(double)arg2 ;
-(double)earliestEl_s;
-(double)latestEl_s;
-(void)setEarliestEl_s:(double)arg1 ;
-(void)setLatestEl_s:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
