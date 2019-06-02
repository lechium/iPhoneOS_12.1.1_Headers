/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface RTMicroLocation : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	double _probability;

}

@property (nonatomic,retain) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double probability;               //@synthesize probability=_probability - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToMicroLocation:(id)arg1 ;
-(double)probability;
-(id)initWithIdentifier:(id)arg1 probability:(double)arg2 ;
-(void)setProbability:(double)arg1 ;
-(id)init;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
@end

