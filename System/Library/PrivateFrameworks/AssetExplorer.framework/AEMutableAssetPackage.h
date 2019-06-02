/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AEAssetPackage.h>

@interface AEMutableAssetPackage : AEAssetPackage
-(void)storeURL:(id)arg1 forType:(id)arg2 ;
-(void)removeURLForType:(id)arg1 ;
-(void)setSidecarObject:(id)arg1 forKey:(id)arg2 ;
-(void)addSidecarEntriesFromDictionary:(id)arg1 ;
-(void)removeSidecarObjectForKey:(id)arg1 ;
-(void)suppressURLForType:(id)arg1 ;
-(void)expressURLForType:(id)arg1 ;
-(id)_copyMetadataFromDisplayAsset:(id)arg1 ;
-(void)storeMetadataFromReviewAsset:(id)arg1 ;
-(void)storeMetadataFromPHAsset:(id)arg1 imageURL:(id)arg2 adjustmentURL:(id)arg3 ;
-(void)beginSupressingLivePhoto;
-(void)endSuppressingLivePhoto;
-(void)setMediaOrigin:(long long)arg1 ;
-(id)initWithAssetIdentifier:(id)arg1 ;
@end
