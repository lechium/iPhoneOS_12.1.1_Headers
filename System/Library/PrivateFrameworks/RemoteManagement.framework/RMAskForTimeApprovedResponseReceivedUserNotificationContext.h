/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUserNotificationContext.h>

@class NSString;

@interface RMAskForTimeApprovedResponseReceivedUserNotificationContext : RMUserNotificationContext {

	NSString* _parentName;
	NSString* _requestedResourceName;
	double _amountGranted;

}

@property (nonatomic,copy) NSString * parentName;                         //@synthesize parentName=_parentName - In the implementation block
@property (nonatomic,copy) NSString * requestedResourceName;              //@synthesize requestedResourceName=_requestedResourceName - In the implementation block
@property (assign,nonatomic) double amountGranted;                        //@synthesize amountGranted=_amountGranted - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(double)amountGranted;
-(NSString *)parentName;
-(NSString *)requestedResourceName;
-(id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3 amountGranted:(double)arg4 ;
-(void)setParentName:(NSString *)arg1 ;
-(void)setRequestedResourceName:(NSString *)arg1 ;
-(void)setAmountGranted:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

