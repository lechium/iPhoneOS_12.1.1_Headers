/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject;

@interface _PASTuple2 : NSObject <NSCopying> {

	NSObject* _first;
	NSObject* _second;

}

@property (nonatomic,readonly) NSObject * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSObject * second;              //@synthesize second=_second - In the implementation block
+(id)tupleWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqualToTuple2:(id)arg1 ;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(NSObject *)first;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)second;
@end

