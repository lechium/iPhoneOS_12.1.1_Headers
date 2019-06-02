/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
	}  _flags;
	double _location;
	id _reserved;

}

@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) double location; 
@property (nonatomic,readonly) NSDictionary * options; 
+(id)columnTerminatorsForLocale:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)initWithType:(unsigned long long)arg1 location:(double)arg2 ;
-(unsigned long long)tabStopType;
-(id)initWithTextAlignment:(long long)arg1 location:(double)arg2 options:(id)arg3 ;
-(long long)alignment;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(oneway void)release;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(double)location;
@end
