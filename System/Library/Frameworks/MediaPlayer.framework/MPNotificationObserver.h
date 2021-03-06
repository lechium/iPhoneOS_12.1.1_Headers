/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPNotificationObserver : NSObject {

	NSString* _name;
	id _object;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id object;                  //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) id handler;                   //@synthesize handler=_handler - In the implementation block
-(id)initWithName:(id)arg1 object:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_handleNotification:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)handler;
-(id)object;
@end

