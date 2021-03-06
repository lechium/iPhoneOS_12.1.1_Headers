/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@interface _DPReportGenerator : NSObject <_DPMaintenance>
+(id)randomizeKeys:(id)arg1 andSortByPriority:(BOOL)arg2 ;
+(id)queryKeysForPattern:(id)arg1 storage:(id)arg2 ;
+(id)queryRecordsForKey:(id)arg1 storage:(id)arg2 ;
+(id)filterNonConformingRecordsFrom:(id)arg1 ;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(id)generateReportForKeys:(id)arg1 storage:(id)arg2 ;
-(BOOL)markSubmitted:(id)arg1 storage:(id)arg2 ;
-(id)generateReportUsing:(id)arg1 ;
@end

