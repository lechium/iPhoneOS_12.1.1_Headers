/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICPBDGSRequest, ICPBDGSResponse;

@interface ICPBDGSMessage : PBCodable <NSCopying> {

	ICPBDGSRequest* _request;
	ICPBDGSResponse* _response;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) ICPBDGSRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) ICPBDGSResponse * response;              //@synthesize response=_response - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequest:(ICPBDGSRequest *)arg1 ;
-(void)setResponse:(ICPBDGSResponse *)arg1 ;
-(BOOL)hasRequest;
-(BOOL)hasResponse;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(ICPBDGSRequest *)request;
-(ICPBDGSResponse *)response;
@end
