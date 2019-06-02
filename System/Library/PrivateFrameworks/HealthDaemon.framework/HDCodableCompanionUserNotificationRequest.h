/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableCompanionUserNotificationConfiguration, NSString;

@interface HDCodableCompanionUserNotificationRequest : PBRequest <NSCopying> {

	HDCodableCompanionUserNotificationConfiguration* _notificationConfiguration;
	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                                                             //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationConfiguration; 
@property (nonatomic,retain) HDCodableCompanionUserNotificationConfiguration * notificationConfiguration;              //@synthesize notificationConfiguration=_notificationConfiguration - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)hasRequestIdentifier;
-(void)setNotificationConfiguration:(HDCodableCompanionUserNotificationConfiguration *)arg1 ;
-(BOOL)hasNotificationConfiguration;
-(HDCodableCompanionUserNotificationConfiguration *)notificationConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
