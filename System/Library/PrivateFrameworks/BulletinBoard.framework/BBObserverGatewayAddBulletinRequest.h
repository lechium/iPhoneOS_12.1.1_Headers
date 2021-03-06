/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface BBObserverGatewayAddBulletinRequest : NSObject {

	NSString* _bulletinID;
	NSString* _sectionID;
	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,copy) NSString * bulletinID;              //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;               //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDate * timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                  //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(void)setTimeout:(NSDate *)arg1 ;
-(NSDate *)timeout;
-(NSString *)bulletinID;
-(void)setTimeoutHandler:(id)arg1 ;
-(id)timeoutHandler;
-(void)setBulletinID:(NSString *)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
@end

