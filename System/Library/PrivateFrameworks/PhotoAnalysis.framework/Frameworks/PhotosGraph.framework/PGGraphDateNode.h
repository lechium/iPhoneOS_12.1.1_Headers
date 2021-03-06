/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>

@class PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphNode {

	PGGraphSeasonNode* _seasonNode;

}

@property (nonatomic,readonly) PGGraphSeasonNode * seasonNode;              //@synthesize seasonNode=_seasonNode - In the implementation block
@property (readonly) long long year; 
+(id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)associatedNodesForRemoval;
-(void)enumerateHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphSeasonNode *)seasonNode;
-(long long)year;
@end

