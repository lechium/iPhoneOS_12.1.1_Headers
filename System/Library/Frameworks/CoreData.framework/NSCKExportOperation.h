/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSCKExportMetadata, NSSet;

@interface NSCKExportOperation : NSManagedObject

@property (nonatomic,retain) NSNumber * statusNum; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSCKExportMetadata * exportMetadata; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,retain) NSSet * objects; 
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end
