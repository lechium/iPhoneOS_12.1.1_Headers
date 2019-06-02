/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSUUID, RTLearnedLocationOfInterestMO;

@interface RTLearnedLocationOfInterestVisitMO : NSManagedObject

@property (nonatomic,copy) NSNumber * confidence; 
@property (nonatomic,copy) NSNumber * dataPointCount; 
@property (nonatomic,copy) NSDate * entryDate; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,copy) NSNumber * locationLatitude; 
@property (nonatomic,copy) NSNumber * locationLongitude; 
@property (nonatomic,copy) NSNumber * locationReferenceFrame; 
@property (nonatomic,copy) NSNumber * locationUncertainty; 
@property (nonatomic,retain) RTLearnedLocationOfInterestMO * locationOfInterest; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSNumber * locationOfInterestConfidence; 
@property (nonatomic,copy) NSNumber * locationOfInterestSource; 
+(id)fetchRequest;
+(id)managedObjectWithVisit:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end
