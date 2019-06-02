/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@class NSString;

@interface _DPReportFilesMaintainer : NSObject <_DPMaintenance> {

	NSString* _reportsDirectoryPath;

}

@property (nonatomic,copy) NSString * reportsDirectoryPath;              //@synthesize reportsDirectoryPath=_reportsDirectoryPath - In the implementation block
+(id)reportsInDirectory:(id)arg1 ;
+(id)retiredReportsPath:(id)arg1 ;
+(BOOL)removeFilesFrom:(id)arg1 olderThanSecond:(double)arg2 ;
+(BOOL)retireFiles:(id)arg1 toDirectory:(id)arg2 ;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(NSString *)reportsDirectoryPath;
-(void)setReportsDirectoryPath:(NSString *)arg1 ;
-(BOOL)doMaintenance;
-(id)initWithDirectoryPath:(id)arg1 ;
-(id)init;
@end

