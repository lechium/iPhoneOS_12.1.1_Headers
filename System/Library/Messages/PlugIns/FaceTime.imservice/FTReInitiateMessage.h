/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSNumber, NSArray, NSDictionary;

@interface FTReInitiateMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfBlob;
	NSData* _selfPushToken;
	NSNumber* _selfNATType;
	NSData* _selfNatIP;
	NSArray* _peers;
	NSArray* _canonicalizedPeers;
	NSDictionary* _regionInformation;

}

@property (copy) NSData * selfBlob;                             //@synthesize selfBlob=_selfBlob - In the implementation block
@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSNumber * selfNATType;                        //@synthesize selfNATType=_selfNATType - In the implementation block
@property (copy) NSData * selfNatIP;                            //@synthesize selfNatIP=_selfNatIP - In the implementation block
@property (copy) NSDictionary * regionInformation;              //@synthesize regionInformation=_regionInformation - In the implementation block
@property (copy) NSArray * peers;                               //@synthesize peers=_peers - In the implementation block
@property (copy) NSArray * canonicalizedPeers;                  //@synthesize canonicalizedPeers=_canonicalizedPeers - In the implementation block
-(id)messageBody;
-(NSArray *)peers;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
-(void)setPeers:(NSArray *)arg1 ;
-(id)requiredKeys;
-(void)setSelfBlob:(NSData *)arg1 ;
-(NSData *)selfBlob;
-(NSArray *)canonicalizedPeers;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setSelfNATType:(NSNumber *)arg1 ;
-(void)setSelfNatIP:(NSData *)arg1 ;
-(void)setRegionInformation:(NSDictionary *)arg1 ;
-(NSData *)selfPushToken;
-(NSNumber *)selfNATType;
-(NSDictionary *)regionInformation;
-(NSData *)selfNatIP;
-(void)setCanonicalizedPeers:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

