/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IDSBaseMessage, NSArray;


@protocol FTMessageDeliveryProtocol <NSObject>
@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) BOOL hasQueuedItems; 
@property (readonly) BOOL busy; 
@property (assign) BOOL retryInAirplaneMode; 
@property (assign) BOOL logToRegistration; 
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) long long maxMessageSize; 
@property (readonly) long long maxLargeMessageSize; 
@property (assign) unsigned long long maxConcurrentMessages; 
@optional
-(long long)maxMessageSize;
-(void)networkStateChanged;
-(NSArray *)queuedMessages;
-(BOOL)logToRegistration;
-(BOOL)hasQueuedItems;
-(long long)maxLargeMessageSize;
-(void)setLogToRegistration:(BOOL)arg1;
-(BOOL)retryInAirplaneMode;
-(void)setRetryInAirplaneMode:(BOOL)arg1;
-(unsigned long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1;
-(void)cancelMessage:(id)arg1;
-(void)setUserAgent:(id)arg1;
-(NSString *)userAgent;
-(BOOL)sendMessage:(id)arg1;
-(BOOL)busy;
-(NSArray *)allMessages;
-(IDSBaseMessage *)currentMessage;
-(void)invalidate;

@end

