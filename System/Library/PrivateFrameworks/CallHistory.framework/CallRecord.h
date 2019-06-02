/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, NSNumber, NSDate, NSUUID;

@interface CallRecord : NSManagedObject

@property (nonatomic,readonly) long long chHandleType; 
@property (nonatomic,copy,readonly) NSSet * chRemoteParticipantHandles; 
@property (nonatomic,readonly) BOOL supportsCallCategory; 
@property (nonatomic,readonly) BOOL supportsHandleType; 
@property (nonatomic,readonly) BOOL supportsLocalParticipantUUID; 
@property (nonatomic,readonly) BOOL supportsOutgoingLocalParticipantUUID; 
@property (nonatomic,readonly) BOOL supportsRemoteParticipantHandles; 
@property (nonatomic,readonly) BOOL supportsServiceProvider; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,copy) NSNumber * answered; 
@property (nonatomic,copy) NSNumber * call_category; 
@property (nonatomic,copy) NSNumber * calltype; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * disconnected_cause; 
@property (nonatomic,copy) NSNumber * duration; 
@property (nonatomic,copy) NSNumber * face_time_data; 
@property (nonatomic,copy) NSNumber * handle_type; 
@property (nonatomic,copy) NSString * iso_country_code; 
@property (nonatomic,retain) NSString * local_address; 
@property (nonatomic,copy) NSUUID * localParticipantUUID; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * number_availability; 
@property (nonatomic,copy) NSNumber * originated; 
@property (nonatomic,copy) NSNumber * read; 
@property (nonatomic,copy) NSString * service_provider; 
@property (nonatomic,copy) NSString * unique_id; 
@property (nonatomic,copy) NSUUID * outgoingLocalParticipantUUID; 
@property (nonatomic,retain) NSSet * remoteParticipantHandles; 
+(id)fetchRequest;
-(id)compositeCallCategoryForContext:(id)arg1 ;
-(id)compositeHandleTypeForContext:(id)arg1 ;
-(id)compositeServiceProviderForContext:(id)arg1 ;
-(id)compositeLocalParticipantUUIDForContext:(id)arg1 ;
-(id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1 ;
-(id)compositeRemoteParticipantHandlesForContext:(id)arg1 ;
-(BOOL)supportsHandleType;
-(BOOL)supportsRemoteParticipantHandles;
-(long long)chHandleType;
-(BOOL)supportsCallCategory;
-(BOOL)supportsLocalParticipantUUID;
-(BOOL)supportsOutgoingLocalParticipantUUID;
-(NSSet *)chRemoteParticipantHandles;
-(BOOL)supportsServiceProvider;
@end
