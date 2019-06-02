/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDShortTokenLookupInfo : NSObject <NSCopying> {

	BOOL _shouldFetchRootRecord;
	BOOL _forceDSRefetch;
	NSString* _routingKey;
	NSData* _shortSharingTokenHashData;

}

@property (nonatomic,retain) NSString * routingKey;                           //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenHashData;              //@synthesize shortSharingTokenHashData=_shortSharingTokenHashData - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                      //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (assign,nonatomic) BOOL forceDSRefetch;                             //@synthesize forceDSRefetch=_forceDSRefetch - In the implementation block
-(BOOL)shouldFetchRootRecord;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSData *)shortSharingTokenHashData;
-(void)setShortSharingTokenHashData:(NSData *)arg1 ;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(BOOL)forceDSRefetch;
-(void)setForceDSRefetch:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
