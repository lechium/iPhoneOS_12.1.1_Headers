/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAUserNotificationInfo : NSObject {

	/*^block*/id _handler;
	NSString* _groupIdentifier;

}

@property (nonatomic,copy) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(/*^block*/id)handler;
-(void)setHandler:(/*^block*/id)arg1 ;
@end

