/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RTTransaction : NSObject {

	id _object;
	NSString* _userDescription;

}

@property (nonatomic,retain) id object;                             //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * userDescription;              //@synthesize userDescription=_userDescription - In the implementation block
-(id)initForObject:(id)arg1 ;
-(id)initForObject:(id)arg1 description:(id)arg2 ;
-(NSString *)userDescription;
-(void)setUserDescription:(NSString *)arg1 ;
-(id)init;
-(id)object;
-(void)setObject:(id)arg1 ;
@end

