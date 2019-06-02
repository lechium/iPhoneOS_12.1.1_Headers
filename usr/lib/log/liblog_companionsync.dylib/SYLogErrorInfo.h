/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/log/liblog_companionsync.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <liblog_companionsync.dylib/liblog_companionsync.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSError;

@interface SYLogErrorInfo : PBCodable <NSCopying> {

	long long _code;
	NSString* _domain;

}

@property (nonatomic,readonly) NSError * cocoaError; 
@property (nonatomic,retain) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                      //@synthesize code=_code - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithCocoaError:(id)arg1 ;
-(NSError *)cocoaError;
-(void)setDomain:(NSString *)arg1 ;
-(void)setCode:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(long long)code;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
