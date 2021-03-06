/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSASPlatform.h>

@class ACAccountStore, NSString;

@interface MSASPlatformImplementation : NSObject <MSASPlatform> {

	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pathAlbumSharingDir;
-(BOOL)shouldEnableNewFeatures;
-(BOOL)shouldLogAtLevel:(int)arg1 ;
-(Class)pluginClass;
-(id)personIDsEnabledForAlbumSharing;
-(BOOL)personIDEnabledForAlbumSharing:(id)arg1 ;
-(BOOL)MSASIsAllowedToTransferMetadata;
-(BOOL)MSASIsAllowedToUploadAssets;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1 ;
-(BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1 ;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1 ;
-(int)MMCSConcurrentConnectionsCount;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4 ;
-(id)pushTokenForPersonID:(id)arg1 ;
-(id)baseSharingURLForPersonID:(id)arg1 ;
-(id)_accountForPersonID:(id)arg1 ;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1 ;
-(id)albumSharingDaemon;
-(BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)init;
@end

