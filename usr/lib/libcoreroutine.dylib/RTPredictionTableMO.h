/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSSet;

@interface RTPredictionTableMO : NSManagedObject

@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSSet * predictions; 
+(id)managedObjectWithName:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)awakeFromInsert;
@end

