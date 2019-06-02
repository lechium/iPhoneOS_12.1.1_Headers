/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBHostEndpoint : PBCodable <NSCopying> {

	NSString* _hostname;
	NSString* _port;

}

@property (nonatomic,readonly) BOOL hasHostname; 
@property (nonatomic,retain) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) BOOL hasPort; 
@property (nonatomic,retain) NSString * port;                  //@synthesize port=_port - In the implementation block
-(void)setHostname:(NSString *)arg1 ;
-(BOOL)hasHostname;
-(NSString *)hostname;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPort;
-(void)setPort:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(NSString *)port;
@end
