/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding> {

	CalLocation* _start;
	CalLocation* _end;
	double _duration;
	NSString* _route;

}

@property (retain) CalLocation * start;              //@synthesize start=_start - In the implementation block
@property (retain) CalLocation * end;                //@synthesize end=_end - In the implementation block
@property (assign) double duration;                  //@synthesize duration=_duration - In the implementation block
@property (copy) NSString * route;                   //@synthesize route=_route - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)route;
-(void)setRoute:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(CalLocation *)start;
-(void)setStart:(CalLocation *)arg1 ;
-(CalLocation *)end;
-(void)setEnd:(CalLocation *)arg1 ;
@end

