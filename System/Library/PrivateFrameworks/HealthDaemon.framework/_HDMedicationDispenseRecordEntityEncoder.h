/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/_HDMedicalRecordEntityEncoder.h>

@interface _HDMedicationDispenseRecordEntityEncoder : _HDMedicalRecordEntityEncoder
-(id)orderedProperties;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
@end

