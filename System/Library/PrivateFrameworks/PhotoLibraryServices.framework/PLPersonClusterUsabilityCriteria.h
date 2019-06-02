/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPersonClusterUsabilityCriteriaDataSource, PLPersonClusterUsabilityPreferences;
@interface PLPersonClusterUsabilityCriteria : NSObject {

	id<PLPersonClusterUsabilityCriteriaDataSource> _dataSource;
	id<PLPersonClusterUsabilityPreferences> _preferences;

}

@property (assign,nonatomic) unsigned long long persistentTargetFaceCount; 
+(id)sharedInstance;
-(void)updatePersistentTargetFaceCount;
-(id)initWithDataSource:(id)arg1 preferences:(id)arg2 ;
-(unsigned long long)calculateTargetFaceCount;
-(void)setPersistentTargetFaceCount:(unsigned long long)arg1 ;
-(unsigned long long)calculateTargetFaceCountFromResults:(id)arg1 withMaxUnverifiedClusters:(unsigned long long)arg2 ;
-(unsigned long long)_reviseMaxUnverifiedClusters:(unsigned long long)arg1 withVerifiedPersonsCount:(unsigned long long)arg2 ;
-(unsigned long long)persistentTargetFaceCount;
-(id)initWithPhotoLibrary:(id)arg1 ;
@end

