/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKSQLiteDelegate.h>

@interface CKPackageDBDelegate : NSObject <CKSQLiteDelegate>

@property (nonatomic,readonly) int userVersion; 
-(BOOL)migrateDatabase:(id)arg1 fromVersion:(int)arg2 ;
-(int)userVersion;
@end
