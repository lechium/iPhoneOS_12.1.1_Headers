/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _maximumIdentities;
	unsigned long long _maximumFaceprintsPerIdentity;

}

@property (assign,nonatomic) unsigned long long maximumFaceprintsPerIdentity;              //@synthesize maximumFaceprintsPerIdentity=_maximumFaceprintsPerIdentity - In the implementation block
@property (assign,nonatomic) unsigned long long maximumIdentities;                         //@synthesize maximumIdentities=_maximumIdentities - In the implementation block
+(unsigned long long)maximumAllowableIdentities;
+(unsigned long long)maximumAllowableFaceprintsPerIdentity;
+(BOOL)supportsSecureCoding;
-(unsigned long long)maximumIdentities;
-(int)faceIDModelMaximumElementsPerID;
-(void)setMaximumIdentities:(unsigned long long)arg1 ;
-(void)setMaximumFaceprintsPerIdentity:(unsigned long long)arg1 ;
-(unsigned long long)maximumFaceprintsPerIdentity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

