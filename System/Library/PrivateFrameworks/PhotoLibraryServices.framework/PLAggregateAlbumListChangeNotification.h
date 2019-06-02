/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList, PLAssetContainerListChangeNotification;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLAggregateAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _note;
	unsigned long long _indexOffet;

}
+(id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(id)deletedObjects;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)changedIndexesRelativeToSnapshot;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(NSObject*)albumList;
-(id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(id)insertedObjects;
-(id)insertedIndexes;
-(id)changedIndexes;
-(BOOL)shouldReload;
-(id)deletedIndexes;
-(id)changedObjects;
-(void)dealloc;
-(id)object;
@end

