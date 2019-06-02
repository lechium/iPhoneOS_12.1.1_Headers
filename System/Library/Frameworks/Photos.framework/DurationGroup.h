/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface DurationGroup : NSObject {

	BOOL _wasChanged;
	unsigned long long _groupId;
	NSDate* _start;
	NSDate* _end;

}

@property (readonly) unsigned long long groupId;              //@synthesize groupId=_groupId - In the implementation block
@property (retain) NSDate * start;                            //@synthesize start=_start - In the implementation block
@property (retain) NSDate * end;                              //@synthesize end=_end - In the implementation block
@property (assign) BOOL wasChanged;                           //@synthesize wasChanged=_wasChanged - In the implementation block
-(unsigned long long)groupId;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(BOOL)wasChanged;
-(void)setWasChanged:(BOOL)arg1 ;
-(id)description;
-(NSDate *)start;
-(void)setStart:(NSDate *)arg1 ;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
@end

