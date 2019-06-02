/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUAssetsDataSourceManagerDelegate.h>
#import <libobjc.A.dylib/PUReviewAssetsDataSourceManagerDelegate.h>

@class PUReviewAssetsDataSourceManager, NSString;

@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate, PUReviewAssetsDataSourceManagerDelegate> {

	PUReviewAssetsDataSourceManager* __attachedDataSourceManager;

}

@property (setter=_setAttachedDataSourceManager:,nonatomic,retain) PUReviewAssetsDataSourceManager * _attachedDataSourceManager;              //@synthesize _attachedDataSourceManager=__attachedDataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1 ;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 ;
-(id)createInitialDataSource;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 changeDetails:(id)arg3 ;
-(void)_createDataSourceFromAssetsDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)_setAttachedDataSourceManager:(id)arg1 ;
-(PUReviewAssetsDataSourceManager *)_attachedDataSourceManager;
-(void)attachDataSourceManager:(id)arg1 ;
-(void)detachCurrentDataSourceManager;
@end

