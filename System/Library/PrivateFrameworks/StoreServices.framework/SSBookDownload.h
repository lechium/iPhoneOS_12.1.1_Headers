/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownload.h>

@protocol SSBookDownloadQueue, SSBookDownloadStatus;
@class NSString;

@interface SSBookDownload : SSDownload {

	id<SSBookDownloadQueue> _downloadQueue;
	NSString* _downloadPhaseIdentifierOverride;
	id<SSBookDownloadStatus> _downloadStatus;

}

@property (nonatomic,retain) NSString * downloadPhaseIdentifierOverride;              //@synthesize downloadPhaseIdentifierOverride=_downloadPhaseIdentifierOverride - In the implementation block
@property (nonatomic,readonly) id<SSBookDownloadStatus> downloadStatus;               //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (nonatomic,readonly) NSString * downloadID; 
-(id<SSBookDownloadStatus>)downloadStatus;
-(void)setMetadata:(id)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(id)networkConstraints;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(NSString *)downloadID;
-(id)initWithDownloadStatus:(id)arg1 ;
-(void)setDownloadPhaseIdentifierOverride:(NSString *)arg1 ;
-(NSString *)downloadPhaseIdentifierOverride;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)assetsForType:(id)arg1 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(long long)downloadSizeLimit;
-(id)downloadPolicy;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(double)estimatedSecondsRemaining;
-(id)downloadPhaseIdentifier;
-(BOOL)isCancelable;
-(long long)persistentIdentifier;
-(void)restart;
-(BOOL)removeAsset:(id)arg1 ;
-(double)percentComplete;
-(id)metadata;
-(void)resume;
-(id)status;
-(id)valueForProperty:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(void)pause;
@end
