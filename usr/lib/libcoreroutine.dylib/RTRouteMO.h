/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSDate, NSString, NSOrderedSet;

@interface RTRouteMO : NSManagedObject

@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSDate * stop; 
@property (nonatomic,retain) NSUUID * originLocationOfInterestIdentifier; 
@property (nonatomic,retain) NSUUID * destinationLocationOfInterestIdentifier; 
@property (nonatomic,retain) NSUUID * originVisitIdentifier; 
@property (nonatomic,retain) NSUUID * destinationVisitIdentifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSOrderedSet * locations; 
+(id)fetchRequest;
+(id)managedObjectWithRoute:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end
