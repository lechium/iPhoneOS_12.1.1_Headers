/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate;

@interface RMUsageRequest : NSManagedObject

@property (nonatomic,retain) NSNumber * forUserDSID; 
@property (nonatomic,retain) NSDate * requestedDate; 
@property (nonatomic,retain) NSDate * acknowledgedDate; 
+(id)fetchOrCreateUsageRequestForUser:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateUsageRequestForLocalUserInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestForLocalUsageRequests;
+(id)fetchRequestForUsageRequestsThatAreForRemoteUsers;
+(id)fetchOrCreateUsageRequestForUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end

