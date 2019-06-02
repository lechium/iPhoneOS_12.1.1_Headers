/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSString, NSXPCConnection, PLAssetsdClientServiceSender;

@interface PHAvailabilityRequest : NSObject {

	AB _isCancelled;
	NSManagedObjectID* _assetObjectID;
	NSString* _taskIdentifier;
	NSXPCConnection* _clientConnection;
	PLAssetsdClientServiceSender* _clientSender;

}

@property (nonatomic,readonly) NSManagedObjectID * assetObjectID;                      //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (nonatomic,copy) NSString * taskIdentifier;                                  //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * clientConnection;                       //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,retain) PLAssetsdClientServiceSender * clientSender;              //@synthesize clientSender=_clientSender - In the implementation block
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)runDaemonSide;
-(PLAssetsdClientServiceSender *)clientSender;
-(void)setClientSender:(PLAssetsdClientServiceSender *)arg1 ;
-(id)initWithAssetObjectID:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(id)plistDictionary;
-(NSManagedObjectID *)assetObjectID;
-(NSXPCConnection *)clientConnection;
-(void)setClientConnection:(NSXPCConnection *)arg1 ;
-(id)description;
-(void)cancel;
-(BOOL)isCancelled;
@end

