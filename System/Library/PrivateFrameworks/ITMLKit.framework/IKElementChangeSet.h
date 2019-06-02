/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, NSDictionary;

@interface IKElementChangeSet : NSObject {

	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;
	NSDictionary* _movedIndexesByNewIndex;
	NSDictionary* _updatedIndexesByNewIndex;

}

@property (nonatomic,copy,readonly) NSIndexSet * addedIndexes;                            //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes;                          //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexesByNewIndex;                //@synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * updatedIndexesByNewIndex;              //@synthesize updatedIndexesByNewIndex=_updatedIndexesByNewIndex - In the implementation block
-(id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4 ;
-(id)changesetByConcatenatingChangeset:(id)arg1 ;
-(long long)oldIndexForNewIndex:(long long)arg1 ;
-(NSIndexSet *)removedIndexes;
-(long long)newIndexForOldIndex:(long long)arg1 ;
-(NSDictionary *)updatedIndexesByNewIndex;
-(NSIndexSet *)addedIndexes;
-(NSDictionary *)movedIndexesByNewIndex;
@end
