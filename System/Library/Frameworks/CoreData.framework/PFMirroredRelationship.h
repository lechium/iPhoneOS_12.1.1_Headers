/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFMirroredRelationship : NSObject
+(id)mirroredRelationshipWithManyToManyRecord:(id)arg1 values:(id)arg2 andManagedObjectModel:(id)arg3 ;
+(id)mirroredRelationshipWithDeletedRecordType:(id)arg1 recordName:(id)arg2 andManagedObjectModel:(id)arg3 ;
+(id)mirroredRelationshipWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToObjectWithRecordName:(id)arg3 byRelationship:(id)arg4 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3 ;
@end

