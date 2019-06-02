/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, PGGraphNode, PGGraphPersonNode, NSString;

@interface PGKeyPeopleForHolidayData : NSObject {

	NSMutableSet* _holidayRules;
	PGGraphNode* _socialGroupNode;
	PGGraphPersonNode* _personNode;
	NSMutableSet* _momentNodes;

}

@property (nonatomic,retain) NSMutableSet * holidayRules;                 //@synthesize holidayRules=_holidayRules - In the implementation block
@property (nonatomic,retain) PGGraphNode * socialGroupNode;               //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (nonatomic,retain) PGGraphPersonNode * personNode;              //@synthesize personNode=_personNode - In the implementation block
@property (nonatomic,retain) NSMutableSet * momentNodes;                  //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) double score; 
@property (readonly) NSString * uuid; 
-(double)score;
-(NSMutableSet *)momentNodes;
-(void)setMomentNodes:(NSMutableSet *)arg1 ;
-(void)setHolidayRules:(NSMutableSet *)arg1 ;
-(PGGraphPersonNode *)personNode;
-(PGGraphNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 ;
-(NSMutableSet *)holidayRules;
-(id)initWithPersonNode:(id)arg1 ;
-(void)setSocialGroupNode:(PGGraphNode *)arg1 ;
-(void)setPersonNode:(PGGraphPersonNode *)arg1 ;
-(id)init;
-(NSString *)uuid;
@end
