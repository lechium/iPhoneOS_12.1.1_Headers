/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEProfilePayloadBaseDelegate.h>

@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate> {

	NSDictionary* _payloadAtom;
	NSMutableDictionary* _pendingCertificates;
	NSDictionary* _pluginUpgradeInfo;

}

@property (nonatomic,retain) NSDictionary * payloadAtom;                   //@synthesize payloadAtom=_payloadAtom - In the implementation block
@property (retain) NSMutableDictionary * pendingCertificates;              //@synthesize pendingCertificates=_pendingCertificates - In the implementation block
@property (retain) NSDictionary * pluginUpgradeInfo;                       //@synthesize pluginUpgradeInfo=_pluginUpgradeInfo - In the implementation block
-(id)validatePayload;
-(NSDictionary *)payloadAtom;
-(BOOL)addCertificatePending:(id)arg1 certificateTag:(id)arg2 accessGroup:(id)arg3 ;
-(void)setPayloadAtom:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)pendingCertificates;
-(void)setPendingCertificates:(NSMutableDictionary *)arg1 ;
-(id)getPreprocessedPayloadContents;
-(BOOL)setPostprocessedPayloadContents:(id)arg1 ;
-(BOOL)addCertificatePending:(id)arg1 certificateTag:(id)arg2 ;
-(NSDictionary *)pluginUpgradeInfo;
-(void)setPluginUpgradeInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPayload:(id)arg1 ;
@end

