/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSASPlatform <NSObject>
@optional
-(BOOL)shouldEnableNewFeatures;
-(BOOL)personIDEnabledForAlbumSharing:(id)arg1;
-(BOOL)shouldDownloadEarliestPhotosFirst;
-(void)setSuppressCellular:(BOOL)arg1;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
-(int)MMCSConcurrentConnectionsCount;
-(id)sharedStreamsProtocolVersionString;
-(BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
-(id)metadataSocketOptionsForPersonID:(id)arg1;

@required
-(id)pathAlbumSharingDir;
-(BOOL)shouldLogAtLevel:(int)arg1;
-(Class)pluginClass;
-(id)personIDsEnabledForAlbumSharing;
-(BOOL)MSASIsAllowedToTransferMetadata;
-(BOOL)MSASIsAllowedToUploadAssets;
-(BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
-(id)pushTokenForPersonID:(id)arg1;
-(id)baseSharingURLForPersonID:(id)arg1;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
-(id)albumSharingDaemon;

@end

