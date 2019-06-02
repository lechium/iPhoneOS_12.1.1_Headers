/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject {

	NSMutableSet* _edges;
	NSMutableSet* _indegrees;
	CKRecord* _record;

}

@property (nonatomic,retain) NSMutableSet * edges;                       //@synthesize edges=_edges - In the implementation block
@property (nonatomic,readonly) NSMutableSet * indegrees;                 //@synthesize indegrees=_indegrees - In the implementation block
@property (nonatomic,readonly) unsigned long long indegree; 
@property (nonatomic,retain) CKRecord * record;                          //@synthesize record=_record - In the implementation block
-(NSMutableSet *)indegrees;
-(unsigned long long)indegree;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)CKPropertiesDescription;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEdges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)edges;
@end

