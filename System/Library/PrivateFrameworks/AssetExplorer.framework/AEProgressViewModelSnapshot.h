/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetExplorer/AssetExplorer-Structs.h>
@class NSDictionary, PXIndexPathSet;

@interface AEProgressViewModelSnapshot : NSObject {

	unsigned long long _correspondingDataSourceIdentifier;
	NSDictionary* __progressByIndexPath;
	PXIndexPathSet* __pathsWithProgress;

}

@property (nonatomic,readonly) NSDictionary * _progressByIndexPath;                               //@synthesize _progressByIndexPath=__progressByIndexPath - In the implementation block
@property (nonatomic,readonly) PXIndexPathSet * _pathsWithProgress;                               //@synthesize _pathsWithProgress=__pathsWithProgress - In the implementation block
@property (nonatomic,readonly) unsigned long long correspondingDataSourceIdentifier;              //@synthesize correspondingDataSourceIdentifier=_correspondingDataSourceIdentifier - In the implementation block
-(BOOL)hasProgressForIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)progressForIndexPath:(PXSimpleIndexPath)arg1 ;
-(unsigned long long)correspondingDataSourceIdentifier;
-(id)initWithProgressByIndexPath:(id)arg1 dataSourceIdenfitier:(unsigned long long)arg2 ;
-(PXIndexPathSet *)_pathsWithProgress;
-(NSDictionary *)_progressByIndexPath;
@end

