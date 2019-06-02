/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableSet;

@interface PGPet : NSObject {

	NSSet* _owners;
	NSMutableSet* _momentNodes;

}

@property (nonatomic,retain) NSSet * owners;                      //@synthesize owners=_owners - In the implementation block
@property (nonatomic,retain) NSMutableSet * moments;              //@synthesize momentNodes=_momentNodes - In the implementation block
-(NSMutableSet *)moments;
-(void)setMoments:(NSMutableSet *)arg1 ;
-(NSSet *)owners;
-(void)setOwners:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
