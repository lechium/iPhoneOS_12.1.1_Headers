/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphCollectionNode;

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory {

	PGGraphCollectionNode* _collectionNode;
	unsigned long long _meaning;

}

@property (readonly) PGGraphCollectionNode * collectionNode;              //@synthesize collectionNode=_collectionNode - In the implementation block
@property (readonly) unsigned long long meaning;                          //@synthesize meaning=_meaning - In the implementation block
-(unsigned long long)meaning;
-(id)initWithCategory:(unsigned long long)arg1 collectionNode:(id)arg2 meaning:(unsigned long long)arg3 controller:(id)arg4 ;
-(PGGraphCollectionNode *)collectionNode;
@end

