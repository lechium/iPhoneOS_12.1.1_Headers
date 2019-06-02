/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _canonicalName;
	NSString* _uniqueClientId;

}

@property (nonatomic,copy) NSString * canonicalName;               //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,copy) NSString * uniqueClientId;              //@synthesize uniqueClientId=_uniqueClientId - In the implementation block
+(id)clientInfoForNavdPredictions;
+(BOOL)supportsSecureCoding;
-(void)setCanonicalName:(NSString *)arg1 ;
-(NSString *)canonicalName;
-(NSString *)uniqueClientId;
-(id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2 ;
-(void)setUniqueClientId:(NSString *)arg1 ;
-(BOOL)isCalendarClientInfo;
-(BOOL)isNavdClientInfo;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
