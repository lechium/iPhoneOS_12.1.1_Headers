/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSString, NSSet;

@interface PGGraphBusinessNode : PGGraphNode

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (nonatomic,copy,readonly) NSSet * businessCategories; 
@property (nonatomic,readonly) NSSet * publicEventNodes; 
-(long long)venueCapacity;
-(id)keywordDescription;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)businessCategories;
-(id)associatedNodesForRemoval;
-(void)enumerateBusinessCategoryNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)publicEventNodes;
-(NSString *)name;
@end
