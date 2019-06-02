/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphPersonNode, NSArray;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory {

	PGGraphPersonNode* _personNode;
	NSArray* _curatedAssets;
	NSArray* _facedAssets;

}

@property (readonly) PGGraphPersonNode * personNode;              //@synthesize personNode=_personNode - In the implementation block
@property (retain) NSArray * facedAssets;                         //@synthesize facedAssets=_facedAssets - In the implementation block
@property (retain) NSArray * curatedAssets;                       //@synthesize curatedAssets=_curatedAssets - In the implementation block
-(NSArray *)curatedAssets;
-(void)setCuratedAssets:(NSArray *)arg1 ;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(NSArray *)facedAssets;
-(id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2 ;
-(PGGraphPersonNode *)personNode;
-(id)uuid;
@end

