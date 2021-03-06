/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTAction, NSArray;

@interface RTActionCondition : NSObject <NSSecureCoding> {

	RTAction* _action;
	NSArray* _dateIntervals;

}

@property (nonatomic,readonly) RTAction * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSArray * dateIntervals;              //@synthesize dateIntervals=_dateIntervals - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToActionCondition:(id)arg1 ;
-(id)initWithAction:(id)arg1 dateIntervals:(id)arg2 ;
-(NSArray *)dateIntervals;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(RTAction *)action;
@end

