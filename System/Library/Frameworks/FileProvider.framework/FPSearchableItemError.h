/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FPSearchableItemError : PBCodable <NSCopying> {

	long long _code;
	NSString* _customDomain;
	int _domain;

}

@property (assign,nonatomic) int domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                       //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomDomain; 
@property (nonatomic,retain) NSString * customDomain;              //@synthesize customDomain=_customDomain - In the implementation block
+(id)stringFromError:(id)arg1 ;
+(id)errorFromString:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCustomDomain:(NSString *)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(BOOL)hasCustomDomain;
-(NSString *)customDomain;
-(void)setDomain:(int)arg1 ;
-(void)setCode:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)domain;
-(long long)code;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

