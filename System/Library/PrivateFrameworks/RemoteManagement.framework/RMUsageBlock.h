/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, RMUsage, NSSet;

@interface RMUsageBlock : NSManagedObject

@property (assign,nonatomic) long long durationInMinutes; 
@property (assign,nonatomic) long long screenTimeInSeconds; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,retain) RMUsage * usage; 
@property (nonatomic,retain) NSDate * lastEventDate; 
@property (nonatomic,retain) NSDate * firstPickupDate; 
@property (nonatomic,retain) NSDate * longestSessionStartDate; 
@property (nonatomic,retain) NSDate * longestSessionEndDate; 
@property (assign,nonatomic) long long numberOfPickupsWithoutApplicationUsage; 
@property (nonatomic,retain) NSSet * categories; 
@property (nonatomic,retain) NSSet * countedItems; 
@end

